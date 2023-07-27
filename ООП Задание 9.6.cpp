//Используя множественное наследование, разработать класс “Автомобиль”.
//Автомобиль будет потомком для классов “Колеса”, “Двигатель”, “Двери”.

#include <iostream>
#include "automobile.h"
#include "doors.h"
#include "engine.h"
#include "wheel.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Ru");
    
    wheel Wheels;
    /*Wheels.setManufacturer();
    Wheels.setTransport();
    Wheels.setSpeed();
    Wheels.setLoad();
    Wheels.setDiameter();
    Wheels.Output();
    cout << endl;*/

    engine Engines;
    /*Engines.setManufacturer();
    Engines.setTransport();
    Engines.setConsumption();
    Engines.setPower();
    Engines.setFuel();
    Engines.Output();
    cout << endl;*/

    doors Doorse;
    /*Doorse.setManufacturer();
    Doorse.setTransport();
    Doorse.setColor();
    Doorse.setForm();
    Doorse.Output();
    cout << endl;*/

    automobile Automobiles;
    Automobiles.setManufacturer();
    Automobiles.setTransport();
    Automobiles.setSpeed();
    Automobiles.setColor();
    Automobiles.setAmount_wheel();
    Automobiles.setAmount_engine();
    Automobiles.setAmount_doors();
    cout << endl;
    Automobiles.Output();
    cout << endl;
}