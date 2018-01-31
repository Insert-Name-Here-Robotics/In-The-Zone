
void recordProgrammingSkills(){
	writeDebugStreamLine("static const byte f_prog_ch [3000][3] = {");
	int a = 0;
	while(a<2499){
		bch3 = vexRT[Ch3];
		bch4 = vexRT[Ch4];
		b5u = (bool) vexRT[Btn5U];
		b5d = (bool) vexRT[Btn5D];
		b6u = (bool) vexRT[Btn6U];
		b6d = (bool) vexRT[Btn6D];
		b8u = (bool) vexRT[Btn8U];
		b8d = (bool) vexRT[Btn8D];
		byte btn = 0;
		if(b5u)
			btn |= _mask_b5u;
		if(b5d)
			btn |= _mask_b5d;
		if(b6u)
			btn |= _mask_b6u;
		if(b6d)
			btn |= _mask_b6d;
		if(b8u)
			btn |= _mask_b8u;
		if(b8d)
			btn |= _mask_b8d;
		writeDebugStreamLine(" {%d,%d,%d},", bch3, bch4, btn);
		a++;
		sleep(20);
	}
	writeDebugStreamLine(" {0,0,0}\n};");
}

void recordAutonomous(){
	writeDebugStreamLine("static const byte f_auton_ch [750][3] = {");
	int a = 0;
	while(a<749){
		bch3 = vexRT[Ch3];
		bch4 = vexRT[Ch4];
		b5u = (bool) vexRT[Btn5U];
		b5d = (bool) vexRT[Btn5D];
		b6u = (bool) vexRT[Btn6U];
		b6d = (bool) vexRT[Btn6D];
		b8u = (bool) vexRT[Btn8U];
		b8d = (bool) vexRT[Btn8D];
		byte btn = 0;
		if(b5u)
			btn |= _mask_b5u;
		if(b5d)
			btn |= _mask_b5d;
		if(b6u)
			btn |= _mask_b6u;
		if(b6d)
			btn |= _mask_b6d;
		if(b8u)
			btn |= _mask_b8u;
		if(b8d)
			btn |= _mask_b8d;
		writeDebugStreamLine(" {%d,%d,%d},", bch3, bch4, btn);
		a++;
		sleep(20);
	}
	writeDebugStreamLine(" {0,0,0}\n};");
}

void doRecording(){
	clearDebugStream();
	while(!vexRT[Btn7R]){}
	while(vexRT[Btn7R]){}
	startTask(combinedReplay);
	if(pinRecordProgrammingSkills()){
		recordProgrammingSkills();
	}else{
		recordAutonomous();
	}
	stopTask(combinedReplay);
}
