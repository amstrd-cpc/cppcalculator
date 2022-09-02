// C++ program to implement
// the above approach
#include <iostream>
#include <math.h>
using namespace std;

// Class calculator
class Calculator
{
float a, b, c, d, e, f, disc, x1, x2, realPart, imaginaryPart;
public:

	// Function to take input
	// from user
	void result()
	{
		cout << "Enter First Number: ";
		cin >> a;
		cout << "Enter Second Number: ";
		cin >> b;
	}
	
	void sqresult()
	{
		cout << "Enter X1: ";
		cin >> c;
		cout << "Enter X2: ";
		cin >> d;
		cout << "Enter X3: ";
		cin >> e;
	}

	// Function to add two numbers
	float add()
	{
		return a + b;
	}

	// Function to subtract two numbers
	float sub()
	{
		return a - b;
	}

	// Function to multiply two numbers
	float mul()
	{
		return a * b;
	}

	// Function to divide two numbers
	float div()
	{
		if (b == 0)
		{
			cout << "Division By Zero" <<
					endl;
			return INFINITY;
		}
		else
		{
			return a / b;
		}
	}
	float sqr()
	{
	disc = d*d - 4*c*e;
	if (disc > 0) {
        x1 = (-d + sqrt(disc)) / (2*c);
        x2 = (-d - sqrt(disc)) / (2*c);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    
    else if (disc == 0) {
        cout << "Roots are real and same." << endl;
        x1 = -d/(2*c);
        cout << "x1 = x2 =" << x1 << endl;
    }

    else {
        realPart = -d/(2*c);
        imaginaryPart =sqrt(-disc)/(2*c);
        cout << "Roots are complex and different."  << endl;
        cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
        cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
    }

    return 0;
}
};

// Driver code
int main()
{
	int ch;
	Calculator c;
	cout << "Enter 1 to Add 2 Numbers" <<
			"\nEnter 2 to Subtract 2 Numbers" <<
			"\nEnter 3 to Multiply 2 Numbers" <<
			"\nEnter 4 to Divide 2 Numbers" <<
			"\nEnter 5 to Solve Quadratic Equasion" <<
			"\nEnter 0 To Exit";
		
	do
	{
		cout << "\nEnter Choice: ";
		cin >> ch;
		switch (ch)
		{
		case 1:
			
			// result function invoked
			c.result();	
			
			// add function to calculate sum
			cout << "Result: " <<
					c.add() << endl;
			break;
		case 2:
			
			// sub function to calculate
			// difference
			c.result();
			cout << "Result: " <<
					c.sub() << endl;
			break;
		case 3:
			c.result();
			
			// mul function to calculate product
			cout << "Result: " <<
					c.mul() << endl;
			break;
		case 4:
			c.result();
			
			// div function to calculate division
			cout << "Result: " <<
					c.div() << endl;
			break;
		case 5:
			c.sqresult();

			cout << "Result: " <<
					c.sqr()	<< endl;	
			break;
		}	
		
	} while (ch >= 1 && ch <= 5);
	
	return 0;
}
