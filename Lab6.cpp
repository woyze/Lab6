#include <iostream>
#include <math.h>
using namespace std;


int max()
{	
	int one;
	int two;
	int three;
	cout << "Введите три числа." << endl;
	cout << "Первое число: "; cin >> one;
	cout << "Второе число: "; cin >> two;
	cout << "Третье число: "; cin >> three;
	
	

	if ((one >= two) && (one >= three)) return one;
	if ((two >= one) && (two >= three)) return two;
	if ((three >= two) && (three >= one)) return three;
} 


int limit()
{
	int left;
	cout << "Левый предел: "; cin >> left;
	int right;
	cout << "Правый предел: "; cin >> right;
	int num;
	

		do {
			cout << "Введите число между " << left << " и " << right << " : ";
			cin >> num;

			if (!((float)((int)num) == num)) {
				cout << "Число не является целым." << endl;
				return 0;
			}

		} while (!((left <= num) && (num <= right)));

		return num;


}


void sort()
{ 
	int n; int* arr;
	cout << "Введите кол-во элементов:";
	cin >> n;
	arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		cout << "Массив, элемент[" << i << "]: ";
		cin >> arr[i];
	}


	for (int i = 1; i < n; i++) {
		for (int j = i; j > 0 && arr[j - 1] > arr[j]; j--) {
			swap(arr[j], arr[j - 1]);
		}
	}

	cout << "Массив после сортировки:" << endl;
	for (int i = 0; i < n; i++)
		cout << "Массив, элемент[" << i << "]: " << arr[i] << endl;
	
}



int main()
{

	setlocale(LC_ALL, "russian");

	cout << "Задание 1. " << endl;
	cout << "Максимум: " << max() << endl;

	cout << "Задание 2: " << endl;
	cout << "Вывод: " << limit() << endl;

	cout << "Задание 3. Сортировка массива." << endl;
	sort();
}