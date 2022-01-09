/****************************************************************
**                                                             **
**                       Array de 8 LEDs:                      **
**                         EXERCICI 7 A                        **
**                                                             **
** NOM: David Casas                           DATA: 08/01/2022 **
****************************************************************/
//************************** INCLUDE ****************************


//************************* VARIABLES ***************************
const byte led0 = 5;
int a = 0;              
unsigned long temps = 600;

//*************************** SETUP *****************************
void setup()
 {
  pinMode(led0,OUTPUT);
 }

//*************************** LOOP ******************************
void loop() 
 {
  if (a<30)
  {
   digitalWrite(led0,HIGH);
   delay (temps);
   
   digitalWrite(led0,LOW);
   delay (temps);
   a++;
   
  }
  else 
  {
   digitalWrite(led0,LOW);
  }
 }

//************************* FUNCIONS ****************************
