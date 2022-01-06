/****************************************************************
 **                                                            **
 **                   Display de 7 segments                    **
 **                                                            **
 **                         Exercici 2                         **
 **                                                            **
 **  NOM: David Casas                         DATA: 6/01/2022  **
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
  unsigned long temps = 1000;
  
 //***************************SETUP******************************

void setup() {             // configura el final de salida 
  
  pinMode(segA,OUTPUT);
  pinMode(segB,OUTPUT);
  pinMode(segC,OUTPUT);
  pinMode(segD,OUTPUT);
  pinMode(segE,OUTPUT);
  pinMode(segF,OUTPUT);
  pinMode(segG,OUTPUT);
  
 }
 //***************************LOOP*******************************
 
void loop() {             // incia el bucle del programa

  digitalWrite(segA, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, HIGH);
  digitalWrite(segF, HIGH);
  delay (temps);

  digitalWrite(segA, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segD, LOW);
  digitalWrite(segE, LOW);
  digitalWrite(segF, LOW);

  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  delay (temps);

  digitalWrite(segB, LOW);
  digitalWrite(segC, LOW);

  digitalWrite(segA, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segG, HIGH);
  digitalWrite(segE, HIGH);
  digitalWrite(segD, HIGH);
  delay (temps);

  digitalWrite(segA, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segG, LOW);
  digitalWrite(segE, LOW);
  digitalWrite(segD, LOW);

  digitalWrite(segA, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segG, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, HIGH);
  delay (temps);

  digitalWrite(segA, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segG, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segD, LOW);

  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  delay (temps);

  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segC, LOW);

  digitalWrite(segA, HIGH);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, HIGH);
  delay (temps);

  digitalWrite(segA, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segD, LOW);

  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, HIGH);
  delay (temps);

  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segD, LOW);
  digitalWrite(segE, LOW);

  digitalWrite(segA, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  delay (temps);

  digitalWrite(segA, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segC, LOW);

  digitalWrite(segA, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, HIGH);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);
  delay (temps);

  digitalWrite(segA, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segD, LOW);
  digitalWrite(segE, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW);

  digitalWrite(segA, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);
  delay (temps);

  digitalWrite(segA, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW);

 }
 //*************************FUNCIONS*****************************
