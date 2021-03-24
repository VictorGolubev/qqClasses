#pragma once
#include <iostream>
using namespace std;

class Matr
{
private:
	int** M;
	int size;
	int mX = 0, mY = 0;
	int maxValue;

public:
	Matr(int n)
	{
		setSize(n);
	}

	~Matr()
	{
		for (int i = 0; i < size; i++)
			delete[] M[i];
		delete[] M;
	}

	int getSize()
	{
		return size;
	}

	void setSize(int n)
	{
		size=n;
	}

	int getmX()
	{
		return mX;
	}

	int getmY()
	{
		return mY;
	}

	void enterMatr()
	{
		M = new int*[size];
		for (int i = 0; i < size; i++) {
			M[i] = new int[size];
			for (int j = 0; j < size; j++) {
				cin >> M[i][j];
			}
		}

	}

	int findMax()
	{
		maxValue = M[0][0];
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				if (M[i][j] > maxValue) {
					maxValue = M[i][j];		// запоминаем значение
					mX = i;					// и индексы
					mY = j;
				}
			}
		}

		cout << "Max value: " << maxValue << " (" << mX + 1 << ":" << mY + 1 << ")" << endl;
		return maxValue;

	}

	void transpose()
	{
		for (int i = 0; i < size; i++) {
			for (int j = i + 1; j < size; j++) {
				int t = M[i][j];
				M[i][j] = M[j][i];
				M[j][i] = t;
			}
		}

		// вывод
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				cout << M[i][j] << " ";
			}
			cout << endl;
		}
	}

	void printSum()
	{
		int SStr = 0;
		int SCol = 0;
		for (int i = 0; i < size; i++) {
			SStr += M[mX][i];
			SCol += M[i][mY];
		}

		cout << "String sum = " << SStr << endl << "Column Sum = " << SCol;

	}
};
