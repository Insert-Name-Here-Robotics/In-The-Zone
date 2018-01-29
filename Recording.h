
void recordProgrammingSkills();
void recordAutonomous();

void doRecording(){
	clearDebugStream();
	if(pinRecordProgrammingSkills()){
		recordProgrammingSkills();
	}else{
		recordAutonomous()
	}
}

void recordAutonomous(){
	writeDebugStreamLine("static const byte f_auton_ch [750][3] = {");
	int a = 0;
	while(!vexRT[Btn7R]){}
	while(vexRT[Btn7R]){}
	while(a<749){
		writeDebugStreamLine(" {%d,%d,%d},"
	}
}
