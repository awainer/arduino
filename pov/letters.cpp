#include "letters.h"
byte letters[128][WIDTH];
void init_letters() {
    letters['a'][0] = byte(B00100100);
    letters['a'][1] = byte(B00101010);
    letters['a'][2] = byte(B00101010);
    letters['a'][3] = byte(B00101010);
    letters['a'][4] = byte(B00011100);

    letters['b'][0] = byte(B11111110);
    letters['b'][1] = byte(B00100010);
    letters['b'][2] = byte(B00100010);
    letters['b'][3] = byte(B00100010);
    letters['b'][4] = byte(B00011100);

    letters['c'][0] = byte(B00011100);
    letters['c'][1] = byte(B00100010);
    letters['c'][2] = byte(B00100010);
    letters['c'][3] = byte(B00100010);
    letters['c'][4] = byte(B00010100);

    letters['d'][0] = byte(B00011100);
    letters['d'][1] = byte(B00100010);
    letters['d'][2] = byte(B00100010);
    letters['d'][3] = byte(B00100010);
    letters['d'][4] = byte(B11111110);

    letters['e'][0] = byte(B00011100);
    letters['e'][1] = byte(B00101010);
    letters['e'][2] = byte(B00101010);
    letters['e'][3] = byte(B00101010);
    letters['e'][4] = byte(B00011010);

    letters['f'][0] = byte(B00000000);
    letters['f'][1] = byte(B00100000);
    letters['f'][2] = byte(B01111110);
    letters['f'][3] = byte(B10100000);
    letters['f'][4] = byte(B10100000);

    letters['g'][0] = byte(B01110010);
    letters['g'][1] = byte(B10001010);
    letters['g'][2] = byte(B10001010);
    letters['g'][3] = byte(B10001010);
    letters['g'][4] = byte(B11111100);

    letters['h'][0] = byte(B11111110);
    letters['h'][1] = byte(B00100000);
    letters['h'][2] = byte(B00100000);
    letters['h'][3] = byte(B00100000);
    letters['h'][4] = byte(B00011110);

    letters['i'][0] = byte(B00000010);
    letters['i'][1] = byte(B00100010);
    letters['i'][2] = byte(B10111110);
    letters['i'][3] = byte(B00000010);
    letters['i'][4] = byte(B00000010);

    letters['j'][0] = byte(B00000000);
    letters['j'][1] = byte(B00100000);
    letters['j'][2] = byte(B10111111);
    letters['j'][3] = byte(B00000000);
    letters['j'][4] = byte(B00000000);

    letters['k'][0] = byte(B11111110);
    letters['k'][1] = byte(B00001000);
    letters['k'][2] = byte(B00011000);
    letters['k'][3] = byte(B00100100);
    letters['k'][4] = byte(B00000010);

    letters['l'][0] = byte(B00000010);
    letters['l'][1] = byte(B10000010);
    letters['l'][2] = byte(B11111110);
    letters['l'][3] = byte(B00000010);
    letters['l'][4] = byte(B00000010);

    letters['m'][0] = byte(B00111110);
    letters['m'][1] = byte(B00100000);
    letters['m'][2] = byte(B00011110);
    letters['m'][3] = byte(B00100000);
    letters['m'][4] = byte(B00011110);

    letters['n'][0] = byte(B00111110);
    letters['n'][1] = byte(B00100000);
    letters['n'][2] = byte(B00100000);
    letters['n'][3] = byte(B00100000);
    letters['n'][4] = byte(B00011110);

    letters['o'][0] = byte(B00011100);
    letters['o'][1] = byte(B00100010);
    letters['o'][2] = byte(B00100010);
    letters['o'][3] = byte(B00100010);
    letters['o'][4] = byte(B00011100);

    letters['p'][0] = byte(B11111110);
    letters['p'][1] = byte(B10001000);
    letters['p'][2] = byte(B10001000);
    letters['p'][3] = byte(B10001000);
    letters['p'][4] = byte(B01110000);

    letters['q'][0] = byte(B01110000);
    letters['q'][1] = byte(B10001000);
    letters['q'][2] = byte(B10001000);
    letters['q'][3] = byte(B10001000);
    letters['q'][4] = byte(B11111110);

    letters['r'][0] = byte(B00000000);
    letters['r'][1] = byte(B00111110);
    letters['r'][2] = byte(B00010000);
    letters['r'][3] = byte(B00100000);
    letters['r'][4] = byte(B00100000);

    letters['s'][0] = byte(B00010010);
    letters['s'][1] = byte(B00101010);
    letters['s'][2] = byte(B00101010);
    letters['s'][3] = byte(B00101010);
    letters['s'][4] = byte(B00100110);

    letters['t'][0] = byte(B00000000);
    letters['t'][1] = byte(B00100000);
    letters['t'][2] = byte(B01111100);
    letters['t'][3] = byte(B00100010);
    letters['t'][4] = byte(B00100010);

    letters['u'][0] = byte(B00111100);
    letters['u'][1] = byte(B00000010);
    letters['u'][2] = byte(B00000010);
    letters['u'][3] = byte(B00000010);
    letters['u'][4] = byte(B00111110);

    letters['v'][0] = byte(B00100000);
    letters['v'][1] = byte(B00011100);
    letters['v'][2] = byte(B00000010);
    letters['v'][3] = byte(B00011100);
    letters['v'][4] = byte(B00100000);

    letters['w'][0] = byte(B00111000);
    letters['w'][1] = byte(B00000110);
    letters['w'][2] = byte(B00011000);
    letters['w'][3] = byte(B00000110);
    letters['w'][4] = byte(B00111000);

    letters['x'][0] = byte(B00100010);
    letters['x'][1] = byte(B00010100);
    letters['x'][2] = byte(B00001000);
    letters['x'][3] = byte(B00010100);
    letters['x'][4] = byte(B00100010);

    letters['y'][0] = byte(B10000010);
    letters['y'][1] = byte(B01110010);
    letters['y'][2] = byte(B00001100);
    letters['y'][3] = byte(B01110000);
    letters['y'][4] = byte(B10000000);

    letters['z'][0] = byte(B00100010);
    letters['z'][1] = byte(B00100110);
    letters['z'][2] = byte(B00101010);
    letters['z'][3] = byte(B00110010);
    letters['z'][4] = byte(B00100010);

    letters['A'][0] = byte(B00000110);
    letters['A'][1] = byte(B00111000);
    letters['A'][2] = byte(B11001000);
    letters['A'][3] = byte(B00111000);
    letters['A'][4] = byte(B00000110);

    letters['B'][0] = byte(B11111110);
    letters['B'][1] = byte(B10010010);
    letters['B'][2] = byte(B10010010);
    letters['B'][3] = byte(B10010010);
    letters['B'][4] = byte(B01101100);

    letters['C'][0] = byte(B01111100);
    letters['C'][1] = byte(B10000010);
    letters['C'][2] = byte(B10000010);
    letters['C'][3] = byte(B10000010);
    letters['C'][4] = byte(B01000100);

    letters['D'][0] = byte(B11111110);
    letters['D'][1] = byte(B10000010);
    letters['D'][2] = byte(B10000010);
    letters['D'][3] = byte(B01000100);
    letters['D'][4] = byte(B00111000);

    letters['E'][0] = byte(B11111110);
    letters['E'][1] = byte(B10010010);
    letters['E'][2] = byte(B10010010);
    letters['E'][3] = byte(B10010010);
    letters['E'][4] = byte(B10000010);

    letters['F'][0] = byte(B11111110);
    letters['F'][1] = byte(B10010000);
    letters['F'][2] = byte(B10010000);
    letters['F'][3] = byte(B10010000);
    letters['F'][4] = byte(B10000000);

    letters['G'][0] = byte(B01111100);
    letters['G'][1] = byte(B10000010);
    letters['G'][2] = byte(B10000010);
    letters['G'][3] = byte(B10010010);
    letters['G'][4] = byte(B01011100);

    letters['H'][0] = byte(B11111110);
    letters['H'][1] = byte(B00010000);
    letters['H'][2] = byte(B00010000);
    letters['H'][3] = byte(B00010000);
    letters['H'][4] = byte(B11111110);

    letters['I'][0] = byte(B10000010);
    letters['I'][1] = byte(B10000010);
    letters['I'][2] = byte(B11111110);
    letters['I'][3] = byte(B10000010);
    letters['I'][4] = byte(B10000010);

    letters['J'][0] = byte(B00000100);
    letters['J'][1] = byte(B00000010);
    letters['J'][2] = byte(B10000010);
    letters['J'][3] = byte(B11111100);
    letters['J'][4] = byte(B00000000);

    letters['K'][0] = byte(B11111110);
    letters['K'][1] = byte(B00010000);
    letters['K'][2] = byte(B00101000);
    letters['K'][3] = byte(B01000100);
    letters['K'][4] = byte(B10000010);

    letters['L'][0] = byte(B11111110);
    letters['L'][1] = byte(B00000010);
    letters['L'][2] = byte(B00000010);
    letters['L'][3] = byte(B00000010);
    letters['L'][4] = byte(B00000010);

    letters['M'][0] = byte(B11111110);
    letters['M'][1] = byte(B01100000);
    letters['M'][2] = byte(B00011000);
    letters['M'][3] = byte(B01100000);
    letters['M'][4] = byte(B11111110);

    letters['N'][0] = byte(B11111110);
    letters['N'][1] = byte(B01100000);
    letters['N'][2] = byte(B00010000);
    letters['N'][3] = byte(B00001100);
    letters['N'][4] = byte(B11111110);

    letters['O'][0] = byte(B01111100);
    letters['O'][1] = byte(B10000010);
    letters['O'][2] = byte(B10000010);
    letters['O'][3] = byte(B10000010);
    letters['O'][4] = byte(B01111100);

    letters['P'][0] = byte(B11111110);
    letters['P'][1] = byte(B10010000);
    letters['P'][2] = byte(B10010000);
    letters['P'][3] = byte(B10010000);
    letters['P'][4] = byte(B01100000);

    letters['Q'][0] = byte(B01111100);
    letters['Q'][1] = byte(B10000010);
    letters['Q'][2] = byte(B10000011);
    letters['Q'][3] = byte(B10000010);
    letters['Q'][4] = byte(B01111100);

    letters['R'][0] = byte(B11111110);
    letters['R'][1] = byte(B10010000);
    letters['R'][2] = byte(B10011000);
    letters['R'][3] = byte(B10010100);
    letters['R'][4] = byte(B01100010);

    letters['S'][0] = byte(B01100100);
    letters['S'][1] = byte(B10010010);
    letters['S'][2] = byte(B10010010);
    letters['S'][3] = byte(B10010010);
    letters['S'][4] = byte(B01001100);

    letters['T'][0] = byte(B10000000);
    letters['T'][1] = byte(B10000000);
    letters['T'][2] = byte(B11111110);
    letters['T'][3] = byte(B10000000);
    letters['T'][4] = byte(B10000000);

    letters['U'][0] = byte(B11111100);
    letters['U'][1] = byte(B00000010);
    letters['U'][2] = byte(B00000010);
    letters['U'][3] = byte(B00000010);
    letters['U'][4] = byte(B11111100);

    letters['V'][0] = byte(B11000000);
    letters['V'][1] = byte(B00111000);
    letters['V'][2] = byte(B00000110);
    letters['V'][3] = byte(B00111000);
    letters['V'][4] = byte(B11000000);

    letters['W'][0] = byte(B11110000);
    letters['W'][1] = byte(B00001110);
    letters['W'][2] = byte(B00110000);
    letters['W'][3] = byte(B00001110);
    letters['W'][4] = byte(B11110000);

    letters['X'][0] = byte(B10000010);
    letters['X'][1] = byte(B01101100);
    letters['X'][2] = byte(B00010000);
    letters['X'][3] = byte(B01101100);
    letters['X'][4] = byte(B10000010);

    letters['Y'][0] = byte(B10000000);
    letters['Y'][1] = byte(B01100000);
    letters['Y'][2] = byte(B00011110);
    letters['Y'][3] = byte(B01100000);
    letters['Y'][4] = byte(B10000000);

    letters['Z'][0] = byte(B10000110);
    letters['Z'][1] = byte(B10001010);
    letters['Z'][2] = byte(B10010010);
    letters['Z'][3] = byte(B10100010);
    letters['Z'][4] = byte(B11000010);

    letters['0'][0] = byte(B01111100);
    letters['0'][1] = byte(B10000010);
    letters['0'][2] = byte(B10010010);
    letters['0'][3] = byte(B10000010);
    letters['0'][4] = byte(B01111100);

    letters['1'][0] = byte(B01000010);
    letters['1'][1] = byte(B01000010);
    letters['1'][2] = byte(B11111110);
    letters['1'][3] = byte(B00000010);
    letters['1'][4] = byte(B00000010);

    letters['2'][0] = byte(B01000010);
    letters['2'][1] = byte(B10000110);
    letters['2'][2] = byte(B10001010);
    letters['2'][3] = byte(B10010010);
    letters['2'][4] = byte(B01100010);

    letters['3'][0] = byte(B01000100);
    letters['3'][1] = byte(B10000010);
    letters['3'][2] = byte(B10010010);
    letters['3'][3] = byte(B10010010);
    letters['3'][4] = byte(B01101100);

    letters['4'][0] = byte(B00011000);
    letters['4'][1] = byte(B00101000);
    letters['4'][2] = byte(B01001000);
    letters['4'][3] = byte(B11111110);
    letters['4'][4] = byte(B00001000);

    letters['5'][0] = byte(B11100100);
    letters['5'][1] = byte(B10100010);
    letters['5'][2] = byte(B10100010);
    letters['5'][3] = byte(B10100010);
    letters['5'][4] = byte(B10011100);

    letters['6'][0] = byte(B01111100);
    letters['6'][1] = byte(B10100010);
    letters['6'][2] = byte(B10100010);
    letters['6'][3] = byte(B10100010);
    letters['6'][4] = byte(B10011100);

    letters['7'][0] = byte(B10000000);
    letters['7'][1] = byte(B10000110);
    letters['7'][2] = byte(B10011000);
    letters['7'][3] = byte(B10100000);
    letters['7'][4] = byte(B11000000);

    letters['8'][0] = byte(B01101100);
    letters['8'][1] = byte(B10010010);
    letters['8'][2] = byte(B10010010);
    letters['8'][3] = byte(B10010010);
    letters['8'][4] = byte(B01101100);

    letters['9'][0] = byte(B01110010);
    letters['9'][1] = byte(B10001010);
    letters['9'][2] = byte(B10001010);
    letters['9'][3] = byte(B10001010);
    letters['9'][4] = byte(B01111100);

    letters['!'][0] = byte(B00000000);
    letters['!'][1] = byte(B00000000);
    letters['!'][2] = byte(B11111010);
    letters['!'][3] = byte(B00000000);
    letters['!'][4] = byte(B00000000);

    letters['"'][0] = byte(B00000000);
    letters['"'][1] = byte(B11100000);
    letters['"'][2] = byte(B00000000);
    letters['"'][3] = byte(B11100000);
    letters['"'][4] = byte(B00000000);

    letters['#'][0] = byte(B00101000);
    letters['#'][1] = byte(B00111110);
    letters['#'][2] = byte(B11101000);
    letters['#'][3] = byte(B00111110);
    letters['#'][4] = byte(B11101000);

    letters['$'][0] = byte(B00110010);
    letters['$'][1] = byte(B01001001);
    letters['$'][2] = byte(B11111111);
    letters['$'][3] = byte(B01001001);
    letters['$'][4] = byte(B00100110);

    letters['%'][0] = byte(B01000010);
    letters['%'][1] = byte(B10100100);
    letters['%'][2] = byte(B01011000);
    letters['%'][3] = byte(B00100100);
    letters['%'][4] = byte(B01001010);

    letters['&'][0] = byte(B00001100);
    letters['&'][1] = byte(B01010010);
    letters['&'][2] = byte(B10101010);
    letters['&'][3] = byte(B01000100);
    letters['&'][4] = byte(B00011010);

    letters['\''][0] = byte(B00000000);
    letters['\''][1] = byte(B00000000);
    letters['\''][2] = byte(B11100000);
    letters['\''][3] = byte(B00000000);
    letters['\''][4] = byte(B00000000);

    letters['('][0] = byte(B00000000);
    letters['('][1] = byte(B00111110);
    letters['('][2] = byte(B01000001);
    letters['('][3] = byte(B10000000);
    letters['('][4] = byte(B00000000);

    letters[')'][0] = byte(B00000000);
    letters[')'][1] = byte(B10000000);
    letters[')'][2] = byte(B01000001);
    letters[')'][3] = byte(B00111110);
    letters[')'][4] = byte(B00000000);

    letters['*'][0] = byte(B00000000);
    letters['*'][1] = byte(B01010000);
    letters['*'][2] = byte(B11100000);
    letters['*'][3] = byte(B01010000);
    letters['*'][4] = byte(B00000000);

    letters['+'][0] = byte(B00010000);
    letters['+'][1] = byte(B00010000);
    letters['+'][2] = byte(B01111100);
    letters['+'][3] = byte(B00010000);
    letters['+'][4] = byte(B00010000);

    letters[','][0] = byte(B00000000);
    letters[','][1] = byte(B00000010);
    letters[','][2] = byte(B00001100);
    letters[','][3] = byte(B00000000);
    letters[','][4] = byte(B00000000);

    letters['-'][0] = byte(B00000000);
    letters['-'][1] = byte(B00000000);
    letters['-'][2] = byte(B00010000);
    letters['-'][3] = byte(B00010000);
    letters['-'][4] = byte(B00000000);

    letters['.'][0] = byte(B00000000);
    letters['.'][1] = byte(B00000000);
    letters['.'][2] = byte(B00000010);
    letters['.'][3] = byte(B00000000);
    letters['.'][4] = byte(B00000000);

    letters['/'][0] = byte(B00000010);
    letters['/'][1] = byte(B00001100);
    letters['/'][2] = byte(B00010000);
    letters['/'][3] = byte(B01100000);
    letters['/'][4] = byte(B10000000);

    letters[':'][0] = byte(B00000000);
    letters[':'][1] = byte(B00000000);
    letters[':'][2] = byte(B00100010);
    letters[':'][3] = byte(B00000000);
    letters[':'][4] = byte(B00000000);

    letters[';'][0] = byte(B00000000);
    letters[';'][1] = byte(B00000010);
    letters[';'][2] = byte(B10001100);
    letters[';'][3] = byte(B00000000);
    letters[';'][4] = byte(B00000000);

    letters['<'][0] = byte(B00010000);
    letters['<'][1] = byte(B00101000);
    letters['<'][2] = byte(B00101000);
    letters['<'][3] = byte(B00101000);
    letters['<'][4] = byte(B01000100);

    letters['='][0] = byte(B00101000);
    letters['='][1] = byte(B00101000);
    letters['='][2] = byte(B00101000);
    letters['='][3] = byte(B00101000);
    letters['='][4] = byte(B00101000);

    letters['>'][0] = byte(B01000100);
    letters['>'][1] = byte(B00101000);
    letters['>'][2] = byte(B00101000);
    letters['>'][3] = byte(B00101000);
    letters['>'][4] = byte(B00010000);

    letters['?'][0] = byte(B01000000);
    letters['?'][1] = byte(B10000000);
    letters['?'][2] = byte(B10001010);
    letters['?'][3] = byte(B10010000);
    letters['?'][4] = byte(B01100000);

    letters['@'][0] = byte(B00111111);
    letters['@'][1] = byte(B01001100);
    letters['@'][2] = byte(B10010100);
    letters['@'][3] = byte(B10011100);
    letters['@'][4] = byte(B10000101);

    letters['['][0] = byte(B00000000);
    letters['['][1] = byte(B00000000);
    letters['['][2] = byte(B11111111);
    letters['['][3] = byte(B10000000);
    letters['['][4] = byte(B10000000);

    letters['\\'][0] = byte(B10000000);
    letters['\\'][1] = byte(B01100000);
    letters['\\'][2] = byte(B00010000);
    letters['\\'][3] = byte(B00001100);
    letters['\\'][4] = byte(B00000010);

    letters[']'][0] = byte(B10000000);
    letters[']'][1] = byte(B10000000);
    letters[']'][2] = byte(B10000000);
    letters[']'][3] = byte(B11111111);
    letters[']'][4] = byte(B00000000);

    letters['^'][0] = byte(B00010000);
    letters['^'][1] = byte(B01100000);
    letters['^'][2] = byte(B10000000);
    letters['^'][3] = byte(B01100000);
    letters['^'][4] = byte(B00010000);

    letters['_'][0] = byte(B00000010);
    letters['_'][1] = byte(B00000010);
    letters['_'][2] = byte(B00000010);
    letters['_'][3] = byte(B00000010);
    letters['_'][4] = byte(B00000010);

    letters['`'][0] = byte(B00000000);
    letters['`'][1] = byte(B00000000);
    letters['`'][2] = byte(B00000000);
    letters['`'][3] = byte(B10000000);
    letters['`'][4] = byte(B00000000);

    letters['{'][0] = byte(B00000000);
    letters['{'][1] = byte(B00001000);
    letters['{'][2] = byte(B01110111);
    letters['{'][3] = byte(B10000000);
    letters['{'][4] = byte(B10000000);

    letters['|'][0] = byte(B00000000);
    letters['|'][1] = byte(B00000000);
    letters['|'][2] = byte(B11111111);
    letters['|'][3] = byte(B00000000);
    letters['|'][4] = byte(B00000000);

    letters['}'][0] = byte(B00000000);
    letters['}'][1] = byte(B10000000);
    letters['}'][2] = byte(B10000000);
    letters['}'][3] = byte(B01110111);
    letters['}'][4] = byte(B00001000);

    letters['~'][0] = byte(B00100000);
    letters['~'][1] = byte(B00100000);
    letters['~'][2] = byte(B00010000);
    letters['~'][3] = byte(B00010000);
    letters['~'][4] = byte(B00100000);

}
