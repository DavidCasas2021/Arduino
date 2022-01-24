/****************************************************************
 **                                                            **
 **                           SIRENA                           **
 **                                                            **
 **                         Exercici 5                         **
 **                                                            **
 **  NOM: David Casas                        DATA: 19/01/2022  **
 ***************************************************************/
 //**************************INCLUDE*****************************


 //*************************VARIABLES****************************
const byte xiulet = 9;        // donar nom al pin 9 de l’Arduino
const byte pot0 = A0;        // donar nom al pin A0 de l’Arduino
const byte pot1 = A1;        // donar nom al pin A0 de l’Arduino
int valPot0;                 // guardar valor del potenciometre 
int valPot1;                 // guardar valor del potenciometre 

 //***************************SETUP******************************

void setup() {             // configura el final de salida 
pinMode (xiulet, OUTPUT);  // definir el pin 9 com una sortida
pinMode (pot0, INPUT);
pinMode (pot1, INPUT);

}
 //***************************LOOP*******************************
 
void loop() 
{             // incia el bucle del programa
  valPot0 = analogRead(pot0);
  valPot1 = analogRead(pot1);   

  tone(xiulet, 500, valPot0);   
  delay(valPot0 + valPot1);

}
 //*************************FUNCIONS*****************************
