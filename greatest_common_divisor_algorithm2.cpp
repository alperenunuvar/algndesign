#include <iostream>

using namespace std;

#define SIZE 1024

// Prototypes
bool isPrime(int num);

bool isPrime(int num)
{
	// Variables
	int i;

	if(num<2)
	{
		return false;
	}
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	// Variables
	int number1;
	int number2;	
	int arraySize1;
	int arraySize2;
	int firstNumber1;	
	int arrayCounter;
	int totalProduct;
	int i;
	int j;

	// Arrays	
	int array_primeFactorizations1[SIZE];
	int array_primeFactorizations2[SIZE];
	int array_commonPrimeFactorizations[SIZE];

	
	i=0;
	number2=2;	
	cout << "1. Input an integer of GCD (x,y) = ";
	cin >> number1;
	if(number1<0)
	{
		number1*=-1;
	}
	else if(number1==0)
	{
		cout << "Your input cannot be zero." << endl;
	}						
	firstNumber1=number1;
	//factorizating	
	while(1)
	{
		if((isPrime(number2)==true)&&(number1%number2==0))
		{
			number1=number1/number2;
			array_primeFactorizations1[i]=number2;
			i++;
		}
		else
		{
			number2++;
		}
		if(number1==1)
		{
			break;
		}	
	}
	cout << "Factorizations of " << firstNumber1 << " are = ";
	arraySize1=i;
	for(i=0;i<arraySize1;i++)
	{
		cout << array_primeFactorizations1[i] << " ";
	}	
	cout << endl;
	//////////////////////////////////////////////////////////////////////////////////////
	i=0;
	number2=2;	
	cout << "2. Input an integer of GCD (x,y) = ";
	cin >> number1;
	if(number1<0)
	{
		number1*=-1;
	}
	else if(number1==0)
	{
		cout << "Your input cannot be zero." << endl;
	}			
	firstNumber1=number1;
	//factorizating	
	while(1)
	{
		if((isPrime(number2)==true)&&(number1%number2==0))
		{
			number1=number1/number2;
			array_primeFactorizations2[i]=number2;
			i++;
		}
		else
		{
			number2++;
		}
		if(number1==1)
		{
			break;
		}	
	}
	cout << "Factorizations of " << firstNumber1 << " are = ";
	arraySize2=i;
	for(i=0;i<arraySize2;i++)
	{
		cout << array_primeFactorizations2[i] << " ";
	}	
	cout << endl;
	///////////////////////////////////////////////////////////////////////////////////
	arrayCounter=0;
	for(i=0;i<arraySize1;i++)
	{
		for(j=0;j<arraySize2;j++)
		{
			if(array_primeFactorizations1[i]==array_primeFactorizations2[j])
			{
				array_commonPrimeFactorizations[arrayCounter] = array_primeFactorizations1[i];
				arrayCounter++;
				array_primeFactorizations1[i] = -1;
				array_primeFactorizations2[j] = -1;
			}
		}
	}	
	totalProduct=1;
	for(i=0;i<arrayCounter;i++)
	{
		if(array_commonPrimeFactorizations[i]>0)
		{
			totalProduct*=array_commonPrimeFactorizations[i];
		}		
	}
	cout << "Total Product of Common Primes = " << totalProduct << endl;
	return 0;
}