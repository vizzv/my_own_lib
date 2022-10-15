#include <encoderAutomatic.h>
#include <analogWrite.h>
encoderAutomatic encoder(26,27,5000,32,25);
void setup() {
  // put your setup code here, to run once:
  pinMode(26,INPUT);
  pinMode(27,INPUT);
  pinMode(32,OUTPUT);
  pinMode(33,OUTPUT);
  pinMode(25,OUTPUT);
  
  Serial.begin(115200);
  

}

void loop() {
  Serial.println(encoder.encoderPos);
}
