#include <Servo.h>  

Servo servo1;  
Servo servo2;
Servo servo3;
Servo servo4;

void setup() {
  servo1.attach(7);
  servo2.attach(6);
  servo3.attach(5);
  servo4.attach(4);
}

void loop() {
  for (int pos = 0; pos <= 180; pos += 10) {
    servo1.write(pos);
    servo2.write(pos);
    servo3.write(pos);
    servo4.write(pos);
    delay(100);  // Wait 50 ms between steps
  }

  for (int pos = 180; pos >= 0; pos -= 10) {
    servo1.write(pos);
    servo2.write(pos);
    servo3.write(pos);
    servo4.write(pos);
    delay(100);  // Wait 50 ms between steps
  }

  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);

  while (true);  
}
