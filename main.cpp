#include <iostream>
using namespace std;

void InsertionSort(int arr[], int size)
{
	int j, key;
	for (int j = 1; j < size; ++j)
	{
		int i = j - 1;
		int key = arr[j];

		while ((i >= 0) && (arr[i] > key))
		{
			arr[i + 1] = arr[i];
			--i;						
		}

		arr[i + 1] = key;
	}
}

void PrintArray(int *arr, int size) {
	for (int i = 0; i < size; ++i)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
	int arr[] = { 45, 68, 50, 1, 332, 68, 54, 656, 8, 1234 };
	int size = 10;

	cout << "Before Insertion Sort :" << endl;
	PrintArray(arr, size);

	InsertionSort(arr, size);

	cout << "After Insertion Sort :" << endl;
	PrintArray(arr, size);

	system("pause");
}