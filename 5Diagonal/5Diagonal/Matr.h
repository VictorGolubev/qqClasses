#pragma once
#include <iostream>
#include <ctime>
using namespace std;
#define ROWS 5
#define COLS 5

class Matr
{
private:
	int array[ROWS][COLS];
	int average[ROWS] = { 0 };

public:

	void generateArray()
	{
		srand(time(nullptr));
		for (int rows = 0; rows < 5; ++rows)
		{
			for (int cols = 0; cols < 5; ++cols)
			{
				array[rows][cols] = rand() % 100;
				cout << array[rows][cols] << " ";
			}
			cout << endl;
		}
	}

	void execute()
	{
		int diag_sum = 0;
		for (int rows = 0; rows < 5; ++rows)
		{
			for (int cols = 0; cols < 5; ++cols)
			{
				if (rows == 0 && array[rows][cols] > average[0])
				{
					average[0] = array[rows][cols];
				}
				if (rows == 1 && array[rows][cols] > average[1])
				{
					average[1] = array[rows][cols];
				}
				if (rows == 2 && array[rows][cols] > average[2])
				{
					average[2] = array[rows][cols];
				}
				if (rows == 3 && array[rows][cols] > average[3])
				{
					average[3] = array[rows][cols];
				}
				if (rows == 4 && array[rows][cols] > average[4])
				{
					average[4] = array[rows][cols];
				}

				// суммируем диагональ
				if ((rows == 0 && cols == 0) ||
					(rows == 1 && cols == 1) ||
					(rows == 2 && cols == 2) ||
					(rows == 3 && cols == 3) ||
					(rows == 4 && cols == 4))
				{
					diag_sum += array[rows][cols];
				}
			}
		}
		// найти среднее арифметическое самых больших элементов каждой строки
		double average_global = (average[0] + average[1] + average[2] + average[3] +
			average[4]) / (double)ROWS;
		cout << "Average of max values of each row = " <<
			average_global << endl;
		cout << "Sum of main diagonal = " << diag_sum << endl;
	}
};
