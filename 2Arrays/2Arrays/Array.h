#pragma once
#include <iostream>
using namespace std;

class Array
{
private:
	int n;
	int* X;

public:
	Array(int n)
	{
		setSize(n);
	}

	~Array()
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
			cout << (i + 1) << ": ";
			cin >> X[i];

		}
	}

	void compare(Array y)
	{
		int S = 0, K = 0;
		int* Y = y.getArr();

		for (int i = 0; i < n; i++) {
			if (X[i] > Y[i] && X[i] > 0) {
				S += X[i];
				K++;
			}
		}
		cout << "Sum: " << S << '\n' << "Amount: " << K;
	}


private:
	void createArr(int n)
	{
		this->X = new int[n];
	}
};
