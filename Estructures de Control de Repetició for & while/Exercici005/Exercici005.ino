
/****************************************************************
 **                                                            **
 **       Estructures de Control de Repetició for & while      **
 **                                                            **
 **                        Estructura for                      **
 **                                                            **
 **  NOM: David Casas                        DATA: 10/12/2021  **
 ***************************************************************/
 //**************************INCLUDE*****************************


 //*************************VARIABLES****************************
int taula = 2;
 //***************************SETUP******************************
 
void setup()      // configura el final de salida
{
  Serial.begin(9600);

  for (int taula=2; taula <= 10; taula++)
  {
    Serial.print("Taula de multipilcar del ");
    Serial.println(taula);
    for (int i=0; i <= 10; i++)
    {
      delay(100);
      Serial.print(taula);
      Serial.print(" x ");
      Serial.print(i);
      Serial.print( " = ");
      Serial.println(taula*i);    
    }
    Serial.println();
  } 
}

 //***************************LOOP*******************************
 
void loop() {             // incia el bucle del programa

}
 //*************************FUNCIONS*****************************
