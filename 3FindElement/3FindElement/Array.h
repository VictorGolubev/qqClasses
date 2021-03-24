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

	void findMin(Array y)
	{
		int* A = this->getArr();
		int* C = y.getArr();
		int minValue = A[0] * A[0] - C[0] * C[0];
		int index = 0;
		for (int i = 1; i < n; i++) {
			int val = A[i] * A[i] - C[i] * C[i];
			if (val < minValue) {
				minValue = val;
				index = i;
			}
		}

		cout << "Index: " << index+1;
	}


private:
	void createArr(int n)
	{
		this->X = new int[n];
	}
};
