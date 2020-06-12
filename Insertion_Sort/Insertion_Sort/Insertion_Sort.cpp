// Insertion_Sort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
int size;
void InsertionSort(int *array) {
	int key;
	int J;
	for (size_t i = 0; i < size; i++)
	{
		key = array[i];
		J = i - 1;
		while (J >= 0 && array[J] > key)
		{
			array[J + 1] = array[J];
			J = J - 1;
			array[J + 1] = key;
		}
	}
}
void Display(int* array) {
	for (size_t i = 0; i < size; i++)
	{
		std::cout << array[i] << ", ";
	}
	std::cout << std::endl;
}
int main()
{
	int array[]{ 7,3,5,1,3,0 };
	size = sizeof(array) / sizeof(int);
	Display(array);
	InsertionSort(array);
	std::cout << std::endl;
	Display(array);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
