#pragma once
#include <iostream>
#include <ctime>
using namespace std;
#define n 5

class Matr
{
public:
	int A[n][n];
	bool needChange = false;

	bool getNeedChange()
	{
		return needChange;
	}

	void enterMatr()
	{
		int S12 = 0, S45 = 0;
		// Ввод A и подсчет сумм
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++) {
				cin >> A[i][j];

				if (i == 0 || i == 1)
					S12 += A[i][j];
				else if (i == 3 || i == 4) {
					S45 += A[i][j];
				}
			}
		needChange = !(S12 >= S45);
	}

	void change(Matr param)
	{
		cout << endl;
		// Изменение элементов (А+Х)
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				A[i][j] += param.A[i][j];
				cout << A[i][j] << " ";
			}
			cout << endl;
		}

	}
};
