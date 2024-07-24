#include <iostream>
#include <string>
using namespace std;
class SmartDevices{
	public:
		virtual void turn_on()=0;
		virtual void turn_off()=0;
		virtual void status()=0;
	
};
class SmartLight:public SmartDevices{
	void turn_on() override{
		cout<<"Sart light is on!"<<endl;
	
	}
	void turn_off() override{
	cout<<"Smart light is off!"<<endl;
	
	}
	void status()override {
		cout<<"Smart light is working!"<<endl;
	}	
	
};
class SmartThermo:public SmartDevices{
	void turn_on() override{
		cout<<"Smart thermostate is on!"<<endl;
	
	}
	void turn_off() override{
	cout<<"Smart thermostate is off!"<<endl;
	
	}
	void status()override {
		cout<<"Smart thermostate is working!"<<endl;
	}	
	
};
class SmartSpeaker:public SmartDevices{
	void turn_on() override{
		cout<<"SmartSpeaker is on!"<<endl;
	
	}
	void turn_off() override{
	cout<<"SmartSpeaker is off!"<<endl;
	
	}
	void status()override {
		cout<<"SmartSpeaker is working!"<<endl;
	}	
	
};
class SmartDoorlock:public SmartDevices{
	void turn_on() override{
		cout<<"SmartDoorlock is on!"<<endl;
	
	}
	void turn_off() override{
	cout<<"SmartDoorlock is off!"<<endl;
	
	}
	void status()override {
		cout<<"SmartDoorlock is working!"<<endl;
	}	
	
};
class SmartCamera:public SmartDevices{
	void turn_on() override{
		cout<<"SmartCamera is on!"<<endl;
	
	}
	void turn_off() override{
	cout<<"SmartCamera is off!"<<endl;
	
	}
	void status()override {
		cout<<"SmartCamera is working!"<<endl;
	}	
	
};

void ctrl_device(SmartDevices* devices[]){
	for (int i=0;i<5;i++){
		devices[i]->turn_on();
		devices[i]->turn_off();
		devices[i]->status();
	}
	
	
	
}

int main(){
	SmartLight s_light;
	SmartThermo s_thermo;
	SmartSpeaker s_speaker;
	SmartDoorlock s_dlock;
	SmartCamera s_cam;
	SmartDevices* devices[]={&s_light,&s_thermo,&s_speaker,&s_dlock,&s_cam};
	ctrl_device(devices);
	
}



