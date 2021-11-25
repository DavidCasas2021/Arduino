
/****************************************************************
 **                                                            **
 **                 COMUNICACIO SERIE BASICA                   **
 **                                                            **
 **                         Exercici 4                         **
 **                                                            **
 **  NOM: David Casas Largo                  DATA: 25/11/2021  **
 ***************************************************************/
 //**************************INCLUDE*****************************


 //*************************VARIABLES****************************


 //***************************SETUP******************************

void setup() {             // configura el final de salida 
      Serial.begin(9600);
      Serial.println("Escull el numero de l'operacio que vols realitzar?");  
      delay(1000);
      Serial.println("  1. Comprovar numero de tarjeta de credit");
      delay(1000);
      Serial.println("  2. Comprovar numero de compte bancari");
      delay(1000);
      Serial.println("  3. Buscar un digit perdut de tarjeta de credit");
}
 //***************************LOOP*******************************
 
void loop() {             // incia el bucle del programa

}
 //*************************FUNCIONS*****************************
