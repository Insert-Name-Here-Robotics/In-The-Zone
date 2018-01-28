
//Return 1 if recording, 0 if replaying
bool pinRecording(){
	return !SensorValue[dgtl1];
}

//Return  1 if recording ProgrammingSkills, 0 if recording Autonomous
bool pinRecordProgrammingSkills(){
	return !SensorValue[dgtl2];
}

//Return 1 if replaying ProgrammingSkills, 0 if auton or no replay
bool pinRunProgrammingSkills(){
	return !SensorValue[dgtl2] && !SensorValue[dgtl3];
}

//Return 1 if replaying autonomous, 0 if replaying ProgrammingSkills or no replay
bool pinRunAutonomous(){
	return !(!SensorValue[dgtl2]);	//double not to cast to bool
}

//Return 1 if not replaying auton, 0 if replaying ProgrammingSkills or auton
bool pinNoReplay(){
	return !SensorValue[dgtl2] && SensorValue[dgtl3];
}

//Return 1 if not reversing autonomous
int pinReverseAutonomousChModifier(){
	return 	(SensorValue[dgtl3] ? 1 : -1);
}
