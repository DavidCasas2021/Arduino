/****************************************************************
**                                                             **
**                        Array de 8 LEDs:                     **
**                          EXERCICI 7B                        **
**                                                             **
** NOM: David Casas                           DATA: 09/01/2022 **
****************************************************************/
//************************** INCLUDE ****************************


//************************* VARIABLES ***************************
const byte led0 = 5;
unsigned long temps = 600;

//*************************** SETUP *****************************

void setup() 
{
  pinMode(led0,OUTPUT);
  
  for(int i = 0; i < 30; i++)
  {
   digitalWrite(led0,HIGH);
   delay (temps);
    
   digitalWrite(led0,LOW);
   delay (temps);
  }
}

//*************************** LOOP ******************************
void loop()
{
  
}
//************************* FUNCIONS ****************************
