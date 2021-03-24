#include <iostream>
#include"Matr.h"

int main()
{
	Matr A;
	cout << "Enter A:\n";
	A.enterMatr();

	// Если матрица не требует изменений, то выход
	if (A.getNeedChange())
	{
		cout << endl;
		Matr X;
		cout << "Enter X:\n";
		X.enterMatr();
		A.change(X);
	}

	return 0;

}
