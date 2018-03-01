This library provided robot drive functionality to robots.  

Implementation:
a) Add the Robot_Drive folder(this folder) to Arduino-->libraries.
b) Instantiate a instance of the class "Robot Drive" (ex. Robot_Drive robotdrive = Robot_Drive();)
c) Call methods to run Arcade Drive, Tank Drive or Mecanum(4 motor controllers needed).  
For Tank and Arcade drives with  4 speed controllers just call the methods for both left and right motors
as they are identical.

 //Arcade 2 Speed Controllers
 int leftMotor = robotdrive.arcadeDriveLeftMotor(yStick, xStick, false, motorStop, mul);
 int rightMotor = robotdrive.arcadeDriveRightMotor(yStick, xStick, true, motorStop, mul);

or

 //Arcade 4 speed controllers
 int leftFrontMotor = robotdrive.arcadeDriveLeftMotor(yStick, xStick, false, motorStop, mul);
 int leftBackMotor = robotdrive.arcadeDriveLeftMotor(yStick, xStick, false, motorStop, mul);
 int rightFrontMotor = robotdrive.arcadeDriveRightMotor(yStick, xStick, true, motorStop, mul);
 int rightBackMotor = robotdrive.arcadeDriveRightMotor(yStick, xStick, true, motorStop, mul);

or

 //Tank 2 Speed Controllers
 int leftMotor = robotdrive.tankDriveLeftMotor(leftStick, false, motorStop, mul);
 int rightMotor = robotdrive.tankDriveRightMotor(rightStick, true, motorStop, mul);

or

 //Tank 4 Speed Controllers
 int leftFrontMotor = robotdrive.tankDriveLeftMotor(leftStick, false, motorStop, mul);
 int leftBackMotor = robotdrive.tankDriveLeftMotor(leftStick, false, motorStop, mul);
 int rightFrontMotor = robotdrive.tankDriveRightMotor(rightStick, true, motorStop, mul);
 int rightBackMotor = robotdrive.tankDriveRightMotor(rightStick, true, motorStop, mul);

or

// Mecanum 4 speed controllers
int leftFrontMotor = robotdrive.mecanumDriveLeftFrontMotor(int xStick, int yStick, int zStick, bool leftInvert, int mStop, double mSpeed);
int leftBackMotor = robotdrive.mecanumDriveLeftBackMotor(int xStick, int yStick, int zStick, bool leftInvert, int mStop, double mSpeed);
int rightFrontMotor = robotdrive.mecanumDriveRightFrontMotor(int xStick, int yStick, int zStick, bool rightInvert, int mStop, double mSpeed);
int rightBackMotor = robotdrive.mecanumDriveRightBackMotor(int xStick, int yStick, int zStick, bool rightInvert, int mStop, double mSpeed);

d)  Provide the appropriate arguments in the above methods.
* yStick and xStick values should be mapped to 0-255 prior to being added as arguments to the member functions.
* mul should be a value between 0.0 - 1.0.