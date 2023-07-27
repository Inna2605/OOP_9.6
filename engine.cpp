//Используя множественное наследование, разработать класс “Автомобиль”.
//Автомобиль будет потомком для классов “Колеса”, “Двигатель”, “Двери”.

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
	cout << "Введите производителя: ";
	getline(cin, Engine);
}
void engine::setTransport()
{
	cout << "Вид транспорта: ";
	getline(cin, transport);
}
void engine::setPower()
{
	cout << "Введите мощность двигателя: ";
	cin >> power;
}
void engine::setConsumption()
{
	cout << "Введите расход топлива: ";
	cin >> consumption;
}
void engine::setFuel()
{
	cout << "Введите вид топлива: ";
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
	cout << "\nПроизводитель двигателя: " << getManufacturer()
		<< "\nДля транспорта: " << getTransport()
		<< "\nМощность двигателя: " << getPower()
		<< "\nРасход топлива: " << getConsumption()
		<< "\nВид топлива: " << getFuel();
}
