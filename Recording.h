
void recordProgrammingSkills(){
	writeDebugStreamLine("static const byte f_prog_ch [3000][3] = {");
	int a = 0;
	while(!vexRT[Btn7R]){}
	while(vexRT[Btn7R]){}
	while(a<2499){
		byte c3 = vexRT[Ch3];
		byte c4 = vexRT[Ch4];
		byte btn = 0;
		if(vexRT[Btn5U])
			btn |= _mask_b5u;
		if(vexRT[Btn5D])
			btn |= _mask_b5d;
		if(vexRT[Btn6U])
			btn |= _mask_b6u;
		if(vexRT[Btn6D])
			btn |= _mask_b6d;
		if(vexRT[Btn8U])
			btn |= _mask_b8u;
		if(vexRT[Btn8D])
			btn |= _mask_b8d;
		writeDebugStreamLine(" {%d,%d,%d},", c3, c4, btn);
		a++;
		sleep(20);
	}
	writeDebugStreamLine(" {0,0,0}\n};");
}

void recordAutonomous(){
	writeDebugStreamLine("static const byte f_auton_ch [750][3] = {");
	int a = 0;
	while(!vexRT[Btn7R]){}
	while(vexRT[Btn7R]){}
	while(a<749){
		byte c3 = vexRT[Ch3];
		byte c4 = vexRT[Ch4];
		byte btn = 0;
		if(vexRT[Btn5U])
			btn |= _mask_b5u;
		if(vexRT[Btn5D])
			btn |= _mask_b5d;
		if(vexRT[Btn6U])
			btn |= _mask_b6u;
		if(vexRT[Btn6D])
			btn |= _mask_b6d;
		if(vexRT[Btn8U])
			btn |= _mask_b8u;
		if(vexRT[Btn8D])
			btn |= _mask_b8d;
		writeDebugStreamLine(" {%d,%d,%d},", c3, c4, btn);
		a++;
		sleep(20);
	}
	writeDebugStreamLine(" {0,0,0}\n};");
}

void doRecording(){
	clearDebugStream();
	if(pinRecordProgrammingSkills()){
		recordProgrammingSkills();
	}else{
		recordAutonomous();
	}
}
