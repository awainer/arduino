
//#include <string.h>
//#include "/home/ari/arduino/pov2/letters.h"
int i,j;
byte a[4];
int mask;
int DELAY=300;
/*char b[4][8];
char mas[4][8];*/
//a[0]="11111111"

#define pin_base 6
#define offset_a 32
byte letras[96][5];

void setup() {
    Serial.begin(9600);  
    Serial.println("Empiezo setup");

//a
letras[ 'a' - offset_a ][0]=byte(B11111111);
letras[ 'a' - offset_a ][1]=byte(B10001000);
letras[ 'a' - offset_a ][2]=byte(B10001000);
letras[ 'a' - offset_a ][3]=byte(B10001000);
letras[ 'a' - offset_a ][4]=byte(B11111111);
//b
letras[ 'b' - offset_a ][0]=byte(B11111111);
letras[ 'b' - offset_a ][1]=byte(B10001001);
letras[ 'b' - offset_a ][2]=byte(B10001001);
letras[ 'b' - offset_a ][3]=byte(B10001001);
letras[ 'b' - offset_a ][4]=byte(B01101110);
//c
letras[ 'c' - offset_a ][0]=byte(B11111111);
letras[ 'c' - offset_a ][4]=byte(B10000001);
letras[ 'c' - offset_a ][1]=byte(B10000001);
letras[ 'c' - offset_a ][2]=byte(B10000001);
letras[ 'c' - offset_a ][3]=byte(B10000001);
//d
letras[ 'd' - offset_a ][0]=byte(B11111111);
letras[ 'd' - offset_a ][4]=byte(B10000001);
letras[ 'd' - offset_a ][1]=byte(B10000001);
letras[ 'd' - offset_a ][2]=byte(B10000001);
letras[ 'd' - offset_a ][3]=byte(B01111110);
//e
letras[ 'e' - offset_a ][0]=byte(B11111111);
letras[ 'e' - offset_a ][4]=byte(B10010001);
letras[ 'e' - offset_a ][1]=byte(B10010001);
letras[ 'e' - offset_a ][2]=byte(B10010001);
letras[ 'e' - offset_a ][3]=byte(B10010001);
//f
letras[ 'f' - offset_a ][0]=byte(B11111111);
letras[ 'f' - offset_a ][4]=byte(B00010001);
letras[ 'f' - offset_a ][1]=byte(B00010001);
letras[ 'f' - offset_a ][2]=byte(B00010001);
letras[ 'f' - offset_a ][3]=byte(B00010001);
//g
letras[ 'f' - offset_a ][0]=byte(B11111111);
letras[ 'f' - offset_a ][4]=byte(B10000001);
letras[ 'f' - offset_a ][1]=byte(B10010001);
letras[ 'f' - offset_a ][2]=byte(B10010001);
letras[ 'f' - offset_a ][3]=byte(B11110001);
//h
letras[ 'h' - offset_a ][0]=byte(B11111111);
letras[ 'h' - offset_a ][1]=byte(B00011000);
letras[ 'h' - offset_a ][2]=byte(B00011000);
letras[ 'h' - offset_a ][3]=byte(B00011000);
letras[ 'h' - offset_a ][4]=byte(B11111111);
//i
letras[ 'i' - offset_a ][0]=byte(B00000000);
letras[ 'i' - offset_a ][1]=byte(B10000001);
letras[ 'i' - offset_a ][2]=byte(B11111111);
letras[ 'i' - offset_a ][3]=byte(B10000001);
letras[ 'i' - offset_a ][4]=byte(B00000000);
//j
letras[ 'j' - offset_a ][0]=byte(B11100000);
letras[ 'j' - offset_a ][1]=byte(B10000001);
letras[ 'j' - offset_a ][2]=byte(B10000001);
letras[ 'j' - offset_a ][3]=byte(B11111111);
letras[ 'j' - offset_a ][4]=byte(B00000000);
//k
letras[ 'k' - offset_a ][0]=byte(B11111111);
letras[ 'k' - offset_a ][1]=byte(B00011000);
letras[ 'k' - offset_a ][2]=byte(B00101000);
letras[ 'k' - offset_a ][3]=byte(B01000100);
letras[ 'k' - offset_a ][4]=byte(B11000011);
//l
letras[ 'l' - offset_a ][0]=byte(B11111111);
letras[ 'l' - offset_a ][1]=byte(B00000001);
letras[ 'l' - offset_a ][2]=byte(B00000001);
letras[ 'l' - offset_a ][3]=byte(B00000001);
letras[ 'l' - offset_a ][4]=byte(B00000001);
//m
letras[ 'm' - offset_a ][0]=byte(B11111111);
letras[ 'm' - offset_a ][1]=byte(B00000111);
letras[ 'm' - offset_a ][2]=byte(B00011000);
letras[ 'm' - offset_a ][3]=byte(B00000111);
letras[ 'm' - offset_a ][4]=byte(B11111111);
//n
letras[ 'n' - offset_a ][4]=byte(B11111111);
letras[ 'n' - offset_a ][3]=byte(B00000110);
letras[ 'n' - offset_a ][2]=byte(B00011000);
letras[ 'n' - offset_a ][1]=byte(B01100000);
letras[ 'n' - offset_a ][0]=byte(B11111111);
//o
letras[ 'o' - offset_a ][0]=byte(B11111111);
letras[ 'o' - offset_a ][1]=byte(B10000001);
letras[ 'o' - offset_a ][2]=byte(B10000001);
letras[ 'o' - offset_a ][3]=byte(B10000001);
letras[ 'o' - offset_a ][4]=byte(B11111111);
//p
letras[ 'p' - offset_a ][0]=byte(B11111111);
letras[ 'p' - offset_a ][1]=byte(B00010001);
letras[ 'p' - offset_a ][2]=byte(B00010001);
letras[ 'p' - offset_a ][3]=byte(B00010001);
letras[ 'p' - offset_a ][4]=byte(B00011111);
//q
letras[ 'q' - offset_a ][0]=byte(B01111111);
letras[ 'q' - offset_a ][1]=byte(B01000001);
letras[ 'q' - offset_a ][2]=byte(B01000001);
letras[ 'q' - offset_a ][3]=byte(B01111111);
letras[ 'q' - offset_a ][4]=byte(B11100000);
//r
letras[ 'r' - offset_a ][0]=byte(B11111111);
letras[ 'r' - offset_a ][1]=byte(B00010001);
letras[ 'r' - offset_a ][2]=byte(B00010001);
letras[ 'r' - offset_a ][3]=byte(B00011111);
letras[ 'r' - offset_a ][4]=byte(B11100000);
//s
letras[ 's' - offset_a ][0]=byte(B10011111);
letras[ 's' - offset_a ][1]=byte(B10010001);
letras[ 's' - offset_a ][2]=byte(B10010001);
letras[ 's' - offset_a ][3]=byte(B10010001);
letras[ 's' - offset_a ][4]=byte(B11110001);
//t
letras[ 't' - offset_a ][0]=byte(B00000001);
letras[ 't' - offset_a ][1]=byte(B00000001);
letras[ 't' - offset_a ][2]=byte(B11111111);
letras[ 't' - offset_a ][3]=byte(B00010001);
letras[ 't' - offset_a ][4]=byte(B00000001);
//u
letras[ 'u' - offset_a ][0]=byte(B11111111);
letras[ 'u' - offset_a ][1]=byte(B10000000);
letras[ 'u' - offset_a ][2]=byte(B10000000);
letras[ 'u' - offset_a ][3]=byte(B10000000);
letras[ 'u' - offset_a ][4]=byte(B11111111);
//v
letras[ 'v' - offset_a ][0]=byte(B00000111);
letras[ 'v' - offset_a ][1]=byte(B00110000);
letras[ 'v' - offset_a ][2]=byte(B11000000);
letras[ 'v' - offset_a ][3]=byte(B00110000);
letras[ 'v' - offset_a ][4]=byte(B00000111);
//w
letras[ 'w' - offset_a ][0]=byte(B11111111);
letras[ 'w' - offset_a ][1]=byte(B10000000);
letras[ 'w' - offset_a ][2]=byte(B11111111);
letras[ 'w' - offset_a ][3]=byte(B10000000);
letras[ 'w' - offset_a ][4]=byte(B11111111);
//x
letras[ 'x' - offset_a ][0]=byte(B11000011);
letras[ 'x' - offset_a ][1]=byte(B00100100);
letras[ 'x' - offset_a ][2]=byte(B00011000);
letras[ 'x' - offset_a ][3]=byte(B00100100);
letras[ 'x' - offset_a ][4]=byte(B11000011);
//y
letras[ 'y' - offset_a ][0]=byte(B00000001);
letras[ 'y' - offset_a ][1]=byte(B00000100);
letras[ 'y' - offset_a ][2]=byte(B11110000);
letras[ 'y' - offset_a ][3]=byte(B00000100);
letras[ 'y' - offset_a ][4]=byte(B00000001);
//z
letras[ 'z' - offset_a ][0]=byte(B11000001);
letras[ 'z' - offset_a ][1]=byte(B01100001);
letras[ 'z' - offset_a ][2]=byte(B10011001);
letras[ 'z' - offset_a ][3]=byte(B10000111);
letras[ 'z' - offset_a ][4]=byte(B10000000);
//whitespace
letras[ ' ' - offset_a ][0]=byte(B00000000);
letras[ ' ' - offset_a ][1]=byte(B00000000);
letras[ ' ' - offset_a ][2]=byte(B00000000);
letras[ ' ' - offset_a ][3]=byte(B00000000);
letras[ ' ' - offset_a ][4]=byte(B00000000);
//exclamation mark
letras[ '!' - offset_a ][0]=byte(B00000000);
letras[ '!' - offset_a ][1]=byte(B00000000);
letras[ '!' - offset_a ][2]=byte(B10111111);
letras[ '!' - offset_a ][3]=byte(B00000000);
letras[ '!' - offset_a ][4]=byte(B00000000);



   for(i=6;i<14;i++){
       pinMode(i, OUTPUT);     
  }
    Serial.println("Termino setup");
}

void pov_letra(char l)
{

//  Serial.print(letras[l - offset_a ][1]);
  for(i=0;i<5;i++)
   {
     j=pin_base;
   
      for (mask = 00000001; mask>0; mask <<= 1) 
      { //iterate through bit mask
          if ( letras[l - offset_a][i] & mask){ // if bitwise AND resolves to true
              digitalWrite(j,HIGH); // send 1
          }
          else
          { //if bitwise and resolves to false
              digitalWrite(j,LOW); // send 0
          }
      j++;
     
     }
   delay(DELAY);
   }
   pov_apagar(pin_base);
}

void pov_texto(char * t){
 int i;

  for (i=0; i < strlen(t); i++){
   pov_letra(t[i]);
  // pov_apagar(pin_base);
//   delay(3*DELAY);
   //Serial.write(t[i]);
  } 
}

void pov_apagar(int base)
{ int i;
  Serial.println("apago");
   for(i=0;i<9;i++)
     digitalWrite(base + i, LOW);
  Serial.println("ya apague");
  delay(DELAY);
}

void loop() {

 /*   pov_letra('x');
    pov_letra('l');
    pov_letra(' ');
    pov_letra('h');*/
  pov_texto("hola mundo!");
  /*  int i;
  for ( i=6;i<14;i++)
      {
      //Serial.write(i);
      digitalWrite(i,HIGH);
      
      delay(100);
      digitalWrite(i,LOW);

      }*/
//Serial.println("loop");
 //pov_texto("o");
  //pov_letra('u');
 //pov_apagar(pin_base);
// delay(200);
}
