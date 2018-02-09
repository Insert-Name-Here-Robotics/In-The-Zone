
//Deadband (UNUSED)
#define deadbandDrive(x) (fabs( x )>10)?( x ):0

//Constants
const int rackPowerUp = -64;
const int rackPowerDown = 64;
//const int clawPowerOpen = 64;
//const int clawPowerClosed = -30;

//const int leftLiftPowerUp = 64;
//const int leftLiftPowerDown = -32;
//const int rightLiftPowerUp = 64;
//const int rightLiftPowerDown = -32;


task combinedReplay(){
	writeDebugStreamLine("(%s,%d): Entering combinedReplay task ",__FILE__,__LINE__);
	while(true){
		motor[port3] = bch3 + bch4;
		motor[port4] = bch3 + bch4;
		motor[port7] = -1*(bch3 - bch4);
		motor[port8] = -1*(bch3 - bch4);
		if(b8u){
			motor[port2] = -1 * rackPowerUp;
			motor[port9] = rackPowerUp;
		}else if(b8d){
			motor[port2] = -1 * rackPowerDown;
			motor[port9] = rackPowerDown;
		}else{
			motor[port2] = 0;
			motor[port9] = 0;
		}
		/*
		if(b6u){
			motor[port8] = clawPowerOpen;
		}else if(b6d){
			motor[port8] = clawPowerClosed;
		}else{
			motor[port8] = 0;
		}
		if(b5u){
			motor[port4] = -1 * leftLiftPowerUp;
			motor[port5] = -1 * leftLiftPowerUp;
			motor[port6] = rightLiftPowerUp;
			motor[port7] = rightLiftPowerUp;
		}else if(b5d){
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
		*/
		sleep(25);
	}
}
