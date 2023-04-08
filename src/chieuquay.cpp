#include <Arduino.h>
#include <AccelStepper.h>

int step_X = 54; int Dir_X = 55; int ena_X = 38;

AccelStepper Step_X(1, step_X, Dir_X, ena_X);

void setup() 
{
  Step_X.setMaxSpeed(200);
  Step_X.setAcceleration(200);

  Step_X.setEnablePin(38);
  Step_X.setPinsInverted(false, false, true);   
  Step_X.enableOutputs();
}

void loop() 
{
  Step_X.setCurrentPosition(0);
  while(Step_X.currentPosition() != -200)
  {
    Step_X.setSpeed(-20);
    Step_X.runSpeed();
  }  
}