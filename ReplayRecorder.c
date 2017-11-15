
//Controller includes
#include "DriveTrainController.h"
#include "LiftController.h"
#include "ClawController.h"
#include "RackController.h"
#include "SwivelPidController.h"

const int f_ch1 = 0;
const int f_ch2 = 1;
const int f_ch3 = 2;
const int f_ch4 = 3;
const int f_b5u = 4;
const int f_b5d = 5;
const int f_b6u = 6;
const int f_b6d = 7;
const int f_b7u = 8;
const int f_b7d = 9;
const int f_b7l = 10;
const int f_b7r = 11;
const int f_b8u = 12;
const int f_b8d = 13;
const int f_b8l = 14;
const int f_b8r = 15;

task record(){
	clearDebugStream();
	int [1500][16] f_joy;
	int a=0;
	while(!vexRT[Btn7R]){}
	while(a<1500){
		f_joy[a][f_ch1]=vexRT[Ch1];
		f_joy[a][f_ch2]=vexRT[Ch2];
		f_joy[a][f_ch3]=vexRT[Ch3];
		f_joy[a][f_ch4]=vexRT[Ch4];
		f_joy[a][f_b5u]=vexRT[Btn5U];
		f_joy[a][f_b5d]=vexRT[Btn5D];
		f_joy[a][f_b6u]=vexRT[Btn6U];
		f_joy[a][f_b6d]=vexRT[Btn6D];
		f_joy[a][f_b7u]=vexRT[Btn7U];
		f_joy[a][f_b7d]=vexRT[Btn7D];
		f_joy[a][f_b7l]=vexRT[Btn7L];
		f_joy[a][f_b7r]=vexRT[Btn7R];
		f_joy[a][f_b8u]=vexRT[Btn8U];
		f_joy[a][f_b8d]=vexRT[Btn8D];
		f_joy[a][f_b8l]=vexRT[Btn8L];
		f_joy[a][f_b8r]=vexRT[Btn8R];
		a++;
		sleep(10);
	}
	writeDebugStreamLine("int[1500][16] f_joy = {");
	a=0;
	while(a<1499){
	  writeDebugStreamLine("{%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d},",f_joy[a][f_ch1],f_joy[a][f_ch2],f_joy[a][f_ch3],f_joy[a][f_ch4],f_joy[a][f_b5u],f_joy[a][f_b5d],f_joy[a][f_b6u],f_joy[a][f_b6d],f_joy[a][f_b7u],f_joy[a][f_b7d],f_joy[a][f_b7l],f_joy[a][f_b7r],f_joy[a][f_b8u],f_joy[a][f_b8d],f_joy[a][f_b8l],f_joy[a][f_b8r]);
	}
	writeDebugStreamLine("{%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d}};",f_joy[1499][f_ch1],f_joy[1499][f_ch2],f_joy[1499][f_ch3],f_joy[1499][f_ch4],f_joy[1499][f_b5u],f_joy[1499][f_b5d],f_joy[1499][f_b6u],f_joy[1499][f_b6d],f_joy[1499][f_b7u],f_joy[1499][f_b7d],f_joy[1499][f_b7l],f_joy[1499][f_b7r],f_joy[1499][f_b8u],f_joy[1499][f_b8d],f_joy[1499][f_b8l],f_joy[1499][f_b8r]);
}

task main(){
	//writeDebugStreamLine("(%s,%d): Entering main (ReplayRecorder) task",__FILE__,__LINE__);
	startTask(record);
	startTask(driveTrainController);
	startTask(liftController);
	startTask(clawController);
	startTask(rackController);
	startTask(swivelPidController);
	//writeDebugStreamLine("(%s,%d): Done with main (ReplayRecorder) task, entering infinite sleep ",__FILE__,__LINE__);
	while(true){
		sleep(1000);
	}
	//writeDebugStreamLine("(%s,%d): Exiting main (ReplayRecorder) task ",__FILE__,__LINE__);
}
