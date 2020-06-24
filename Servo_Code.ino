#include <Servo.h>

int pos = 0;  //for begin

Servo servo_2;   //name of pin

void setup()
{
  servo_2.attach(2);

}

void loop()
{
  // sweep the servo from 0 to 360 degrees in steps
  for (pos = 0; pos <= 360; pos += 1) {
    servo_2.write(pos);
    delay(5); 
  }
  for (pos = 360; pos >= 0; pos -= 1) {
    servo_2.write(pos);
    delay(5); 
  }
}
