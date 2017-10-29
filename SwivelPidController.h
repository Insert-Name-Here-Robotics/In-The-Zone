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


#define current (4095 - (SensorValue[in1]) + (SensorValue[in2]) )/2

const int swivelPowerUp = 84;
const int swivelPowerDown = -45;
const int minSwivelJoystickMovement = 15;

task swivelPidController(){
	requested = -1;

	writeDebugStreamLine("(%s): Entering swivelPidController task ",__FILE__);
	while(true){
		if(vexRT[Btn8U]){
			motor[port3] = -1 * swivelPowerUp;
			//motor[port8] = swivelPowerUp;
		}else if(vexRT[Btn8D]){
			motor[port3] = -1 * swivelPowerDown;
			//motor[port8] = swivelPowerDown;
		}else if(fabs(vexRT[Ch2]) > minSwivelJoystickMovement){
			motor[port3] = -1 * vexRT[Ch2];
		}else{
			motor[port3] = 0;
			//motor[port8] = 0;
		}
	}
}