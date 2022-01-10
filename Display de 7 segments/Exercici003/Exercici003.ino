/****************************************************************
 **                                                            **
 **                   Display de 7 segments                    **
 **                                                            **
 **                         Exercici 3                         **
 **                                                            **
 **  NOM: David Casas                         DATA: 09/01/2022 **
 ***************************************************************/
 //**************************INCLUDE*****************************


 //*************************VARIABLES****************************
  const byte segA = 5;          // donar nom al pin 5 de l’Arduino
  const byte segB = 6;          // donar nom al pin 6 de l’Arduino
  const byte segC = 7;          // donar nom al pin 7 de l’Arduino
  const byte segD = 8;          // donar nom al pin 8 de l’Arduino
  const byte segE = 9;          // donar nom al pin 9 de l’Arduino
  const byte segF = 10;         // donar nom al pin 10 de l’Arduino
  const byte segG = 11;         // donar nom al pin 11 de l’Arduino
  const byte buttonPin = 2;     // donar nom al pin 2 de l’Arduino
  byte buttonState = 0;
  int num = 0; 
  int startstop = 0;
  unsigned long temps = 400;
  
 //***************************SETUP******************************

void setup() {             // configura el final de salida 
  
  pinMode(segA,OUTPUT);
  pinMode(segB,OUTPUT);
  pinMode(segC,OUTPUT);
  pinMode(segD,OUTPUT);
  pinMode(segE,OUTPUT);
  pinMode(segF,OUTPUT);
  pinMode(segG,OUTPUT);
  pinMode(buttonPin, INPUT); 
  
 }
 //***************************LOOP*******************************
 
void loop() 
  {             // incia el bucle del programa

    buttonState = digitalRead(buttonPin);

  if (buttonState == 0)
  {
      startstop = !startstop;
      delay(300);
  }
  if (startstop == 1)
  {
      num++;
      if (num ==10)
      {
        num = 0;
      }
  }
  switch (num)
  {
  case 0:
  digitalWrite(segA, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, HIGH);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, LOW);
  
  delay (temps);
  break;
   
  case 1:
  digitalWrite(segA, LOW);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, LOW);
  digitalWrite(segE, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW);
  
  delay (temps);
  break;

  case 2:
  digitalWrite(segA, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, LOW);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, HIGH);
  digitalWrite(segF, LOW);
  digitalWrite(segG, HIGH);
  
  delay (temps);
  break;

  case 3:
  digitalWrite(segA, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, HIGH);

  delay (temps);
  break;

  case 4:
  digitalWrite(segA, LOW);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, LOW);
  digitalWrite(segE, LOW);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);
  
  delay (temps);
  break;

  case 5:
  digitalWrite(segA, HIGH);
  digitalWrite(segB, LOW);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, LOW);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);
  
  delay (temps);
  break;

  case 6:
  digitalWrite(segA, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, HIGH);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);
  
  delay (temps);
  break;

  case 7:
  digitalWrite(segA, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, LOW);
  digitalWrite(segE, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW);
  
  delay (temps);
  break;

  case 8:
  digitalWrite(segA, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, HIGH);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);

  delay (temps);
  break;

  case 9:
  digitalWrite(segA, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, LOW);
  digitalWrite(segE, LOW);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);
  
  delay (temps);
  break;
  }
}
 //*************************FUNCIONS*****************************
