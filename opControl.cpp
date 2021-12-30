#include "vex.h"

#include "opControl.h"

using namespace vex;

double leftDriveSpeed, rightDriveSpeed;

void joyStickControl() {
  //printf("motor tmep: %.2f\n: ", leftDrive.temperature(pct)) ;
  leftDriveSpeed = ( (Controller1.Axis1.position() * 0.75) + (Controller1.Axis3.position()) );
  rightDriveSpeed = ( (Controller1.Axis1.position() * 0.75) - (Controller1.Axis3.position()) );

  leftDrive.spin(fwd, leftDriveSpeed, pct);
  rightDrive.spin(fwd, -rightDriveSpeed, pct);
}

void armControl() {
  if (Controller1.ButtonR1.pressing())
  {
    arm.spin(fwd, 100, pct);
  }
       
  else if (Controller1.ButtonR2.pressing())
  {
    arm.spin(fwd, -100, pct);
  }

  else
  {
    arm.stop(hold);
  }
}

void conveyorControl() {
  if (Controller1.ButtonL1.pressing())
  {
    conveyor.spin(fwd, 100, pct);
  }
       
  else if (Controller1.ButtonL2.pressing())
  {
    conveyor.spin(fwd, -50, pct);
  }

  else
  {
    conveyor.stop(brake);
  }
}

void tilterControl() {
  if (Controller1.ButtonX.pressing()) {
    leftTilter.set(false);
    rightTilter.set(false);
  }

  else if (Controller1.ButtonB.pressing()) {
    leftTilter.set(true);
    rightTilter.set(true);
  }
}