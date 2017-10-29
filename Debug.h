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

void doDebug(){
	writeDebugStreamLine("(%s): Entering doDebug routine",__FILE__);
	while(true){
		UserControlCodePlaceholderForTesting();
		/*writeDebugStreamLine("Left: %d Right: %d Avg: %d Diff: %d",
			SensorValue[in1],SensorValue[in2],
			avgSwivelPotentiometerMacro(SensorValue[in1],SensorValue[in2]),
			avgSwivelPotentiometerMacro(SensorValue[in1],SensorValue[in2])-SensorValue[in2]);*/
	}
}
