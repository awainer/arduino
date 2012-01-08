#include "letters.h"
#define DEBUG 0

int DELAY=10;
const int pin_base=0;
String buffer_in = "Hola mundo!";
String buffer_p;

void setup() {
  init_letters();
  //configure pins
  for(int i=pin_base;i<(pin_base + HEIGHT) ;i++)
    pinMode(i, OUTPUT);     
  //test!
  pov_test(pin_base,HEIGHT);
#ifdef DEBUG
  Serial.begin(9600);  
  Serial.println("Empiezo setup");
  Serial.print("buffer_p");
  Serial.println(buffer_p);
  Serial.print("buffer_in");
  Serial.println(buffer_in);
  Serial.println("Termino setup");
#endif
}

void pov_letra(char l)
{
  //  Serial.print(letras[l - offset_a ][1]);
  for(int i=0;i<WIDTH;i++)
  {
    for (int j=pin_base, mask=00000001; mask>0; mask<<=1, j++) 
    { //iterate through bit mask
      if (letters[l][i] & mask){ // if bitwise AND resolves to true
        digitalWrite(j,HIGH); // send 1
      }
      else
      { //if bitwise and resolves to false
        digitalWrite(j,LOW); // send 0
      }
    }
    delay(DELAY);
  }
  pov_apagar(pin_base,HEIGHT);
}

void pov_texto(String t){
  for (int i=0; i < t.length(); i++){
    pov_letra(t[i]);
    // pov_apagar(pin_base);
    //   delay(3*DELAY);
    //Serial.write(t[i]);
  } 
}

void pov_apagar(int base, int heigh)
{ 
  // Serial.println("apago");
  for(int i=0;i<heigh;i++)
    digitalWrite(base + i, LOW);
  // Serial.println("ya apague");
  delay(DELAY);
}

void pov_test(int base, int heigh){
  for (int i=pin_base; i < (pin_base+heigh) ; i++)
  {
    digitalWrite(i,HIGH);
    delay(200);
    digitalWrite(i,LOW);
    delay(200);
  }
}

void loop() {
#ifdef DEBUG
  Serial.print("buffer_p: ");
  Serial.println(buffer_p);
  Serial.print("buffer_in: ");
  Serial.println(buffer_in);
#endif
  pov_texto(buffer_p);
/*  while(Serial.available() > 0)
  {
    //    if(Serial.peek()==13  || Serial.peek()==10)
    if(Serial.peek()==46)
    {
      buffer_p = buffer_in;
      buffer_in = String();
      Serial.read();
    }
    else
    {
      char c=Serial.read();
      Serial.print("recibo ");
      Serial.println(c);
      buffer_in.concat(c);
    }
  }*/
}

