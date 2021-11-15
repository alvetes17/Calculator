//Filename: Lab_12
//Author: Luis Alvear
//ID: 0332145
//Date: 11/26/19

#include<iostream>
using namespace std;

//Prototypes
void myMenu();
void myAddition(void);
void mySubstraction(double, double);
double myMultiplication(double, double);
bool testDivisionbyZero(double, double);
void myDivision(double, double, double&);

int main()
{
	double number1; //Holds number 1
	double number2; //Holds number 2
	double total; //Holds total
	bool ifzero; //Holds when the number is 0

	while (1)
	{
		int option;
		myMenu(); //Displays menu
		cin >> option;  //User imputs option
		switch (option)
		{
		case 1: //If user enters 1
		{
			myAddition();//Addition is selected
			cout << "\n" << endl; 
			break;
		}

		case 2: //User selects two
		{

			cout << "Enter the first number"; cin >> number1; //Asks user for first number
			cout << "Enter the second number"; cin >> number2; //Asks user for the second number
			mySubstraction(number1, number2); //Substraction
			cout << "\n" << endl;
			break;
		}

		case 3: //User enters 3
		{
			cout << "Enter first number: "; cin >> number1; //Asks the user to enter number 1
			cout << "Enter second number: "; cin >> number2; //Asks the user to enter number two
			total = myMultiplication(number1, number2); //Total
			cout << number1 << "*" << number2 << "=" << total << endl; //Displays total
			cout << "\n" << endl;
			break;
		}

		case 4: //User selects four
		{
			cout << "Enter the first number: "; cin >> number1; //User enters first number
			cout << "Enter the second number: "; cin >> number2; //User enters second number
			ifzero = testDivisionbyZero(number1, number2); //If it is zero test division is applied
			myDivision(number1, number2, total);
			
			if (ifzero == false && number1 > number2) //If it's false then number2 is divided by number1
			{
				cout << number1<< "/"<<number2<<"=" << number1 / number2 << endl; //Result
			}
			else if (ifzero == false && number2 > number1) //If it's false  then number 1 is divided by number 2
			{
				cout<<number2<<"/"<<number1<<"=" << number2 / number1 << endl; //Result is displayed
			}
			else
			{
				cout << "Division by zero can't be done as the number is divided by zero" << endl; //Message displayed if it's divided by 0
			}
			cout << "\n" << endl;
			break;
		}

		case 5: //When user enters 5
		{
			cout << "Thank you for using my calculator" << endl; //Displays this message
			return 0; //Exits the calculator
		}

		default: //When the user enters something else than 1 to 5
		{
			cout << "Invalid option, please try again..." << endl; //Displays message saying that it's incorrect
			cout << "\n" << endl;
		}
		myMenu(); //Displays the menu again until the user enters 5
		cin >> option; //Asks the user to enter something
		}
	}
}

void myMenu() //Function for the menu
{
	//Displays all the options from the menu
	cout << "Welcome to my personal calculator" << endl;
	cout << "Please select one of the options" << endl;
	cout << "(1) To add two numbers" << endl;
	cout << "(2)To substract the second numbers from the first" << endl;
	cout << "(3) To multiply two numbers" << endl;
	cout << "(4) To divide the largest numbers by the smallest number" << endl;
	cout << "(5) Exit" << endl;

}

void myAddition() //Function for the addition
{
	double a; //Variable that holds a
	double b; //Variable that holds b
	double result; //Variable that holds result
	cout << "enter the first number: "; cin >> a; //Displays and asks the user for the first number
	cout << "Enter the second number: "; cin >> b; //Displays and asks the usere for the second number
	result = a + b; //Calculates result
	cout <<a<<"+"<<b<<"="<< result<< endl; //Displays result
}

void mySubstraction(double c, double d) //Function for the substraction
{

	double result; //Variable that holds result
	if (c < d) //If c is less than d
	{
		result = d - c; //Calculates result
		cout << d << "-" << c << "=" << result; //Displays result
	}
	else
	{
		result = c - d; //Displays result
		cout << c << "-" << d << "=" << result; //Displays result
	}
	
}

double myMultiplication(double e, double f) //Function for the multiplication
{
	double result; //This variable holds result
	result = e * f; //Calculates result
	return result; //Returns result to the main
}

bool testDivisionbyZero(double g, double h) //Variable that checks if the number is divided by 0
{
	double smallestnum; //Variable that holds the smallest number
	if (g > h) //If g is greater than h
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

void myDivision(double g, double h, double& result) //Function for the division
{
	if (g > h) //If g is greater than h
	{ 
		result = g / h; //Result is equal to g divided by h
	}
	else //Something else
	{
		result = h / g; //Result is equal to h divided b y g

	}
}