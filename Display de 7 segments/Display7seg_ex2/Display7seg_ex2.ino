/**********************************************************************************
**                                                                               **
**                          Display 7seg Èric Banda                              **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************

const byte segA = 5;          // donar nom al pin 5 de l’Arduino
const byte segB = 6;          // donar nom al pin 6 de l’Arduino
const byte segC = 7;          // donar nom al pin 7 de l’Arduino
const byte segD = 8;          // donar nom al pin 8 de l’Arduino
const byte segE = 9;          // donar nom al pin 9 de l’Arduino
const byte segF = 10;         // donar nom al pin 10 de l’Arduino
const byte segG = 11;         // donar nom al pin 11 de l’Arduino

//********** Setup ****************************************************************
void setup()
{
  pinMode(segA, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(segB, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(segC, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(segD, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(segE, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(segF, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(segG, OUTPUT);     // definir el pin 11 com una sortida
}

void loop()
{
  //0
  digitalWrite(segA, HIGH);    // posar a 5V el pin 5
  digitalWrite(segB, HIGH);    // posar a 5V el pin 6
  digitalWrite(segC, HIGH);    // posar a 5V el pin 7
  digitalWrite(segD, HIGH);    // posar a 5V el pin 8
  digitalWrite(segE, HIGH);    // posar a 5V el pin 9
  digitalWrite(segF, HIGH);    // posar a 5V el pin 10
  digitalWrite(segG, LOW);    // posar a 5V el pin 11

  delay(1500);                  // es quedA 1500ms ences
  
  //1
  digitalWrite(segA, LOW);    // posar a 5V el pin 5
  digitalWrite(segB, HIGH);    // posar a 5V el pin 6
  digitalWrite(segC, HIGH);    // posar a 5V el pin 7
  digitalWrite(segD, LOW);    // posar a 5V el pin 8
  digitalWrite(segE, LOW);    // posar a 5V el pin 9
  digitalWrite(segF, LOW);    // posar a 5V el pin 10
  digitalWrite(segG, LOW);    // posar a 5V el pin 11

  delay(1500);                  // es quedA 1500ms ences
  
  //2
  digitalWrite(segA, HIGH);    // posar a 5V el pin 5
  digitalWrite(segB, HIGH);    // posar a 5V el pin 6
  digitalWrite(segC, LOW);    // posar a 5V el pin 7
  digitalWrite(segD, HIGH);    // posar a 5V el pin 8
  digitalWrite(segE, HIGH);    // posar a 5V el pin 9
  digitalWrite(segF, LOW);    // posar a 5V el pin 10
  digitalWrite(segG, HIGH);    // posar a 5V el pin 11

  delay(1500);                  // es quedA 1500ms ences

  //3
  digitalWrite(segA, HIGH);    // posar a 5V el pin 5
  digitalWrite(segB, HIGH);    // posar a 5V el pin 6
  digitalWrite(segC, HIGH);    // posar a 5V el pin 7
  digitalWrite(segD, HIGH);    // posar a 5V el pin 8
  digitalWrite(segE, LOW);    // posar a 5V el pin 9
  digitalWrite(segF, LOW);    // posar a 5V el pin 10
  digitalWrite(segG, HIGH);    // posar a 5V el pin 11

  delay(1500);                  // es quedA 1500ms ences

  //4
  digitalWrite(segA, LOW);    // posar a 5V el pin 5
  digitalWrite(segB, HIGH);    // posar a 5V el pin 6
  digitalWrite(segC, HIGH);    // posar a 5V el pin 7
  digitalWrite(segD, LOW);    // posar a 5V el pin 8
  digitalWrite(segE, LOW);    // posar a 5V el pin 9
  digitalWrite(segF, HIGH);    // posar a 5V el pin 10
  digitalWrite(segG, HIGH);    // posar a 5V el pin 11

  delay(1500);                  // es quedA 1500ms ences
 
  //5
  digitalWrite(segA, HIGH);    // posar a 5V el pin 5
  digitalWrite(segB, LOW);    // posar a 5V el pin 6
  digitalWrite(segC, HIGH);    // posar a 5V el pin 7
  digitalWrite(segD, HIGH);    // posar a 5V el pin 8
  digitalWrite(segE, LOW);    // posar a 5V el pin 9
  digitalWrite(segF, HIGH);    // posar a 5V el pin 10
  digitalWrite(segG, HIGH);    // posar a 5V el pin 11

  delay(1500);                  // es quedA 1500ms ences
  
  //6
  digitalWrite(segA, HIGH);    // posar a 5V el pin 5
  digitalWrite(segB, LOW);    // posar a 5V el pin 6
  digitalWrite(segC, HIGH);    // posar a 5V el pin 7
  digitalWrite(segD, HIGH);    // posar a 5V el pin 8
  digitalWrite(segE, HIGH);    // posar a 5V el pin 9
  digitalWrite(segF, HIGH);    // posar a 5V el pin 10
  digitalWrite(segG, HIGH);    // posar a 5V el pin 11

  delay(1500);                  // es quedA 1500ms ences
   
  //7
  digitalWrite(segA, HIGH);    // posar a 5V el pin 5
  digitalWrite(segB, HIGH);    // posar a 5V el pin 6
  digitalWrite(segC, HIGH);    // posar a 5V el pin 7
  digitalWrite(segD, LOW);    // posar a 5V el pin 8
  digitalWrite(segE, LOW);    // posar a 5V el pin 9
  digitalWrite(segF, LOW);    // posar a 5V el pin 10
  digitalWrite(segG, LOW);    // posar a 5V el pin 11

  delay(1500);                  // es quedA 1500ms ences
   
  //8
  digitalWrite(segA, HIGH);    // posar a 5V el pin 5
  digitalWrite(segB, HIGH);    // posar a 5V el pin 6
  digitalWrite(segC, HIGH);    // posar a 5V el pin 7
  digitalWrite(segD, HIGH);    // posar a 5V el pin 8
  digitalWrite(segE, HIGH);    // posar a 5V el pin 9
  digitalWrite(segF, HIGH);    // posar a 5V el pin 10
  digitalWrite(segG, HIGH);    // posar a 5V el pin 11
  
  delay(1500);                  // es quedA 1500ms ences
    //7
  digitalWrite(segA, HIGH);    // posar a 5V el pin 5
  digitalWrite(segB, HIGH);    // posar a 5V el pin 6
  digitalWrite(segC, HIGH);    // posar a 5V el pin 7
  digitalWrite(segD, LOW);    // posar a 5V el pin 8
  digitalWrite(segE, LOW);    // posar a 5V el pin 9
  digitalWrite(segF, HIGH);    // posar a 5V el pin 10
  digitalWrite(segG, HIGH);    // posar a 5V el pin 11

  delay(1500);                  // es quedA 1500ms ences
}
