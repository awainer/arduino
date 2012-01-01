#include "letters.h"

int i,j;
byte a[4];
int mask;
int DELAY=300;

#define pin_base 6

void setup() {
  init_letters();
    Serial.begin(9600);  
    Serial.println("Empiezo setup");

   for(i=6;i<14;i++){
       pinMode(i, OUTPUT);     
  }
    Serial.println("Termino setup");
}

void pov_letra(char l)
{

//  Serial.print(letras[l - offset_a ][1]);
  for(i=0;i<WIDTH;i++)
   {
     j=pin_base;
   
      for (mask = 00000001; mask>0; mask <<= 1) 
      { //iterate through bit mask
          if ( letters[l][i] & mask){ // if bitwise AND resolves to true
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
