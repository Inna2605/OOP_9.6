//��������� ������������� ������������, ����������� ����� ������������.
//���������� ����� �������� ��� ������� ��������, �����������, ������.

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
	cout << "������� �������������: ";
	getline(cin, Wheel);
}
void wheel::setTransport()
{
	cout << "��� ����������: ";
	getline(cin, transport);
}
void wheel::setSpeed()
{
	cout << "������� �� ����� �������� ���������: ";
	cin >> speed;
}
void wheel::setLoad()
{
	cout << "������� �� ����� �������� ��������� ������: ";
	cin >> load;
}
void wheel::setDiameter()
{
	cout << "������� ������� ������: ";
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
	cout << "\n������������� ������: " << getManufacturer()
		<< "\n��� ����������: " << getTransport()
		<< "\n�������� �� ������: " << getLoad()
		<< "\n��� ������� ��������: " << getSpeed()
		<< "\n������� ������: " << getDiameter();
}
