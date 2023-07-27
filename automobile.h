//»спользу€ множественное наследование, разработать класс УјвтомобильФ.
//јвтомобиль будет потомком дл€ классов У олесаФ, УƒвигательФ, УƒвериФ.

#pragma once
#include "engine.h"
#include "wheel.h"
#include "doors.h"
#include<string>
using namespace std;
class automobile : public engine, public wheel, public doors
{
private:
	string Automobile;
	int amount_wheel;
	int amount_engine;
	int amount_doors;
public:
	automobile();
	void setManufacturer();
	void setTransport();
	void setSpeed();
	void setColor();
	void setAmount_wheel();
	void setAmount_engine();
	void setAmount_doors();
	int getAmount_wheel();
	int getAmount_engine();
	int getAmount_doors();
	void Output();
};

