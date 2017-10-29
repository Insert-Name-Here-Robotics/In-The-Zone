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

const int rackPowerUp = 64;
const int rackPowerDown = -64;

task rackController(){
	writeDebugStreamLine("(%s): Entering rackController task ",__FILE__);
	while(true){
		if(vexRT[Btn7U]){
			motor[port2] = -1 * rackPowerUp;
			motor[port9] = rackPowerUp;
		}else if(vexRT[Btn7D]){
			motor[port2] = -1 * rackPowerDown;
			motor[port9] = rackPowerDown;
		}else{
			motor[port2] = 0;
			motor[port9] = 0;
		}
	}
}
