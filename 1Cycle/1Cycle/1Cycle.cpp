#include <iostream>
#include "Amount.h"

using namespace std;

int main()
{
	int n;
	cin >> n;

	Amount amount(n);
	// Создание и ввод массива
	amount.enterArr();
		
	// Вывод разницы сумм
	cout << "Result: " << amount.calculateDifferenceOfAmounts();
	return 0;

}
