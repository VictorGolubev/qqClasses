#pragma once
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
	string FName;
	string LName;
	string Ot;
	double Stip;
public:
	string getFName()
	{
		return FName;
	}

	void setFName(string n)
	{
		FName = n;
	}
	string getLName()
	{
		return LName;
	}

	void setLName(string n)
	{
		LName = n;
	}

	void setOt(string n)
	{
		Ot = n;
	}
	string getOt()
	{
		return Ot;
	}
	double getStip()
	{
		return Stip;
	}

	void setStip(double n)
	{
		Stip = n;
	}

	void createStudent()
	{
		cin >> this->LName;	// �������
		cin >> this->FName;	// ���
		cin >> this->Ot;// ��������
		cin >> this->Stip;	// ���������

	}
};
