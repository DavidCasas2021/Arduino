
/****************************************************************
 **                                                            **
 **       Estructures de Control de Repetició for & while      **
 **                                                            **
 **                      Estructura while                      **
 **                                                            **
 **  NOM: David Casas                        DATA: 10/12/2021  **
 ***************************************************************/
 //**************************INCLUDE*****************************


 //*************************VARIABLES****************************
 int comptar = 11;
 int i = 0;
 //***************************SETUP******************************
 
 void setup()               // configura el final de salida
{
  Serial.begin(9600);
  Serial.print("Ara comptare de 0 a ");
  Serial.println(comptar);  
  while(i <= comptar)
  {
    Serial.print(i);
    Serial.print("-");
    i++;
  } 
}

 //***************************LOOP*******************************
 
void loop() {             // incia el bucle del programa

}
 //*************************FUNCIONS*****************************
