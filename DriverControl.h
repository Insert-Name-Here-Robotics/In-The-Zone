
void doDriverControl(){
	writeDebugStreamLine("(%s,%d): Entering doDriverControl routine",__FILE__,__LINE__);
	startTask(ReplayReader);
	startTask(combinedReplay);
	writeDebugStreamLine("(%s,%d): Finishing up doDriverControl routine, entering infinite sleep",__FILE__,__LINE__);
	while(true){
		sleep(100);
	}
}

/*const int leftLiftPowerUp = 64;
const int leftLiftPowerDown = -32;
const int rightLiftPowerUp = 74;
const int rightLiftPowerDown = -32;
const int swivelPowerUp = 84;
const int swivelPowerDown = -45;
const int rackPowerUp = 64;
const int rackPowerDown = -64;
const int clawPowerOpen = 64;
const int clawPowerClosed = -30;
const int minSwivelJoystickMovement = 15;

void doDriverControlOld(){
	while(true){
		if(vexRT[Btn7R] && vexRT[Btn8L]){
			continue;
		}

		//drive train
		motor[port1] = vexRT[Ch3] + vexRT[Ch4];
		motor[port10] = -1*(vexRT[Ch3] - vexRT[Ch4]);

		//lift
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

		//swivel
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

		//claw
		if(vexRT[Btn6U]){
			motor[port8] = clawPowerOpen;
		}else if(vexRT[Btn6D]){
			motor[port8] = clawPowerClosed;
		}else{
			motor[port8] = 0;
		}

		//rack
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
}*/
