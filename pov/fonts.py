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

print '#define WIDTH %d' % WIDTH
print '#define HEIGHT %d' % (HEIGHT - 2) # FIXME
print 'byte %s[128][%d];' % (VARNAME, WIDTH)
print 'void init_letters() {'

for character in TEXT:
    image = Image.new('1',(WIDTH, HEIGHT))
    draw = ImageDraw.Draw(image)
    draw.text((0, 0), character, font=font, fill=1)
    pix = image.load()
    for i,x in enumerate(xrange(WIDTH)):
        sys.stdout.write("    %s['%s'][%d] = byte(B" % (VARNAME, escape(character), i))
        for y in xrange(1,HEIGHT-1):
            sys.stdout.write(str(pix[x,y]))
        print ');'
    print
print '}'
