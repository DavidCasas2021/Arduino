
/****************************************************************
 **                                                            **
 **                   Display de 7 segments                    **
 **                                                            **
 **                         Exercici 1                         **
 **                                                            **
 **  NOM: David Casas                        DATA: 20/11/2021  **
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
  unsigned long temps1 = 1500;
  
 //***************************SETUP******************************

void setup() {             // configura el final de salida 
  
  pinMode(segA,OUTPUT);
  pinMode(segB,OUTPUT);
  pinMode(segC,OUTPUT);
  pinMode(segD,OUTPUT);
  pinMode(segE,OUTPUT);
  pinMode(segF,OUTPUT);
  pinMode(segG,OUTPUT);

  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segG, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, HIGH);
  delay (temps);
  
  digitalWrite(segB, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segG, LOW);
  digitalWrite(segD, LOW);
  digitalWrite(segE, LOW);

  digitalWrite(segE, HIGH);
  digitalWrite(segF, HIGH);
  digitalWrite(segA, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segG, HIGH);
  delay (temps);

  digitalWrite(segE, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segA, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segG, LOW);

  digitalWrite(segC, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, HIGH);
  delay (temps);

  digitalWrite(segC, LOW);
  digitalWrite(segD, LOW);
  digitalWrite(segE, LOW);

  digitalWrite(segE,HIGH);
  digitalWrite(segF, HIGH);
  delay (temps);

  digitalWrite(segE,LOW);
  digitalWrite(segF, LOW);

  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segG, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, HIGH);
  delay (temps);
  
  digitalWrite(segB, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segG, LOW);
  digitalWrite(segD, LOW);
  digitalWrite(segE, LOW);
  delay (temps1);

  digitalWrite(segA, HIGH);
  digitalWrite(segF, HIGH);
  digitalWrite(segE, HIGH);
  digitalWrite(segD, HIGH);
  delay (temps);
  
  digitalWrite(segA, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segE, LOW);
  digitalWrite(segD, LOW);
  
  digitalWrite(segE, HIGH);
  digitalWrite(segF, HIGH);
  digitalWrite(segA, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segG, HIGH);
  delay (temps);

  digitalWrite(segE, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segA, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segG, LOW);

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

  digitalWrite(segE, HIGH);
  digitalWrite(segF, HIGH);
  digitalWrite(segA, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segG, HIGH);
  delay (temps);

  digitalWrite(segE, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segA, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segG, LOW);

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
  
 }
 //***************************LOOP*******************************
 
void loop() {             // incia el bucle del programa

}
 //*************************FUNCIONS*****************************
