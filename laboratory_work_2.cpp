// laboratory_work_2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
class MyMoney
{
private:
	string name;
	double money;
	double rate;
	int time;
	double getMoney()

	{
		double s = money;
		for (int k = 1; k <= time; ++k)
		{
			s *= (1 + rate / 100);

		}
		return s;
	}
public:
	MyMoney()
	{
		name = "Romanov Roman Dmitrievich";
		money = 3000;
		rate = 3;
		time = 10;
		cout << "Created a new object:\n";
		showAll();
	}
	MyMoney(string n,double m,double r,int t) 
	{   
		setAll(n, m, r, t);
		cout << "Created a new object:\n";
		showAll();
	}
	~MyMoney()
	{
		cout << "Object for \"" << name << "\"deleted\n";
		for (int k = 1; k < 35; ++k) {
			cout << "*";
		}
		cout << endl;
	}
		void showAll()
		{
		cout << "Full Name:" <<name<< endl;
		cout << "Deposit:" <<money<< endl;
		cout << "Rate(%):" <<rate<< endl;
		cout << "Time(years):" <<time<< endl;
		cout << "Final Sum:" <<getMoney()<<endl;
		for (int k = 1; k < 35; ++k) {
			cout << "-";
	}
		cout << endl;
	}
	void setAll(string n, double m, double r, int t)
	{
		name = n;
		money = m;
		rate = r;
		time = t;
	}
};
void postman() {
	MyMoney objD("Kaktusistov Lavrushey Cheburashek", 200, 3, 2);
}

int main()
{
	MyMoney objA;
	MyMoney objB ("Jesters Lawrence Rostislavovich", 1000, 5, 6);
	postman();
	MyMoney * objC=new MyMoney("Kuklow Dmitry Anatolyevich", 8000, 13, 9);
	cout << "All objects created\n";
	delete objC;
	cout << "Program execution completed\n";
	cout << endl;
	system("pause");

    return 0;
}

