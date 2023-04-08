#include <Arduino.h>
#include <Servo.h>

Servo myservo;

#define E_X 3
#define E_Y 14
#define E_Z 18

bool gt_E_X; bool gt_E_Y; bool gt_E_Z;

void setup() 
{
    Serial.begin(9600);

    pinMode(E_X, INPUT_PULLUP);
    pinMode(E_Y, INPUT_PULLUP);
    pinMode(E_Z, INPUT_PULLUP);

    myservo.attach(4);
}

void loop() 
{
    myservo.write(180); //mo   
    delay(500);
    myservo.write(0);    //kep
    delay(500);
    
    // gt_E_X = digitalRead(E_X);
    // gt_E_Y = digitalRead(E_Y);
    // gt_E_Z = digitalRead(E_Z);
    
    // Serial.print("X: "); Serial.print(gt_E_X);
    // Serial.print(" - Y: "); Serial.print(gt_E_Y);
    // Serial.print(" - Z: "); Serial.println(gt_E_Z);
}