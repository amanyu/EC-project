#define ledPin 9
#define fan 8
#define light 7
#define ac 6
#define dil 2
String state ;//= String("0");
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(light, OUTPUT);
  pinMode(fan, OUTPUT);
  pinMode(ac, OUTPUT);
  pinMode(dil, OUTPUT);
  digitalWrite(ledPin, LOW);
  digitalWrite(fan, LOW);
  digitalWrite(light, LOW);
  digitalWrite(ac, LOW);
  digitalWrite(dil, LOW);
  Serial.begin(9600); // Default communication rate of the Bluetooth module
}
 void loop() {
  while(Serial.available() > 0){ // Checks whether data is comming from the serial port
    state = Serial.readString(); // Reads the data from the serial port
    Serial.println(state);
 }
if (state == "hello") {
  digitalWrite(ledPin, HIGH);
  Serial.println("LED: ON");
  delay(15000);
  state = "0";
 }
 if (state == "fan") {
  digitalWrite(fan, HIGH);
  Serial.println("LED: ON");
  delay(15000);
  state = "0";
 }
 if (state == "light") {
  digitalWrite(light, HIGH);
  Serial.println("LED: ON");
  delay(15000);
  state = "0";
 }
 if (state == "AC") {
  digitalWrite(ac, HIGH);
  Serial.println("LED: ON");
  delay(15000);
  state = "0";
 }
 if (state == "dildo") {
  digitalWrite(dil, HIGH);
  Serial.println("LED: ON");
  delay(15000);
  state = "0";
 }
  else {
  digitalWrite(ledPin, LOW); // Turn LED OFF
  digitalWrite(ac, LOW);
  digitalWrite(light, LOW);
  digitalWrite(fan, LOW);
  digitalWrite(dil, LOW);
  Serial.println("LED: OFF"); // Send back, to the phone, the String "LED: ON"
  state = "0";
 }
 Serial.println(state);
}
