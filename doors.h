//��������� ������������� ������������, ����������� ����� ������������.
//���������� ����� �������� ��� ������� ��������, �����������, ������.

#pragma once
#include<iostream>
#include<string>
using namespace std;

class doors
{
protected:
	string Doors;
	string transport;
	string form;
	string color;
public:
	doors();
	void setManufacturer();
	void setTransport();
	void setForm();
	void setColor();
	string getManufacturer();
	string getTransport();
	string getForm();
	string getColor();
	void Output();
};

