using namespace vex;

extern brain Brain;

// VEXcode devices
extern motor arm;
extern motor conveyor;

extern motor_group leftDrive;
extern motor_group rightDrive;

extern digital_out leftTilter;
extern digital_out rightTilter;

extern inertial backInertial;
extern inertial frontInertial;

extern encoder leftTracker; 
extern encoder rightTracker;
extern encoder sideTracker;

extern controller Controller1;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );