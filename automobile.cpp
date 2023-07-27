//��������� ������������� ������������, ����������� ����� ������������.
//���������� ����� �������� ��� ������� ��������, �����������, ������.

#include "automobile.h"

automobile::automobile()
{
	amount_wheel = 0;
	amount_engine = 0;
	amount_doors = 0;
	Automobile = "";
}

void automobile::setManufacturer()
{
	doors::setManufacturer();
	engine::Engine = wheel::Wheel = doors::Doors;
}
void automobile::setColor()
{
	cin.ignore();
	doors::setColor();
}
void automobile::setTransport()
{
	doors::setTransport();
	engine::transport = wheel::transport = doors::transport;
}
void automobile::setSpeed()
{
	wheel::setSpeed();
}
void automobile::setAmount_wheel()
{
	cout << "������� ���������� ����� � ����������: ";
	cin >> amount_wheel;
	cout << "������� �������������� �����:\n";
	wheel::setDiameter();
	wheel::setLoad();
}
void automobile::setAmount_engine()
{
	cin.ignore();
	cout << "������� ���������� ���������� � ����������: ";
	cin >> amount_engine;
	cout << "������� �������������� ����������:\n";
	cin.ignore();
	engine::setFuel();
	engine::setPower();
	engine::setConsumption();
}
void automobile::setAmount_doors()
{
	cout << "������� ���������� ������ � ����������: ";
	cin >> amount_doors;
	cout << "������� �������������� ������:\n";
	cin.ignore();
	doors::setForm();
}

int automobile::getAmount_wheel()
{
	return amount_wheel;
}

int automobile::getAmount_engine()
{	
	return amount_engine;
}

int automobile::getAmount_doors()
{	
	return amount_doors;
}

void automobile::Output()
{
	cout << "\n���������� �����: " << engine::getManufacturer()
		<< "\n��� ����������: " << engine::getTransport()
		<< "\n������� �������� ����������: " << wheel::getSpeed()
		<< "\n���� ����������: " << doors::getColor()
		<< "\n���������� ����� � ����������: " << getAmount_wheel()
		<< "\n������ ���������: " << wheel::getDiameter()
		<< "\n��������� �� ��������: " << wheel::getLoad()
		<< "\n���������� ���������� � ����������: " << getAmount_engine()
		<< "\n��� �������: " << engine::getFuel()
		<< "\n���������: " << engine::getPower()
		<< "\n������ �������: " << engine::getConsumption()
		<< "\n���������� ������ � ����������: " << getAmount_doors()
		<< "\n����� ������: " <<doors::getForm();
}
