// Bubble sort algorithm implementation
// By Nick from CoffeeBeforeArch

#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubble_sort(int *array, int size)
{
	for (int i = 0; i < size - 1; ++i) {
		for (int j = 0; j < size - i - 1; ++j)
			if (array[j] > array[j + 1])
				swap(&array[j], &array[j + 1]);
	}
}

int main(int argc, char *argv[])
{
	constexpr int size = 7;
	int array[size];
	srand(time(nullptr));
	cout << "Array: ";
	for (int i = 0; i < size; ++i) {
		array[i] = rand();
		cout << '\t' << array[i];
	}

	bubble_sort(array, size);
	cout << "\n\nBubble sorted array: ";
	for (int i = 0; i < size; ++i)
		cout << '\t' << array[i];
		
	return 0;
}