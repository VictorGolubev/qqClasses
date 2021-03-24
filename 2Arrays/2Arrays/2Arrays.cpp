#include <iostream>
#include"Array.h"

using namespace std;

int main()
{
	// кол-во элементов в обоих массивах
	cout << "Enter n: ";
	int n; cin >> n;

	Array arr1(n);
	Array arr2(n);

	// Ввод массивов
	cout << "Enter first arr \n";
	arr1.enterArr();
	cout << endl;
	cout << "Enter second arr \n";
	arr2.enterArr();
	cout << endl;

	arr1.compare(arr2);

	return 0;

}
