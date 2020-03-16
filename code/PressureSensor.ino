
#define sensor1Pin 14
#define sensor2Pin 15
#define sensor3Pin 16
#define sensorLed1 3
#define sensorLed2 4
#define sensorLed3 5
#define redLed 6

void setup() {
  pinMode(sensor1Pin, INPUT);
  pinMode(sensor2Pin, INPUT);
  pinMode(sensor3Pin, INPUT);
  pinMode(sensorLed1, OUTPUT);
  pinMode(sensorLed2, OUTPUT);
  pinMode(sensorLed3, OUTPUT);
  pinMode(redLed, OUTPUT);
  
  digitalWrite(redLed,HIGH);
}

void loop() {
  analogRead(sensor1Pin);
  analogRead(sensor2Pin);
  analogRead(sensor3Pin);

  if(analogRead(sensor1Pin) >= 39){
   digitalWrite(sensorLed1, HIGH); 
  }
  else{
   digitalWrite(sensorLed1, LOW); 
  };


  if(analogRead(sensor2Pin) >= 39){
   digitalWrite(sensorLed2, HIGH); 
  }
  else{
   digitalWrite(sensorLed2, LOW); 
  };

  if(analogRead(sensor3Pin) >= 39){
   digitalWrite(sensorLed3, HIGH); 
  }
  else{
   digitalWrite(sensorLed3, LOW); 
  };
}
