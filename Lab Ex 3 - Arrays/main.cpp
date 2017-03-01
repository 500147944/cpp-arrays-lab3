// created by: Alex Star, Ross Weiland
// Lab Exercise 3 - Arrays
// Instructions:
/*
	[ ] Write a program that performs the following:
		[ ] Prompt the user to input five numbers.
		[ ] Store the input into either an array or a vector.
		[x] Once the user is finished entering numbers:
			[x] Display the five numbers in reverse order.
			[x] Display the highest number entered.
			[x] Display the lowest number entered.
		[ ] Extra Credit: Allow the user to enter as many numbers as they want(at least 5).
	[ ] Compress(zip) your program and submit it to Blackboard.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	const int SIZE = 5;
	int arr[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		cout << "Enter a number: " ;
		cin >> arr[i];

	}
	for (int i = 4; i >= 0; i--)
	{
		cout << arr[i] << endl;
	}
	
	int high = arr[1];
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] > high)
		{
			high = arr[i];
		}
	}
	cout << "Highest number entered: " << high << endl;

	int low = arr[1];
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] < low)
		{
			low = arr[i];
		}
	}
	cout << "Lowest number entered: " << low << endl;



	_getch();
	return 0;
}
