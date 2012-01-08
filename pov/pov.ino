#include "letters.h"
#define DEBUG

int DELAY = 10;
const int pins[] = { 8,9,2,3,4,5,6,7 };
String buffer_p = "Hello world! ";
String buffer_in = "";

void setup() {
  init_letters();
  //configure pins
  for(int i=0; i < HEIGHT ;i++)
    pinMode(pins[i], OUTPUT);     
  //test!
  pov_test();
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

void pov_letra(char l) {
  //  Serial.print(letras[l - offset_a ][1]);
  for(int i=0; i < WIDTH; i++)
  {
    for (int j=0, mask=00000001; mask>0; mask<<=1, j++) 
    { //iterate through bit mask
      if (letters[l][i] & mask){ // if bitwise AND resolves to true
        digitalWrite(pins[j], HIGH); // send 1
      }
      else
      { //if bitwise and resolves to false
        digitalWrite(pins[j], LOW); // send 0
      }
    }
    delay(DELAY);
  }
  pov_apagar();
}

void pov_texto(String t) {
  for (int i=0; i < t.length(); i++){
    pov_letra(t[i]);
    // pov_apagar(pin_base);
    //   delay(3*DELAY);
    //Serial.write(t[i]);
  } 
}

void pov_apagar() { 
  // Serial.println("apago");
  for(int i=0; i < HEIGHT; i++)
    digitalWrite(pins[i], LOW);
  // Serial.println("ya apague");
  delay(DELAY);
}

void pov_test() {
  for (int i=0; i < HEIGHT ; i++)
  {
    digitalWrite(pins[i],HIGH);
    delay(200);
    digitalWrite(pins[i],LOW);
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
  while(Serial.available() > 0)
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
  }
}
