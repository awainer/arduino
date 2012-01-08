# coding=utf-8
import sys
import string
from PIL import Image, ImageFont, ImageDraw

DEBUG = False
HEIGHT = 8
WIDTH = 5
FONT = '/usr/share/fonts/liberation/LiberationMono-Bold.ttf'
#ANTIALIAS = False
VARNAME = 'letters'

TEXT = string.letters + string.digits + string.punctuation
if len(sys.argv) > 1:
    TEXT = sys.argv[1]

def escape(c):
    if c in ("'", '\\'):
        return '\\' + c
    else:
        return c

with open('letters.h', 'w') as letters_h:
    letters_h.write('''#ifndef letters_h
#define letters_h

#include <Arduino.h>

#define WIDTH %d
#define HEIGHT %d

extern byte %s[128][WIDTH];

void init_letters();

#endif\n''' % (WIDTH, HEIGHT, VARNAME))


with open('letters.cpp', 'w') as letters_cpp:
    letters_cpp.write('#include "letters.h"\n')
    letters_cpp.write('byte %s[128][WIDTH];\n' % VARNAME)
    letters_cpp.write('void init_letters() {\n')

    for character in TEXT:
        top_margin = 0
        previous_height = 0
        while True:
            font = ImageFont.truetype(FONT, HEIGHT + 2)
            w,h = font.getsize(character)
            image = Image.new('1', (WIDTH, HEIGHT))
            draw = ImageDraw.Draw(image)
            draw.text((0, top_margin), character, font=font, fill=1)
            if DEBUG:
                image.save('./' + (character) + '.ppm', 'PPM')
            bbox = image.getbbox()
            if bbox is None:
                top_margin -= 1
                continue
            left,top,right,bottom = bbox
            actual_height = bottom - top
            if previous_height < actual_height < HEIGHT:
                previous_height = actual_height
                top_margin -= 1
                continue
            break

        pix = image.load()
        for i,x in enumerate(xrange(WIDTH)):
            letters_cpp.write("    %s['%s'][%d] = byte(B" % (VARNAME, escape(character), i))
            for y in xrange(0,HEIGHT):
                letters_cpp.write(str(pix[x,y]))
            letters_cpp.write(');\n')
        letters_cpp.write('\n')
    letters_cpp.write('}\n')
