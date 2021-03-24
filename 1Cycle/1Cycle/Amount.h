#pragma once
#include <iostream>
using namespace std;


class Amount
{
private:
	int n;
	int* X;

public:
	Amount(int n)
	{
		setSize(n);
	}

	~Amount()
	{
		delete[] X;
	}

	void setSize(int n)
	{
		this->n = n;
	}
	
	int getSize()
	{
		return n;
	}

	int* getArr()
	{
		return X;
	}
	
	void enterArr()
	{
		createArr(n);
		for (int i = 0; i < n; i++)
		{
			cout << (i+1) + ": ";
			cin >> X[i];

		}
	}

	int calculateDifferenceOfAmounts()
	{
		int m = n / 2;
		// Суммы
		int C1 = 0, C2 = 0;
		// Подсчёт C1 и C2
		for (int i = 1; i <= m; i++) {
			C1 += X[2 * i - 2];
			C2 += X[2 * i - 1];
		}
		return C1 - C2;
	}


private:
	void createArr(int n)
	{
		this->X = new int[n];
	}
};