//��������� ������������� ������������, ����������� ����� ������������.
//���������� ����� �������� ��� ������� ��������, �����������, ������.

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
	cout << "������� �������������: ";
	getline(cin, Doors);
}
void doors::setTransport()
{
	cout << "��� ����������: ";
	getline(cin, transport);
}
void doors::setForm()
{
	cout << "������� ����� ������: ";
	getline(cin, form);
}
void doors::setColor()
{
	cout << "������� ����: ";
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
	cout << "\n������������� ������: " << getManufacturer()
		<< "\n��� ����������: " << getTransport()
		<< "\n����� ������: " << getForm()
		<< "\n���� ������: " << getColor();
}
