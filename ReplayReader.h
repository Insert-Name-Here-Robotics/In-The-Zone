//Replay data include
#include "AutonomousReplayData.h";
#include "ProgrammingReplayData.h";


/*const int _f_ch1 = 0;
const int _f_ch2 = 1;
const int _f_ch3 = 2;
const int _f_ch4 = 3;
const int _f_b5u = 0;
const int _f_b5d = 1;
const int _f_b6u = 2;
const int _f_b6d = 3;
const int _f_b7u = 4;
const int _f_b7d = 5;
const int _f_b7l = 6;
const int _f_b7r = 7;
const int _f_b8u = 8;
const int _f_b8d = 9;
const int _f_b8l = 10;
const int _f_b8r = 11;*/

const int _f_ch3 = 0;
const int _f_ch4 = 1;
const int _f_b5u = 0;
const int _f_b5d = 1;
const int _f_b6u = 2;
const int _f_b6d = 3;
const int _f_b8u = 4;
const int _f_b8d = 5;

byte _bch1 = 0;
byte _bch2 = 0;
byte bch3 = 0;
byte bch4 = 0;
bool b5u = false;
bool b5d = false;
bool b6u = false;
bool b6d = false;
bool _b7u = false;
bool _b7d = false;
bool _b7l = false;
bool _b7r = false;
bool b8u = false;
bool b8d = false;
bool _b8l = false;
bool _b8r = false;

task ReplayReader(){
	writeDebugStreamLine("(%s,%d): Entering ReplayReader task ",__FILE__,__LINE__);
	int a = 0;
	if(pinRunAutonomous()){
		int modifier = pinReverseAutonomousChModifier();
		while(true){
			if(bIfiAutonomousMode && a < 750){
				//bch1 = f_auton_ch[a][_f_ch1] * modifier;
				//bch2 = f_auton_ch[a][_f_ch2];
				bch3 = f_auton_ch[a][_f_ch3];
				bch4 = f_auton_ch[a][_f_ch4] * modifier;
				b5u = f_auton_btn[a][_f_b5u];
				b5d = f_auton_btn[a][_f_b5d];
				b6u = f_auton_btn[a][_f_b6u];
				b6d = f_auton_btn[a][_f_b6d];
				//b7u = f_auton_btn[a][_f_b7u];
				//b7d = f_auton_btn[a][_f_b7d];
				//b7l = f_auton_btn[a][_f_b7l];
				//b7r = f_auton_btn[a][_f_b7r];
				b8u = f_auton_btn[a][_f_b8u];
				b8d = f_auton_btn[a][_f_b8d];
				//b8l = f_auton_btn[a][_f_b8l];
				//b8r = f_auton_btn[a][_f_b8r];
				a++;
				sleep(20);
			}else{
				_bch1 = vexRT[Ch1];
				_bch2 = vexRT[Ch2];
				bch3 = vexRT[Ch3];
				bch4 = vexRT[Ch4];
				b5u = (bool) vexRT[Btn5U];
				b5d = (bool) vexRT[Btn5D];
				b6u = (bool) vexRT[Btn6U];
				b6d = (bool) vexRT[Btn6D];
				_b7u = (bool) vexRT[Btn7U];
				_b7d = (bool) vexRT[Btn7D];
				_b7l = (bool) vexRT[Btn7L];
				_b7r = (bool) vexRT[Btn7R];
				b8u = (bool) vexRT[Btn8U];
				b8d = (bool) vexRT[Btn8D];
				_b8l = (bool) vexRT[Btn8L];
				_b8r = (bool) vexRT[Btn8R];
				a++;
				sleep(10);
			}
		}
	}else if(pinRunProgrammingSkills()){
		while(a < 3000){
			//bch1 = f_prog_ch[a][_f_ch1];
			//bch2 = f_prog_ch[a][_f_ch2];
			bch3 = f_prog_ch[a][_f_ch3];
			bch4 = f_prog_ch[a][_f_ch4];
			b5u = f_prog_btn[a][_f_b5u];
			b5d = f_prog_btn[a][_f_b5d];
			b6u = f_prog_btn[a][_f_b6u];
			b6d = f_prog_btn[a][_f_b6d];
			//b7u = f_prog_btn[a][_f_b7u];
			//b7d = f_prog_btn[a][_f_b7d];
			//b7l = f_prog_btn[a][_f_b7l];
			//b7r = f_prog_btn[a][_f_b7r];
			b8u = f_prog_btn[a][_f_b8u];
			b8d = f_prog_btn[a][_f_b8d];
			//b8l = f_prog_btn[a][_f_b8l];
			//b8r = f_prog_btn[a][_f_b8r];
			a++;
			sleep(20);
		}
	}
}
