              /*ARDUINO_BLUETOOTH_CONTROLLING_CAR*/
                        //FOR_BTCAR_PCB//

#define leftMfront 6
#define leftMback 9
#define rightMfront 10
#define rightMback 11
#define frontL 2
#define backL 4
#define extraL 7
#define horn 3

int mSpeed = 255;  //Customize BTCar Speed
char Data;         //BT Data Save Variable

void setup() {
  // All Output Pins
  pinMode(leftMfront, OUTPUT);
  pinMode(leftMback, OUTPUT);
  pinMode(rightMfront, OUTPUT);
  pinMode(rightMback, OUTPUT);
  pinMode(frontL, OUTPUT);
  pinMode(backL, OUTPUT);
  pinMode(extraL, OUTPUT);
  pinMode(horn, OUTPUT);

  Serial.begin(9600);  //Bund Rate
}

void loop() {

  if (Serial.available()) {  //Checking if data is received
    Data = Serial.read();
    Serial.println(Data);
  }

  if (Data == 'F') {
    go_Front();  // Car go Forward Data
  } else if (Data == 'B') {
    go_Back();  // Car go Backward Data
  } else if (Data == 'R') {
    go_Right();  // Car Turn Right Data
  } else if (Data == 'L') {
    go_Left();  // Car Turn Left Data
  } else if (Data == 'S') {
    Stop();  // Car Stop
  }

  // Values of Speed for BTCar
  else if (Data == '1') {
    mSpeed = 100;
  } else if (Data == '2') {
    mSpeed = 130;
  } else if (Data == '3') {
    mSpeed = 150;
  } else if (Data == '4') {
    mSpeed = 170;
  } else if (Data == '5') {
    mSpeed = 190;
  } else if (Data == '6') {
    mSpeed = 210;
  } else if (Data == '7') {
    mSpeed = 230;
  } else if (Data == '8') {
    mSpeed = 255;

    // Other Options for BTCar
  } else if (Data == 'W') {
    digitalWrite(2, HIGH);  //Front Light On
  } else if (Data == 'w') {
    digitalWrite(2, LOW);  //Front Light Off
  } else if (Data == 'U') {
    digitalWrite(4, HIGH);  //Back Light On
  } else if (Data == 'u') {
    digitalWrite(4, LOW);  //Back Light Off
  } else if (Data == 'X') {
    digitalWrite(7, HIGH);  //Extra Light On
  } else if (Data == 'x') {
    digitalWrite(7, LOW);  //Extra Light Off
  } else if (Data == 'V') {
    analogWrite(3, HIGH);  //Horn(Buzzer)On
  } else if (Data == 'v') {
    analogWrite(3, LOW);  //Horn(Buzzer)Off
  }

}
// Main Functions
void go_Front() {
  analogWrite(leftMfront, mSpeed);
  analogWrite(leftMback, 0);
  analogWrite(rightMfront, mSpeed);
  analogWrite(rightMback, 0);
}
void go_Back() {
  analogWrite(leftMfront, 0);
  analogWrite(leftMback, mSpeed);
  analogWrite(rightMfront, 0);
  analogWrite(rightMback, mSpeed);
}
void go_Right() {
  analogWrite(leftMfront, mSpeed);
  analogWrite(leftMback, 0);
  analogWrite(rightMfront, 0);
  analogWrite(rightMback, 0);
}
void go_Left() {
  analogWrite(leftMfront, 0);
  analogWrite(leftMback, 0);
  analogWrite(rightMfront, mSpeed);
  analogWrite(rightMback, 0);
}
void Stop() {
  analogWrite(leftMfront, 0);
  analogWrite(leftMback, 0);
  analogWrite(rightMfront, 0);
  analogWrite(rightMback, 0);
}
