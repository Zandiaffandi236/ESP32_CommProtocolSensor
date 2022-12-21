// set pin numbers
const int touchPin = 4; 
const int ledPin1 = 16;
const int ledPin2 = 17;
const int ledPin3 = 5;

// change with your threshold value
const int threshold = 30;
int num = 0;
// variable for storing the touch pin value 
int touchValue;

void setup(){
  Serial.begin(115200);
  delay(1000); // give me time to bring up serial monitor
  // initialize the LED pin as an output:
  pinMode (ledPin1, OUTPUT);
  pinMode (ledPin2, OUTPUT);
  pinMode (ledPin3, OUTPUT);
}

void loop(){
  // read the state of the pushbutton value:
  touchValue = touchRead(touchPin);
  Serial.print(touchValue);
  // check if the touchValue is below the threshold
  // if it is, set ledPin to HIGH
  if(touchValue < threshold){
    // turn LED on
    digitalWrite(ledPin1, HIGH);
    delay(200);
    digitalWrite(ledPin1, LOW);
    delay(200);
    digitalWrite(ledPin2, HIGH);
    delay(200);
    digitalWrite(ledPin2, LOW);
    delay(200);
    digitalWrite(ledPin3, HIGH);
    delay(200);
    digitalWrite(ledPin3, LOW);
    delay(200);
    digitalWrite(ledPin2, HIGH);
    delay(200);
    digitalWrite(ledPin2, LOW);
    Serial.println(" - LED on");
  }
  else{
    // turn LED off
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    Serial.println(" - LED off");
  }
  delay(500);
}
