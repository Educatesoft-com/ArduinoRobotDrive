/*
Library for various robot drive systems in Arduino
*/
#ifndef Robot_Drive_h
#define Robot_Drive_h

#include "Arduino.h"

class Robot_Drive{
	public:
	 int arcadeDriveLeftMotor(int xStick, int yStick, bool leftInvert, int bottomValue, int topValue, double mSpeed);
     int arcadeDriveRightMotor(int xStick, int yStick, bool rightInvert, int bottomValue, int topValue, double mSpeed);	
	 int tankDriveLeftMotor(int leftStick, bool leftInvert, int bottomValue, int topValue, double mSpeed);
     int tankDriveRightMotor(int rightStick, bool rightInvert, int bottomValue, int topValue, double mSpeed);	

     int mecanumDriveLeftFrontMotor(int xStick, int yStick, int zStick, bool leftInvert, int bottomValue, int topValue, double mSpeed);
     int mecanumDriveLeftBackMotor(int xStick, int yStick, int zStick, bool leftInvert, int bottomValue, int topValue, double mSpeed);
     int mecanumDriveRightFrontMotor(int xStick, int yStick, int zStick, bool rightInvert, int bottomValue, int topValue, double mSpeed);
     int mecanumDriveRightBackMotor(int xStick, int yStick, int zStick, bool rightInvert, int bottomValue, int topValue, double mSpeed);
	 
};

#endif