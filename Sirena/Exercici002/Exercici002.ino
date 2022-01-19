
/****************************************************************
 **                                                            **
 **                            SIRENA                          **
 **                                                            **
 **                          Exercici 2                        **
 **                                                            **
 **  NOM: David Casas                        DATA: 17/01/2022  **
 ***************************************************************/
 //**************************INCLUDE*****************************


 //*************************VARIABLES****************************
const byte xiulet = 9;        // donar nom al pin 9 de l’Arduino


 //***************************SETUP******************************

void setup() {             // configura el final de salida 
  
pinMode(xiulet, OUTPUT);   // definir el pin 9 com una sortida

tone(9, 1000, 3000);

}
 //***************************LOOP*******************************
 
void loop() {             // incia el bucle del programa
  
}
 //*************************FUNCIONS*****************************
