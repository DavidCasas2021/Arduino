/**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
float Indicador = 40;
//********** Setup ****************************************************************
void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if (Indicador < 3.5)
  {
    Serial.print("Qualificacio energetica A");
  }
  else if (Indicador < 6.5)
  {
    Serial.print("Qualificacio energetica B");
  } 
  else if (Indicador < 11.1)
  {
    Serial.print("Qualificacio energetica C");
  }
  else if (Indicador < 17.7)
  {
    Serial.print("Qualificacio energetica D");
  }
  else if (Indicador < 38.2)
  {
    Serial.print("Qualificacio energetica E");
  }
  else if (Indicador < 43.2)
  {
    Serial.print("Qualificacio energetica F");
  }
  else
  {
    Serial.print("Qualificacio energetica G");
  }
}

//********** Loop *****************************************************************
void loop()   // we need this to be here even though its empty
{
}

//********** Funcions *************************************************************
