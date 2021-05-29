// ControlStructers3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;
int main()
{
	//SWITCH CASE
	int choice;
	int stock_quantity = 50;
	int value;
	char choice2;
	cout << "Please choose what you want to do..." << endl;
	cout << "1-Add Product (+)" << endl;
	cout << "2-Remove Product (-)" << endl;
	cout << "3-nothing" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
		cout << "Enter the value you want to add" << endl;
		cin >> value;
		cout << stock_quantity + value << endl;
		break;
	case 2:
		cout << "Enter the value you want to remove" << endl;
		cin >> value;
		if (value > 50)
		{
			cout << "Error..." << endl;

		}
		else
		{
			cout << stock_quantity - value << endl;
		}

		break;
	case 3:
		return 0;
		break;
	default:
		cout << "Please enter choice 1 to 3" << endl;
		break;
	}

	cout << "Please choose what you want to do..." << endl;
	cout << "1-Add Product (+)" << endl;
	cout << "2-Remove Product (-)" << endl;
	cout << "3-nothing" << endl;
	cin >> choice2;
	
	switch (choice2)
	{
	case '+':
		cout << "added" << endl;
		break;
	case '-':
			cout << "removed" << endl;
			break;
	default:
		break;
	}
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
