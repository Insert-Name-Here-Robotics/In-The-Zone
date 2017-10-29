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

const int leftLiftPowerUp = 64;
const int leftLiftPowerDown = -32;
const int rightLiftPowerUp = 74;
const int rightLiftPowerDown = -32;

task liftController(){
	writeDebugStreamLine("(%s): Entering liftController task ",__FILE__);
	while(true){
		if(vexRT[Btn5U]){
			motor[port4] = -1 * leftLiftPowerUp;
			motor[port5] = -1 * leftLiftPowerUp;
			motor[port6] = rightLiftPowerUp;
			motor[port7] = rightLiftPowerUp;
		}else if(vexRT[Btn5D]){
			motor[port4] = -1 * leftLiftPowerDown;
			motor[port5] = -1 * leftLiftPowerDown;
			motor[port6] = rightLiftPowerDown;
			motor[port7] = rightLiftPowerDown;
		}else{
			motor[port4] = 0;
			motor[port5] = 0;
			motor[port6] = 0;
			motor[port7] = 0;
		}
	}
}
