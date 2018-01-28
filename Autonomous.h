
void doAutonomous(){
	writeDebugStreamLine("(%s,%d): Entering doAutonomous routine",__FILE__,__LINE__);
	startTask(ReplayReader);
	startTask(combinedReplay);
	while(true){
		sleep(1000);
	}
}
