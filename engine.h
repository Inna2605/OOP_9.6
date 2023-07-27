//»спользу€ множественное наследование, разработать класс УјвтомобильФ.
//јвтомобиль будет потомком дл€ классов У олесаФ, УƒвигательФ, УƒвериФ.

#pragma once
#include<iostream>
#include<string>
using namespace std;
class engine
{
protected:
	string Engine;
	float power;
	float consumption;
	string fuel;
	string transport;
public:
	engine();
	void setManufacturer();
	void setPower();
	void setConsumption();
	void setFuel();
	void setTransport();
	string getManufacturer();
	float getPower();
	float getConsumption();
	string getFuel();
	string getTransport();
	void Output();
};

