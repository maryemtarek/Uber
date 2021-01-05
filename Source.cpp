#include<iostream>
#include"AdjList.h"
using namespace std;
int main() {
	customer test;
	cout << "What do you want to do?" << endl << "1.Login" << endl << "2.Register";
	cout << "Press 1 or 2" << endl;
	int choice;
	cin >> choice;
	if (choice == 1)
	{
		test.login();
	}
	else
	{
		test.addinformation();
	}
	
	cout << "WELCOME TO UBER " << endl;
	test.locat_dest();
	system("pause");
}