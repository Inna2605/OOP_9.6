//��������� ������������� ������������, ����������� ����� ������������.
//���������� ����� �������� ��� ������� ��������, �����������, ������.

#include "engine.h"

engine::engine()
{
	Engine = "";
	power = 0;
	consumption = 0;
	fuel = "";
	transport = "";
}

void engine::setManufacturer()
{
	cout << "������� �������������: ";
	getline(cin, Engine);
}
void engine::setTransport()
{
	cout << "��� ����������: ";
	getline(cin, transport);
}
void engine::setPower()
{
	cout << "������� �������� ���������: ";
	cin >> power;
}
void engine::setConsumption()
{
	cout << "������� ������ �������: ";
	cin >> consumption;
}
void engine::setFuel()
{
	cout << "������� ��� �������: ";
	getline(cin, fuel);
}

string engine::getManufacturer()
{
	return Engine;
}

float engine::getPower()
{
	return power;
}

float engine::getConsumption()
{
	return consumption;
}

string engine::getFuel()
{
	return fuel;
}

string engine::getTransport()
{
	return transport;
}

void engine::Output()
{
	cout << "\n������������� ���������: " << getManufacturer()
		<< "\n��� ����������: " << getTransport()
		<< "\n�������� ���������: " << getPower()
		<< "\n������ �������: " << getConsumption()
		<< "\n��� �������: " << getFuel();
}
