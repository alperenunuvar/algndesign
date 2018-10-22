#include <iostream>

using namespace std;

#define SIZE 32

// Prototypes
int calculateBinaryDigits(int number);

int calculateBinaryDigits(int number)
{
	if(number==1)
	{
		return 0;
	}
	else
	{
		return calculateBinaryDigits(number/2)+1;
	}	
}

int main()
{
	// Variables
	int number;
	int tempNumber;
	int coutNumber;
	int digitCounter;
	int i;

	// Arrays
	int array_binaryNumber[SIZE];

	cout << "Input an integer = ";
	cin >> number;
	// recursion
	if(number>0)
	{
		cout << "\nRecursion result = " << (calculateBinaryDigits(number))+1 << endl;
	}	
	// iterative
	if(number>0)
	{
		tempNumber = number;
		digitCounter=1;
		i=0;
		while(number>1)
		{
			array_binaryNumber[i] = (number%2);
			i++;
			if(number/2==1)
			{
				array_binaryNumber[i] = 1; // last binary digit
				i++;
			}
			number/=2;		
			digitCounter++;
		}	
		cout << endl;
		cout << "Iterative result\nNumber\t\t= " << tempNumber << endl;	
		cout << "Binary Number\t= ";
		for(i=digitCounter-1;i>=0;i--)
		{
			cout << array_binaryNumber[i];
		}
		cout << endl;
		cout << "Binary Digits\t= " << digitCounter << endl;
	}
	else
	{
		cout << "Your input must be positive." << endl;
	}	
	return 0;
}