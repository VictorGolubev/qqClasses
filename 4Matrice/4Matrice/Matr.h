#pragma once
#include <iostream>
using namespace std;

class Matr
{
private:
	const int n = 9, m = 2;
	int M[2][9];

public:
	void enterArr()
	{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> M[i][j];

	}

	void find()
	{
		// кол-во
		int k = 0;

		// поиск строк и вывод номеров
		cout << "Line numbers: ";
		for (int i = 0; i < n; i++) {
			if (M[i][0] * M[i][0] < abs(M[i][1])) {
				cout << i + 1 << " ";
				k++;
			}
		}

		cout << endl << "Amount: " << k;

	}
};
