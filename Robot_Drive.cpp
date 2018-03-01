#include "Arduino.h"
#include "Robot_Drive.h"

// Arcade Drive Methods
// Left Motor Arcade Drive
int Robot_Drive::arcadeDriveLeftMotor(int xStick, int yStick, bool leftInvert, int bottomValue, int topValue, double mSpeed){
  int mStop = (bottomValue + topValue)/2;
  int leftMotorX = mStop;
  int leftMotorY = mStop;

  // set speed range
  double top = mStop + (mStop * mSpeed*2);
  double bottom = mStop - (mStop * mSpeed*2);
  double ltop;
  double lbottom;
  // Invert if needed.
  if(leftInvert)
  {
    ltop = bottom;
    lbottom = top;
  }
  else
  {
    ltop = top;
    lbottom = bottom;
  } 
    // X Axis Values Left and Right
     leftMotorX = map(xStick, 0, 255,lbottom,ltop );
  // Y Axis Values Forward and Back
     leftMotorY = map(yStick, 0, 255, lbottom, ltop);

  int leftMotor = (leftMotorX + leftMotorY)/2;
  if(leftMotor > topValue)
  {
	  leftMotor = topValue;
  }
  else if(leftMotor < bottomValue)
  {
	  leftMotor = bottomValue;
  }
  return leftMotor;
 }
 
 // Right Motor Arcade Drive
 int Robot_Drive::arcadeDriveRightMotor(int xStick, int yStick, bool rightInvert, int bottomValue, int topValue, double mSpeed){
  int mStop = (bottomValue + topValue)/2;
  int rightMotorX = mStop;
  int rightMotorY = mStop;

  // set speed range
  double top = mStop + (mStop * mSpeed*2);
  double bottom = mStop - (mStop * mSpeed*2);
  double rtop;
  double rbottom;
  // Invert if needed.
  if(rightInvert)
  {
    rtop = bottom;
    rbottom = top;
  }
  else
  {
    rtop = top;
    rbottom = bottom;
  }
  
    // X Axis Values Left and Right
     rightMotorX = map(xStick, 0, 255, rtop, rbottom);
  // Y Axis Values Forward and Back
     rightMotorY = map(yStick, 0, 255, rbottom, rtop);
  int rightMotor = (rightMotorX + rightMotorY)/2;
if(rightMotor > topValue)
{
	rightMotor = topValue;
}
else if(rightMotor < bottomValue)
{
	rightMotor = bottomValue;
}
	
  return rightMotor;
 }
 
 // Tank Drive Methods
 // Left Motor Tank Drive
 int Robot_Drive::tankDriveLeftMotor(int leftStick, bool leftInvert, int bottomValue, int topValue, double mSpeed){
  int mStop = (bottomValue + topValue)/2;
  // set speed range
  double top = mStop + (mStop * mSpeed);
  double bottom = mStop - (mStop * mSpeed);
  double ltop;
  double lbottom;
  // Invert if needed.
  if(leftInvert)
  {
    ltop = bottom;
    lbottom = top;
  }
  else
  {
    ltop = top;
    lbottom = bottom;
  } 
  // Y Axis Values Forward and Back
  int leftMotor = map(leftStick, 0, 255, lbottom, ltop);
  return leftMotor;
 }
 
 // Right Motor Tank Drive
 int Robot_Drive::tankDriveRightMotor(int rightStick, bool rightInvert, int bottomValue, int topValue, double mSpeed){
  int mStop = (bottomValue + topValue)/2;
  // set speed range
  double top = mStop + (mStop * mSpeed);
  double bottom = mStop - (mStop * mSpeed);
  double rtop;
  double rbottom;
  // Invert if needed.
  if(rightInvert)
  {
    rtop = bottom;
    rbottom = top;
  }
  else
  {
    rtop = top;
    rbottom = bottom;
  } 
  // Y Axis Values Forward and Back
  int rightMotor = map(rightStick, 0, 255, rbottom, rtop);
  return rightMotor;
 }
 
 
 int Robot_Drive::mecanumDriveLeftFrontMotor(int xStick, int yStick, int zStick, bool leftInvert, int bottomValue, int topValue, double mSpeed){
  int mStop = (bottomValue + topValue)/2;
  int leftMotorX = mStop;
  int leftMotorY = mStop;
  int leftMotorZ = mStop;
  // set speed range
  double top = mStop + (mStop * mSpeed);
  double bottom = mStop - (mStop * mSpeed);
  double ltop;
  double lbottom;
  // Invert if needed.
  if(leftInvert)
  {
    ltop = bottom;
    lbottom = top;
  }
  else
  {
    ltop = top;
    lbottom = bottom;
  } 
  // X Axis Values Left and Right
     leftMotorX = map(xStick, 0, 255,lbottom,ltop );
  // Y Axis Values Forward and Back
     leftMotorY = map(yStick, 0, 255, lbottom, ltop);
  // Z Axis Values Horizontal Stick 2
     leftMotorZ = map(zStick, 0, 255, ltop, lbottom);
  
  int leftMotor = (leftMotorX + leftMotorY + leftMotorZ)/3;
  return leftMotor;
 }
 
  int Robot_Drive::mecanumDriveLeftBackMotor(int xStick, int yStick, int zStick, bool leftInvert, int bottomValue, int topValue, double mSpeed){
  int mStop = (bottomValue + topValue)/2;
  int leftMotorX = mStop;
  int leftMotorY = mStop;
  int leftMotorZ = mStop;
  // set speed range
  double top = mStop + (mStop * mSpeed);
  double bottom = mStop - (mStop * mSpeed);
  double ltop;
  double lbottom;
  // Invert if needed.
  if(leftInvert)
  {
    ltop = bottom;
    lbottom = top;
  }
  else
  {
    ltop = top;
    lbottom = bottom;
  } 
  // X Axis Values Left and Right
     leftMotorX = map(xStick, 0, 255,lbottom,ltop );
  // Y Axis Values Forward and Back
     leftMotorY = map(yStick, 0, 255, lbottom, ltop);
  // Z Axis Values Horizontal Stick 2
     leftMotorZ = map(zStick, 0, 255, lbottom, ltop);
  
  int leftMotor = (leftMotorX + leftMotorY - leftMotorZ)/3;
  return leftMotor;
 }
 
 // Right Motor Arcade Drive
 int Robot_Drive::mecanumDriveRightFrontMotor(int xStick, int yStick, int zStick, bool rightInvert, int bottomValue, int topValue, double mSpeed){
  int mStop = (bottomValue + topValue)/2;
  int rightMotorX = mStop;
  int rightMotorY = mStop;
  int rightMotorZ = mStop;

  // set speed range
  double top = mStop + (mStop * mSpeed);
  double bottom = mStop - (mStop * mSpeed);
  double rtop;
  double rbottom;
  // Invert if needed.
  if(rightInvert)
  {
    rtop = bottom;
    rbottom = top;
  }
  else
  {
    rtop = top;
    rbottom = bottom;
  }
    // X Axis Values Left and Right
     rightMotorX = map(xStick, 0, 255, rtop, rbottom); 
    // Y Axis Values Forward and Back
     rightMotorY = map(yStick, 0, 255, rbottom, rtop);
     // Z Axis Values Horizontal Stick 2
     rightMotorZ = map(zStick, 0, 255, rbottom, rtop);
  
  int rightMotor = (-rightMotorX + rightMotorY - rightMotorZ)/3;
  return rightMotor;
 }
 
  int Robot_Drive::mecanumDriveRightBackMotor(int xStick, int yStick, int zStick, bool rightInvert, int bottomValue, int topValue, double mSpeed){
  int mStop = (bottomValue + topValue)/2;
  int rightMotorX = mStop;
  int rightMotorY = mStop;
  int rightMotorZ = mStop;

  // set speed range
  double top = mStop + (mStop * mSpeed);
  double bottom = mStop - (mStop * mSpeed);
  double rtop;
  double rbottom;
  // Invert if needed.
  if(rightInvert)
  {
    rtop = bottom;
    rbottom = top;
  }
  else
  {
    rtop = top;
    rbottom = bottom;
  }
  // X Axis Values Left and Right
     rightMotorX = map(xStick, 0, 255, rtop, rbottom);
  // Y Axis Values Forward and Back
     rightMotorY = map(yStick, 0, 255, rbottom, rtop);
  // Z Axis Values Horizontal Stick 2
     rightMotorZ = map(zStick, 0, 255, rtop, rbottom);
  
  
  int rightMotor = (-rightMotorX + rightMotorY + rightMotorZ)/3;
  return rightMotor;
 }
 