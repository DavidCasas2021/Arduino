
/****************************************************************
**                                                             **
**                        Array de 8 LEDs:                     **
**                           EXERCICI 6                        **
**                                                             **
** NOM: David Casas                           DATA: 08/01/2022 **
****************************************************************/
//************************** INCLUDE ****************************


//************************* VARIABLES ***************************
const byte led0 = 5;          // donar nom al pin 5 de l’Arduino
const byte led1 = 6;          // donar nom al pin 6 de l’Arduino
const byte led2 = 7;          // donar nom al pin 7 de l’Arduino
const byte led3 = 8;          // donar nom al pin 8 de l’Arduino
const byte led4 = 9;          // donar nom al pin 9 de l’Arduino
const byte led5 = 10;         // donar nom al pin 10 de l’Arduino
const byte led6 = 11;         // donar nom al pin 11 de l’Arduino
const byte led7 = 12;         // donar nom al pin 12 de l’Arduino
const byte buttonPin2 = 2;     // donar nom al pin 2 de l’Arduino
const byte buttonPin3 = 3;     // donar nom al pin 3 de l’Arduino
byte buttonState2 = 0;         // per guardar l’estat en que és troba el button2
byte buttonState3 = 0;         // per guardar l’estat en que és troba el button3
unsigned long temps = 500;
unsigned long temps1 = 300;
//*************************** SETUP *****************************

void setup() 
{
  pinMode(led0, OUTPUT);      // definir el pin 5 com una sortida
  pinMode(led1, OUTPUT);      // definir el pin 6 com una sortida
  pinMode(led2, OUTPUT);      // definir el pin 7 com una sortida
  pinMode(led3, OUTPUT);      // definir el pin 8 com una sortida
  pinMode(led4, OUTPUT);      // definir el pin 9 com una sortida
  pinMode(led5, OUTPUT);      // definir el pin 10 com una sortida
  pinMode(led6, OUTPUT);      // definir el pin 11 com una sortida
  pinMode(led7, OUTPUT);      // definir el pin 12 com una sortida
  pinMode(buttonPin2, INPUT); // definir el pin 2 com una entrada
  pinMode(buttonPin3, INPUT); // definir el pin 3 com una entrada
}

//*************************** LOOP ******************************
void loop() 
{
  buttonState2 = digitalRead(buttonPin2);
  buttonState3 = digitalRead(buttonPin3);


  if (buttonState2 == 0)
  {
   digitalWrite(led0, HIGH);
   digitalWrite(led1, HIGH);
   digitalWrite(led2, HIGH);
   digitalWrite(led3, HIGH);
   digitalWrite(led4, HIGH);
   digitalWrite(led5, HIGH);
   digitalWrite(led6, HIGH);
   digitalWrite(led7, HIGH);
   delay (temps);
    
   digitalWrite(led0, LOW);
   digitalWrite(led1, LOW);
   digitalWrite(led2, LOW);
   digitalWrite(led3, LOW);
   digitalWrite(led4, LOW);
   digitalWrite(led5, LOW);
   digitalWrite(led6, LOW);
   digitalWrite(led7, LOW);
   delay (temps);
  }
  else if (buttonState3 == 0)
  {
   digitalWrite(led0, HIGH);
   digitalWrite(led1, LOW);
   digitalWrite(led2, HIGH);
   digitalWrite(led3, LOW);
   digitalWrite(led4, HIGH);
   digitalWrite(led5, LOW);
   digitalWrite(led6, HIGH);
   digitalWrite(led7, LOW);
   delay (temps);
    
   digitalWrite(led0, LOW);
   digitalWrite(led1, HIGH);
   digitalWrite(led2, LOW);
   digitalWrite(led3, HIGH);
   digitalWrite(led4, LOW);
   digitalWrite(led5, HIGH);
   digitalWrite(led6, LOW);
   digitalWrite(led7, HIGH);
   delay (temps);
  }
  else
  {
   digitalWrite(led0, HIGH);
   digitalWrite(led1, LOW);
   digitalWrite(led2, LOW);
   digitalWrite(led3, LOW);
   digitalWrite(led4, LOW);
   digitalWrite(led5, LOW);
   digitalWrite(led6, LOW);
   digitalWrite(led7, HIGH);
   delay (temps1);
                               
   digitalWrite(led0, HIGH);
   digitalWrite(led1, HIGH);
   digitalWrite(led2, LOW);
   digitalWrite(led3, LOW);
   digitalWrite(led4, LOW);
   digitalWrite(led5, LOW);
   digitalWrite(led6, HIGH);
   digitalWrite(led7, HIGH);
   delay (temps1);
                                 
   digitalWrite(led0, LOW);
   digitalWrite(led1, HIGH);
   digitalWrite(led2, HIGH);
   digitalWrite(led3, LOW);
   digitalWrite(led4, LOW);
   digitalWrite(led5, HIGH);
   digitalWrite(led6, HIGH);
   digitalWrite(led7, LOW);
   delay (temps1);
                                 
   digitalWrite(led0, LOW);
   digitalWrite(led1, LOW);
   digitalWrite(led2, HIGH);
   digitalWrite(led3, HIGH);
   digitalWrite(led4, HIGH);
   digitalWrite(led5, HIGH);
   digitalWrite(led6, LOW);
   digitalWrite(led7, LOW);
   delay (temps1);
                                 
   digitalWrite(led0, LOW);
   digitalWrite(led1, LOW);
   digitalWrite(led2, LOW);
   digitalWrite(led3, HIGH);
   digitalWrite(led4, HIGH);
   digitalWrite(led5, LOW);
   digitalWrite(led6, LOW);
   digitalWrite(led7, LOW);
   delay (temps1);
                                 
   digitalWrite(led0, LOW);
   digitalWrite(led1, LOW);
   digitalWrite(led2, LOW);
   digitalWrite(led3, HIGH);
   digitalWrite(led4, HIGH);
   digitalWrite(led5, LOW);
   digitalWrite(led6, LOW);
   digitalWrite(led7, LOW);
   delay (temps1);
                                
   digitalWrite(led0, LOW);
   digitalWrite(led1, LOW);
   digitalWrite(led2, HIGH);
   digitalWrite(led3, HIGH);
   digitalWrite(led4, HIGH);
   digitalWrite(led5, HIGH);
   digitalWrite(led6, LOW);
   digitalWrite(led7, LOW);
   delay (temps1);
                                 
   digitalWrite(led0, LOW);
   digitalWrite(led1, HIGH);
   digitalWrite(led2, HIGH);
   digitalWrite(led3, LOW);
   digitalWrite(led4, LOW);
   digitalWrite(led5, HIGH);
   digitalWrite(led6, HIGH);
   digitalWrite(led7, LOW);
   delay (temps1);
                                 
   digitalWrite(led0, HIGH);
   digitalWrite(led1, HIGH);
   digitalWrite(led2, LOW);
   digitalWrite(led3, LOW);
   digitalWrite(led4, LOW);
   digitalWrite(led5, LOW);
   digitalWrite(led6, HIGH);
   digitalWrite(led7, HIGH);
   delay (temps1);
                                 
   digitalWrite(led0, HIGH);
   digitalWrite(led1, LOW);
   digitalWrite(led2, LOW);
   digitalWrite(led3, LOW);
   digitalWrite(led4, LOW);
   digitalWrite(led5, LOW);
   digitalWrite(led6, LOW);
   digitalWrite(led7, HIGH);
   delay (temps1);
                                 
   digitalWrite(led0, LOW);
   digitalWrite(led1, LOW);
   digitalWrite(led2, LOW);
   digitalWrite(led3, LOW);
   digitalWrite(led4, LOW);
   digitalWrite(led5, LOW);
   digitalWrite(led6, LOW);
   digitalWrite(led7, LOW);
   delay (temps1);
                                 
   digitalWrite(led0, LOW);
   digitalWrite(led1, LOW);
   digitalWrite(led2, LOW);
   digitalWrite(led3, LOW);
   digitalWrite(led4, LOW);
   digitalWrite(led5, LOW);
   digitalWrite(led6, LOW);
   digitalWrite(led7, LOW);
   delay (temps1);
  } 
}

//************************* FUNCIONS ****************************
