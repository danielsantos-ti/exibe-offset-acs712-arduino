const int sensorPin = A5;

void lerExibiOffSet(int pinoDoSensor){

  int valorDoSensor = analogRead(sensorPin);
  Serial.print("Offset lido: ");
  Serial.println(valorDoSensor);

}

void setup() {
  
  Serial.begin(9600);

}

void loop() {
  
  lerExibiOffSet(sensorPin);
  delay(1000);

}
