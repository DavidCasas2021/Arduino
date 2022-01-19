/****************************************************************
 **                                                            **
 **                           SIRENA                           **
 **                                                            **
 **                         Exercici 4                         **
 **                                                            **
 **  NOM: David Casas                        DATA: 19/01/2022  **
 ***************************************************************/
 //**************************INCLUDE*****************************


 //*************************VARIABLES****************************
const byte xiulet = 9;        // donar nom al pin 9 de l’Arduino
int state = 0;
 //***************************SETUP******************************

void setup() {             // configura el final de salida 
pinMode (xiulet, OUTPUT);  // definir el pin 9 com una sortida

}
 //***************************LOOP*******************************
 
void loop() {             // incia el bucle del programa
state++;
  if (state==3){
  state = 1;
  }
    switch (state)
    {
      case 1:
      tone (xiulet, 1000);
      delay (20);
      break;
  
      case 2:
      tone (xiulet, 1250);
      delay (20);
      break;
    }
}
 //*************************FUNCIONS*****************************
