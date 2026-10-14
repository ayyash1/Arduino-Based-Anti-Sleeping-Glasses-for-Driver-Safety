#define SENSE A1
#define buzzer 12
#define motor 11


void setup() {
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);
  pinMode(SENSE, INPUT);
  pinMode(motor, OUTPUT);

}
void loop() {
  long eye = digitalRead(SENSE);


  Serial.println(eye);
  if (eye == HIGH) {

    delay(3000);
    digitalWrite(buzzer, HIGH);
    digitalWrite(motor, LOW);

    
  } else {
    delay(100);
    digitalWrite(buzzer, LOW);
    digitalWrite(motor, HIGH);

  }

  
}














