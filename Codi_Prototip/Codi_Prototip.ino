const int motorDret = 6;
const int motorEsq = 5;
const int sensorDret = A4;
const int sensorEsq = A5;
int estatDret = 0;
int estatEsq = 0;
int state = 0;

void setup ()
{
  Serial.begin(9600);

  pinMode(motorDret, OUTPUT);
  pinMode(motorEsq, OUTPUT);
  digitalWrite(motorDret, LOW);
  digitalWrite(motorEsq, LOW);
  pinMode(sensorDret, INPUT);
  pinMode(sensorEsq, INPUT);
}

void loop() 
{
  estatDret = digitalRead(sensorDret);
  estatEsq = digitalRead(sensorEsq);


if ((estatDret==0) && (estatEsq==0))
{
  analogWrite(motorDret, 100);
  analogWrite(motorEsq, 100); 
  state = 1;
}
else if ((estatDret==1) && (estatEsq==0))
{
  analogWrite(motorDret, 150);
  analogWrite(motorEsq, 0);
  state = 2;
}
else if ((estatDret==0) && (estatEsq==1))
{
  analogWrite(motorDret, 0); 
  analogWrite(motorEsq, 150);
  state =3 ;
}
else 
{
  if (state == 1){
  analogWrite(motorDret, 100);
  analogWrite(motorEsq, 100);
  }
  if (state == 2){
  analogWrite(motorDret, 150);
  analogWrite(motorEsq, 0);
  }
  if (state == 3){
  analogWrite(motorDret, 0);
  analogWrite(motorEsq, 150);
  }
}
}

