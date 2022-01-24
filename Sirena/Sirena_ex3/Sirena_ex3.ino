/**********************************************************************************
**                                                                               **
**                                  Sirena                                       **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const byte xiulet = 9;        // donar nom al pin 9 de l’Arduino
const byte pot0 = A0;         // donar nom al pin A0 de l’Arduino
int valPot0;                 // guardar valor del potenciometre  

//********** Setup ****************************************************************
void setup()
{
  pinMode(xiulet, OUTPUT);   // definir el pin 9 com una sortida
}

//********** Loop *****************************************************************
void loop()
{
  valPot0 = analogRead(pot0);    // llegir valor potenciòmetre 

  tone(xiulet, 2200, 1000);    // xiulet de durada valPot0
  delay(500);              // esperar valPot0 del xiulet + valPot0 silenci
   tone(xiulet, 1200, 1000);    // xiulet de durada valPot0
  delay(500);              // esperar valPot0 del xiulet + valPot0 silenci
   tone(xiulet, 800, 1000);    // xiulet de durada valPot0
  delay(500);              // esperar valPot0 del xiulet + valPot0 silenci
   tone(xiulet, 400, 1000);    // xiulet de durada valPot0
  delay(2000+500);              // esperar valPot0 del xiulet + valPot0 silenci
}

//********** Funcions *************************************************************