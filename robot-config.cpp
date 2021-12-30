#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain Brain;

// VEXcode device constructors
motor arm = motor(PORT3, ratio36_1, true);
motor conveyor = motor(PORT8, ratio6_1, true);

motor leftDriveMotorA = motor(PORT11, ratio6_1, true);
motor leftDriveMotorB = motor(PORT13, ratio6_1, true);
motor leftDriveMotorC = motor(PORT15, ratio6_1, true);
motor_group leftDrive = motor_group(leftDriveMotorA, leftDriveMotorB, leftDriveMotorC);

motor rightDriveMotorA = motor(PORT16, ratio6_1, false);
motor rightDriveMotorB = motor(PORT18, ratio6_1, false);
motor rightDriveMotorC = motor(PORT20, ratio6_1, false);
motor_group rightDrive = motor_group(rightDriveMotorA, rightDriveMotorB, rightDriveMotorC);

digital_out leftTilter = digital_out(Brain.ThreeWirePort.E);
digital_out rightTilter = digital_out(Brain.ThreeWirePort.F);

inertial backInertial = inertial(PORT5);
inertial frontInertial = inertial(PORT6);

encoder leftTracker = encoder(Brain.ThreeWirePort.A);
encoder rightTracker = encoder(Brain.ThreeWirePort.C);
//encoder sideTracker = encoder(Brain.ThreeWirePort.E); Need to put on 3 wire expander

controller Controller1 = controller(primary);

// VEXcode generated functions
// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}