//»спользу€ множественное наследование, разработать класс УјвтомобильФ.
//јвтомобиль будет потомком дл€ классов У олесаФ, УƒвигательФ, УƒвериФ.

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
	cout << "¬ведите количество колес в автомобиле: ";
	cin >> amount_wheel;
	cout << "¬ведите характеристики колес:\n";
	wheel::setDiameter();
	wheel::setLoad();
}
void automobile::setAmount_engine()
{
	cin.ignore();
	cout << "¬ведите количество двигателей в автомобиле: ";
	cin >> amount_engine;
	cout << "¬ведите характеристики двигателей:\n";
	cin.ignore();
	engine::setFuel();
	engine::setPower();
	engine::setConsumption();
}
void automobile::setAmount_doors()
{
	cout << "¬ведите количество дверей в автомобиле: ";
	cin >> amount_doors;
	cout << "¬ведите характеристики дверей:\n";
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
	cout << "\nјвтомобиль марки: " << engine::getManufacturer()
		<< "\n¬ид автомобил€: " << engine::getTransport()
		<< "\n—редн€€ скорость автомобил€: " << wheel::getSpeed()
		<< "\n÷вет автомобил€: " << doors::getColor()
		<< "\n оличество колес в автомобиле: " << getAmount_wheel()
		<< "\nколеса диаметром: " << wheel::getDiameter()
		<< "\nрасчитаны на нагрузку: " << wheel::getLoad()
		<< "\n оличество двигателей в автомобиле: " << getAmount_engine()
		<< "\nвид топлива: " << engine::getFuel()
		<< "\nмощностью: " << engine::getPower()
		<< "\nрасход топлива: " << engine::getConsumption()
		<< "\n оличество дверей в автомобиле: " << getAmount_doors()
		<< "\nформа дверей: " <<doors::getForm();
}
