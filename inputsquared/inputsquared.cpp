// inputsquared.cpp : 
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int value;
	char answer;

	do {
		cout << "Please enter a value " << endl;
		cin >> value;
		cout << "The value you entered is " << value << " the square is " << pow(value, 2) << "!" << endl;
		cout << "do you want to enter another??? enter Y if yes " << endl;
		cin >> answer;
	} while ((answer == 'Y') || (answer == 'y'));

    return 0;
}

