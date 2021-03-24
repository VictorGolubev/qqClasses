#include <iostream>
#include"Matr.h"

using namespace std;

int main()
{
	int n;
	cout << "Enter n: ";
	cin >> n;
	
	Matr matrice(n);
	
	matrice.enterMatr();

	matrice.findMax();

	if (matrice.getmY() > matrice.getmX())
		matrice.transpose();
	else
		matrice.printSum();
	
	return 0;
}
