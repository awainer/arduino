# coding=utf-8
import sys
import string
from PIL import Image, ImageFont, ImageDraw

HEIGHT = 10
WIDTH = 5
FONT = '/usr/share/fonts/liberation/LiberationMono-Bold.ttf'
VARNAME = 'letters'

TEXT = string.letters + string.digits + string.punctuation
if len(sys.argv) > 1:
    TEXT = sys.argv[1]

font = ImageFont.truetype(FONT, HEIGHT)

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

#endif''' % (WIDTH, HEIGHT - 2, VARNAME))

with open('letters.cpp', 'w') as letters_cpp:
    letters_cpp.write('#include "letters.h"\n')
    letters_cpp.write('byte %s[128][WIDTH];\n' % VARNAME)
    letters_cpp.write('void init_letters() {\n')

    for character in TEXT:
        image = Image.new('1',(WIDTH, HEIGHT))
        draw = ImageDraw.Draw(image)
        draw.text((0, 0), character, font=font, fill=1)
        pix = image.load()
        for i,x in enumerate(xrange(WIDTH)):
            letters_cpp.write("    %s['%s'][%d] = byte(B" % (VARNAME, escape(character), i))
            for y in xrange(1,HEIGHT-1):
                letters_cpp.write(str(pix[x,y]))
            letters_cpp.write(');\n')
        letters_cpp.write('\n')
    letters_cpp.write('}\n')
