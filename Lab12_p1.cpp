//Filename: Lab_12
//Author: Luis Alvear
//ID: 0332145
//Date: 11/21/19
//Read a, b in main
//Pass a,b to sum
//Return a+b from sum
//Point out a+b in main

#include <iostream>
using namespace std;

void myMenu();
void myAddition(void);
void mySubstraction(double, double);
double myMultiplication(double, double);
bool testDivisionbyZero(double, double);
void myDivision(double, double, double&);

int main()
{
	double number1;
	double number2;
	double total;
	bool ifzero;

	int option;
	myMenu();
	cin >> option;

	switch (option)
	{
		case 1: 
		{
		myAddition();
		break;
		}

		case 2:
		{

		cout << "Enter the first number"; cin >> number1;
		cout << "Enter the second number"; cin >> number2;
		mySubstraction(number1, number2);
		if (number1 < number2)
		{
			cout << "Result is" << number2 - number1;
		}
		else (number2 < number1);
		{
			cout << "Result is" << number1 - number2;
		}

		break;
		}

		case 3:
		{
		cout << "Enter first number: "; cin >> number1;
		cout << "Enter second number: "; cin >> number2;
		total = myMultiplication(number1, number2);
		break;
		}

		case 4:
		{
		cout << "Enter the first number: "; cin >> number1;
		cout << "Enter the second number: "; cin >> number2;
		ifzero = testDivisionbyZero(number1, number2);
		myDivision(number1, number2, total);
			if (ifzero == false && number1 > number2)
			{	
			cout << "result is " << number1 / number2 << endl;
			}
			else if (ifzero == false && number2 > number1)
			{
			cout << "result is " << number2 / number1 << endl;
			}
			else
			{
			cout << "Division by zero can't be done as the number is divided by zero" << endl;
			}
			break;
		}
	}
}

void myMenu()
{

	cout << "Welcome to my personal calculator" << endl;
	cout << "Please select one of the options" << endl;
	cout << "(1) To add two numbers" << endl;
	cout << "(2)To substract the second numbers from the first" << endl;
	cout << "(3) To multiply two numbers" << endl;
	cout << "(4) To divide the largest numbers by the smallest number" << endl;
	cout << "(5) Exit" << endl;

}

void myAddition()
{
	double a;
	double b;
	double result;
	cout << "enter the first number: "; cin >> a;
	cout << "Enter the second number: "; cin >> b;
	result = a + b;
	cout << result;
}

void mySubstraction(double c, double d)
{

	double result;
	if (c < d)
	{
		result = d - c;
	}
	else(d < c);
	{
		result = c - d;
	}

}

double myMultiplication(double e, double f)
{
	double result;
	result = e * f;
	cout << "The result is: " << result;
	return result;
}

bool testDivisionbyZero(double g, double h)
{
	double smallestnum;
	if (g > h)
	{
		smallestnum = h;
	}
	else
	{
		smallestnum = g;
	}
	if (smallestnum == 0) {
		return true;
	}
	else {
		return false;
	}
}

void myDivision(double g, double h, double& result)
{
	if (g > h) {
		result = g / h;
	}
	else (g < h);
	{
		result = h / g;

	}
}