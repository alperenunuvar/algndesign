#include <iostream>
#include <stdlib.h>

using namespace std;

// Prototypes
bool checkUniqueness(int arraySize, int array_numbers[]);

bool checkUniqueness(int arraySize, int array_numbers[])
{
	// Variables
	int i;
	int j;

	for(i=0;i<arraySize-2;i++)
	{
		for(j=i+1;j<arraySize-1;j++)
		{
			if(array_numbers[i]==array_numbers[j])
			{				
				return false;
			}			
		}
	}
	return true;
}

int main()
{
	// ---------- Algorithm 1 ----------
	// Variables
	int i;
	int j;
	int arraySize;
	int range;	

	cout << "Input array's size = ";
	cin >> arraySize;
	// Arrays
	int array_numbers[arraySize];
	cout << "Input elements' range (0..x) = ";
	cin >> range;
	// assign array elements randomly
	for(i=0;i<arraySize;i++)
	{
		array_numbers[i] = rand()%(range+1);
	}
	// print array
	cout << "Array elements = ";
	for(i=0;i<arraySize;i++)
	{
		cout <<  array_numbers[i] << " ";
	}
	cout << endl;	
	// checking uniqueness	
	if(checkUniqueness(arraySize, array_numbers))
	{
		cout << "All elements in the given array are distinct!" << endl;
	}
	else
	{
		cout << "All elements in the given array are NOT distinct!" << endl;
	}
	// --------------------
	return 0;
}
