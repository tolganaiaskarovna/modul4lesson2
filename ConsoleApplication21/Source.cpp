#include <stdio.h>
#include <time.h>
#include <iostream>
#include <locale.h>
using namespace std;


void main()
{
	setlocale(LC_ALL, "RUS");

	srand(time(NULL));
	int arr[10];
	for (int i = 0; i < 10; i++) {
		arr[i] = 1 + rand() % 89;
		cout << arr[i] << endl;
	}

	int b = 0;
	cout << "введите номер задани€" << endl;
	cin >> b;
	if (b == 1)
	{

		//1.	»спользу€ датчик случайных чисел, 
		//заполнить массив из двадцати элементов 
		//неповтор€ющимис€ числами
		for (int i = 0; i < 10; i++) {
			cout << arr[i] << endl;
		}
	}
	else if (b == 2) {
		//2.	ќпределить: 
		//a.сумму всех элементов массива;
		for (int i = 0; i < 10; i++) {
			cout << arr[i] << endl;
		}
				int summ = 0;
		//sum = arr[0] + arr[1] + arr[2];

		for (int i = 0; i < 10; i++) {
			summ = summ + arr[i];
		}
		cout << "сумма всех элементов равна=" << summ << endl;

	}
	else if (b == 3)
	{
		//b.произведение всех элементов массива;
		int proizvedenie = 1;
		for (int i = 0; i < 10; i++) {
			proizvedenie = proizvedenie*arr[i];
		}
		cout << "произведение всех элементов массива=" << proizvedenie << endl;

	}
	else if (b == 4)
	{
		//c.сумму квадратов всех элементов массива;
		int summkvadratov = 0;
		for (int i = 0; i < 10; i++) {
			summkvadratov = summkvadratov + pow(arr[i], 2);

		}
		cout << "сумма квадратов всех элементов =" << summkvadratov << endl;

	}
	else if (b == 5)
	{
		//d.сумму шести первых элементов массива;
		int summ6 = 0;
		for (int i = 0; i < 6; i++) {
			summ6 = summ6 + arr[i];
		}
		cout << "сумму шести первых элементов=" << summ6 << endl;

	}
	else if (b == 6)
	{
		//e.сумму элементов массива с k1 - го по k2 - й
		//(значени€ k1 и k2 ввод€тс€  с клавиатуры; k2 > k1);
		int k1, k2, summk1k2 = 0;
		cout << "введите k1 элемент:";
		cin >> k1;
		cout << "введите k2 элемент:";
		cin >> k2;
		for (int i = k1; i <= k2; i++) {
			summk1k2 = summk1k2 + arr[i];
		}
		cout << "сумма элементов массива с k1 - го по k2 - й :" << summk1k2 << endl;
	}
	 if (b == 7) {
			//f.	среднее арифметическое всех элементов массива; 

	
		
	}
	
	
	
	
}



