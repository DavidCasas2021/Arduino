
/****************************************************************
 **                                                            **
 **                           SIRENA                           **
 **                                                            **
 **                         Exercici 3                         **
 **                                                            **
 **  NOM: David Casas                        DATA: 17/01/2022  **
 ***************************************************************/
 //**************************INCLUDE*****************************


 //*************************VARIABLES****************************
const byte xiulet = 9;        // donar nom al pin 9 de l’Arduino
unsigned long temps = 4000;
int state = 0;
 //***************************SETUP******************************

void setup() {             // configura el final de salida 
pinMode (xiulet, OUTPUT);  // definir el pin 9 com una sortida

}
 //***************************LOOP*******************************
 
void loop() {             // incia el bucle del programa
state++;
  if (state==6){
  state = 1;
  }
    switch (state)
    {
      case 1:
      tone (xiulet, 300);
      delay (1500);
      break;
  
      case 2:
      tone (xiulet, 500);
      delay (1500);
      break;
  
      case 3:
      tone (xiulet, 800);
      delay (1500);
      break;
  
      case 4:
      tone (xiulet, 1000, 1500);
      delay (1500);
      break;
  
      case 5:
      delay (temps);
      break;
    }
}
 //*************************FUNCIONS*****************************
