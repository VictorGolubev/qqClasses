#include <iostream>
#include"Student.h"
using namespace std;


int main()
{
	setlocale(0, "ru");
	int n; cin >> n; // кол-во студентов
	Student* students = new Student[n];
	double srStip = 0;


	for (int i = 0; i < n; i++) {
		students[i].createStudent();	// фамилия
		srStip += students[i].getStip();
	}

	srStip /= n;	// вычислили среднюю стипендию
	double sr20 = 0.8 * srStip; // средняя - 20%
	cout << "Средняя стипендия: " << srStip << endl;
	cout << "Средняя - 20%: " << sr20 << endl << endl;

	for (int i = 0; i < n; i++) {
		if (students[i].getStip() < sr20) {
			cout << students[i].getLName().c_str() << " " << students[i].getFName().c_str() << " " << students[i].getOt().c_str() << endl;
		}
	}




}
