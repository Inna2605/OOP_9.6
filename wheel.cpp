//»спользу€ множественное наследование, разработать класс УјвтомобильФ.
//јвтомобиль будет потомком дл€ классов У олесаФ, УƒвигательФ, УƒвериФ.

#include "wheel.h"

wheel::wheel()
{
	Wheel = "";
	speed = 0;
	load = 0;
	diameter = 0;
	transport = "";
}

void wheel::setManufacturer()
{
	cout << "¬ведите производител€: ";
	getline(cin, Wheel);
}
void wheel::setTransport()
{
	cout << "¬ид транспорта: ";
	getline(cin, transport);
}
void wheel::setSpeed()
{
	cout << "¬ведите на какую скорость расчитано: ";
	cin >> speed;
}
void wheel::setLoad()
{
	cout << "¬ведите на какую нагрузку расчитано колесо: ";
	cin >> load;
}
void wheel::setDiameter()
{
	cout << "¬ведите диаметр колеса: ";
	cin >> diameter;
}

string wheel::getManufacturer()
{
		return Wheel;
}

float wheel::getSpeed()
{
	return speed;
}

float wheel::getLoad()
{
	return load;
}

float wheel::getDiameter()
{
	return diameter;
}

string wheel::getTransport()
{
	return transport;
}

void wheel::Output()
{
	cout << "\nѕроизводитель колеса: " << getManufacturer()
		<< "\nƒл€ транспорта: " << getTransport()
		<< "\nЌагрузка на колесо: " << getLoad()
		<< "\nƒл€ средней скорости: " << getSpeed()
		<< "\nƒиаметр колеса: " << getDiameter();
}
