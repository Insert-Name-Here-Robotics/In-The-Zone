//Replay data include
#include "AutonomousReplayData.h";
#include "ProgrammingReplayData.h";


const int _f_ch1 = 0;
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
const int _f_b8r = 11;

byte bch1 = 0;
byte bch2 = 0;
byte bch3 = 0;
byte bch4 = 0;
byte b5u = 0;
byte b5d = 0;
byte b6u = 0;
byte b6d = 0;
byte b7u = 0;
byte b7d = 0;
byte b7l = 0;
byte b7r = 0;
byte b8u = 0;
byte b8d = 0;
byte b8l = 0;
byte b8r = 0;

task ReplayReader(){
	writeDebugStreamLine("(%s,%d): Entering ReplayReader task ",__FILE__,__LINE__);
	int a = 0;
	if(!pinProgrammingSkills()){
		while(true){
			if(bIfiAutonomousMode && a < 750){
				bch1 = f_auton_ch[a][_f_ch1];
				bch2 = f_auton_ch[a][_f_ch2];
				bch3 = f_auton_ch[a][_f_ch3];
				bch4 = f_auton_ch[a][_f_ch4];
				b5u = f_auton_btn[a][_f_b5u];
				b5d = f_auton_btn[a][_f_b5d];
				b6u = f_auton_btn[a][_f_b6u];
				b6d = f_auton_btn[a][_f_b6d];
				b7u = f_auton_btn[a][_f_b7u];
				b7d = f_auton_btn[a][_f_b7d];
				b7l = f_auton_btn[a][_f_b7l];
				b7r = f_auton_btn[a][_f_b7r];
				b8u = f_auton_btn[a][_f_b8u];
				b8d = f_auton_btn[a][_f_b8d];
				b8l = f_auton_btn[a][_f_b8l];
				b8r = f_auton_btn[a][_f_b8r];
				a++;
				sleep(20);
			}else{
				bch1 = vexRT[Ch1];
				bch2 = vexRT[Ch2];
				bch3 = vexRT[Ch3];
				bch4 = vexRT[Ch4];
				b5u = vexRT[Btn5U];
				b5d = vexRT[Btn5D];
				b6u = vexRT[Btn6U];
				b6d = vexRT[Btn6D];
				b7u = vexRT[Btn7U];
				b7d = vexRT[Btn7D];
				b7l = vexRT[Btn7L];
				b7r = vexRT[Btn7R];
				b8u = vexRT[Btn8U];
				b8d = vexRT[Btn8D];
				b8l = vexRT[Btn8L];
				b8r = vexRT[Btn8R];
				a++;
				sleep(10);
			}
		}
	}else{
		while(a < 3000){
			bch1 = f_prog_ch[a][_f_ch1];
			bch2 = f_prog_ch[a][_f_ch2];
			bch3 = f_prog_ch[a][_f_ch3];
			bch4 = f_prog_ch[a][_f_ch4];
			b5u = f_prog_btn[a][_f_b5u];
			b5d = f_prog_btn[a][_f_b5d];
			b6u = f_prog_btn[a][_f_b6u];
			b6d = f_prog_btn[a][_f_b6d];
			b7u = f_prog_btn[a][_f_b7u];
			b7d = f_prog_btn[a][_f_b7d];
			b7l = f_prog_btn[a][_f_b7l];
			b7r = f_prog_btn[a][_f_b7r];
			b8u = f_prog_btn[a][_f_b8u];
			b8d = f_prog_btn[a][_f_b8d];
			b8l = f_prog_btn[a][_f_b8l];
			b8r = f_prog_btn[a][_f_b8r];
			a++;
			sleep(20);
		}
	}
}
