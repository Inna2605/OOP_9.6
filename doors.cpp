//»спользу€ множественное наследование, разработать класс УјвтомобильФ.
//јвтомобиль будет потомком дл€ классов У олесаФ, УƒвигательФ, УƒвериФ.

#include "doors.h"

doors::doors()
{
	string Doors = "";
	string transport = "";
	string form = "";
	string color = "";
}

void doors::setManufacturer()
{
	cout << "¬ведите производител€: ";
	getline(cin, Doors);
}
void doors::setTransport()
{
	cout << "¬ид транспорта: ";
	getline(cin, transport);
}
void doors::setForm()
{
	cout << "¬ведите форму дверей: ";
	getline(cin, form);
}
void doors::setColor()
{
	cout << "¬ведите цвет: ";
	getline(cin, color);
}

string doors::getManufacturer()
{	
	return Doors;
}

string doors::getTransport()
{	
	return transport;
}

string doors::getForm()
{	
	return form;
}

string doors::getColor()
{
	return color;
}

void doors::Output()
{
	cout << "\nѕроизводитель дверей: " << getManufacturer()
		<< "\nƒл€ транспорта: " << getTransport()
		<< "\n‘орма дверей: " << getForm()
		<< "\n÷вет дверей: " << getColor();
}
