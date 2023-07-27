//»спользу€ множественное наследование, разработать класс УјвтомобильФ.
//јвтомобиль будет потомком дл€ классов У олесаФ, УƒвигательФ, УƒвериФ.

#pragma once
#include<iostream>
#include<string>
using namespace std;
class wheel
{
protected:
	string Wheel;
	float speed;
	float load;
	float diameter;
	string transport;
public:
	wheel();
	void setManufacturer();
	void setSpeed();
	void setLoad();
	void setDiameter();
	void setTransport();
	string getManufacturer();
	float getSpeed();
	float getLoad();
	float getDiameter();
	string getTransport();
	void Output();
};

