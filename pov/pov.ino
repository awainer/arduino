#include "letters.h"
#define DEBUG 1
int i,j;
byte a[4];
int mask;
int DELAY=10;

const int pin_base=6;
char buffer_in[25],buffer_p[25];

void setup() {
  init_letters();
    Serial.begin(9600);  
    Serial.println("Empiezo setup");
  //configure pins
   for(i=pin_base;i<(pin_base + HEIGHT) ;i++)
       pinMode(i, OUTPUT);     
  //test!
  pov_test(pin_base,HEIGHT);
  strcpy(buffer_p,"hola mundo");
  strcpy(buffer_in,"");
  #ifdef DEBUG
  Serial.print("buffer_p");
  Serial.println(buffer_p);
  Serial.print("buffer_in");
  Serial.println(buffer_in);
  #endif
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
   pov_apagar(pin_base,HEIGHT);
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

void pov_apagar(int base, int heigh)
{ int i;
 // Serial.println("apago");
   for(i=0;i<heigh;i++)
     digitalWrite(base + i, LOW);
 // Serial.println("ya apague");
  delay(DELAY);
}
void pov_test(int base, int heigh){
 int i;
  for ( i=pin_base; i < (pin_base+heigh) ; i++)
      {
      digitalWrite(i,HIGH);
      delay(100);
      digitalWrite(i,LOW);
     }
 
  
}
void loop() {
  char c;
  byte b;
  int l;
#ifdef DEBUG
  Serial.print("buffer_p: ");
  Serial.println(buffer_p);
  Serial.print("buffer_in: ");
  Serial.println(buffer_in);
#endif

  pov_texto(buffer_p);

  while(Serial.available() > 0)
  {
//    if(Serial.peek()==13  || Serial.peek()==10)
    if(Serial.peek()==46)
      {

        strcpy(buffer_p,buffer_in);
        buffer_in[0]=0;
        Serial.read();
      }
     else
     {
      b=Serial.read();
      Serial.print("recibo ");
      c=b;
      Serial.println(c);
      l=strlen(buffer_in);
      buffer_in[l]=c;
      buffer_in[l+1]=0;
//      buffer_in.append(1,c);

     }
  }

}
