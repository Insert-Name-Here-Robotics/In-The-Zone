#pragma config(Sensor, in1,    ,               sensorPotentiometer)
#pragma config(Sensor, in2,    ,               sensorPotentiometer)
#pragma config(Sensor, in3,    ,               sensorPotentiometer)
#pragma config(Sensor, in4,    ,               sensorPotentiometer)
#pragma config(Sensor, dgtl1,  ,               sensorDigitalIn)
#pragma config(Motor,  port1,            ,             tmotorVex393_HBridge, openLoop, driveLeft)
#pragma config(Motor,  port2,            ,             tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,            ,             tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,            ,             tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,            ,             tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,            ,             tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,            ,             tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,            ,             tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,            ,             tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10,           ,             tmotorVex393_HBridge, openLoop, driveRight)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*/Controller includes
#include "DriveTrainController.h"
#include "LiftController.h"
#include "ClawController.h"
#include "RackController.h"
#include "SwivelPidController.h"
//*/

void stopAllUserCreatedTasks(){
	writeDebugStreamLine("(%s,%d): Entering stopAllUserCreatedTasks routine",__FILE__,__LINE__);
	stopTask(driveTrainController);
	stopTask(liftController);
	stopTask(clawController);
	stopTask(rackController);
	stopTask(swivelPidController);
	writeDebugStreamLine("(%s,%d): Finishing up stopAllUserCreatedTasks routine",__FILE__,__LINE__);
}
