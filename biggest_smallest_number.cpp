#include <iostream>

using namespace std;

int main()
{
	// ---------- Algorithm 1 ----------
	// Variables
	int biggest;
	int smallest;
	int i;
	int size;
	int numberSize;
	int choice;

	cout << "Input size of array = ";
	cin >> size;
	// Arrays
	int numbersArray[size];
	cout << "Do you want to create numbers randomly? (Yes:1, No:0) = ";
	cin >> choice;
	if((choice==1) || (choice==0))
	{
		if(choice==1)
		{
			cout << "Input random rage (0..x) = ";
			cin >> numberSize;
			for(i=0;i<size;i++)
			{		
				numbersArray[i] = rand()%numberSize+1;
			}
		}		
		else
		{
			for(i=0;i<size;i++)
			{
				cout << i+1 << ". Input number = ";
				cin >> numbersArray[i];
			}
		}
		cout << "Array Elements = ";
		for(i=0;i<size;i++)
		{
			cout << numbersArray[i] << " ";
		}
		cout << endl;
		biggest=numbersArray[0];
		smallest=numbersArray[0];
		for(i=0;i<size;i++)
		{
			if(smallest>=numbersArray[i])
			{
				smallest = numbersArray[i];
			}
			if(biggest<=numbersArray[i])
			{
				biggest = numbersArray[i];
			}
		}
		cout << "Biggest number of array = " << biggest << endl;
		cout << "Smallest number of array = " << smallest << endl;		
	}	
	else
	{
		cout << "You can input only 1 and 0." << endl;
	}
	// --------------------
	return 0;
}