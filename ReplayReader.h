//Replay data include
#include "AutonomousReplayData.h";


const int _f_ch1 = 0;
const int _f_ch2 = 1;
const int _f_ch3 = 2;
const int _f_ch4 = 3;
const int _f_b5u = 4;
const int _f_b5d = 5;
const int _f_b6u = 6;
const int _f_b6d = 7;
const int _f_b7u = 8;
const int _f_b7d = 9;
const int _f_b7l = 10;
const int _f_b7r = 11;
const int _f_b8u = 12;
const int _f_b8d = 13;
const int _f_b8l = 14;
const int _f_b8r = 15;

int bch1 = 0;
int bch2 = 0;
int bch3 = 0;
int bch4 = 0;
int b5u = 0;
int b5d = 0;
int b6u = 0;
int b6d = 0;
int b7u = 0;
int b7d = 0;
int b7l = 0;
int b7r = 0;
int b8u = 0;
int b8d = 0;
int b8l = 0;
int b8r = 0;

task ReplayReader(){
	writeDebugStreamLine("(%s,%d): Entering ReplayReader task ",__FILE__,__LINE__);
	int a = 0;
	while(a<750){
		bch1 = f_joy[a][_f_ch1];
		bch2 = f_joy[a][_f_ch2];
		bch3 = f_joy[a][_f_ch3];
		bch4 = f_joy[a][_f_ch4];
		b5u = f_joy[a][_f_b5u];
		b5d = f_joy[a][_f_b5d];
		b6u = f_joy[a][_f_b6u];
		b6d = f_joy[a][_f_b6d];
		b7u = f_joy[a][_f_b7u];
		b7d = f_joy[a][_f_b7d];
		b7l = f_joy[a][_f_b7l];
		b7r = f_joy[a][_f_b7r];
		b8u = f_joy[a][_f_b8u];
		b8d = f_joy[a][_f_b8d];
		b8l = f_joy[a][_f_b8l];
		b8r = f_joy[a][_f_b8r];
		a++;
		sleep(20);
	}
}
