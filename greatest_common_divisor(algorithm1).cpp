#include <iostream>

using namespace std;

int main()
{
	// ---------- Algorithm 1 (Euclid's Algorithm)----------
	// Variables
	int number1;
	int number2;
	int remainder;
	int gcd;

	cout << "Input first integer = ";
	cin >> number1;
	cout << "Input second integer = ";
	cin >> number2;	
	while(1)
	{
		remainder=number1%number2;
		number1=number2;
		number2=remainder;
		if(number2==0)
		{
			break;
		}				
	}	
	gcd=number1;
	if(gcd<0)
	{
		gcd*=-1;
	}
	cout << "Greatest Common Divisor (GCD) = " << gcd << endl;
	return 0;
}