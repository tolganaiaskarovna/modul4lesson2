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
	cout << "������� ����� �������" << endl;
	cin >> b;
	if (b == 1)
	{

		//1.	��������� ������ ��������� �����, 
		//��������� ������ �� �������� ��������� 
		//���������������� �������
		for (int i = 0; i < 10; i++) {
			cout << arr[i] << endl;
		}
	}
	else if (b == 2) {
		//2.	����������: 
		//a.����� ���� ��������� �������;
		for (int i = 0; i < 10; i++) {
			cout << arr[i] << endl;
		}
				int summ = 0;
		//sum = arr[0] + arr[1] + arr[2];

		for (int i = 0; i < 10; i++) {
			summ = summ + arr[i];
		}
		cout << "����� ���� ��������� �����=" << summ << endl;

	}
	else if (b == 3)
	{
		//b.������������ ���� ��������� �������;
		int proizvedenie = 1;
		for (int i = 0; i < 10; i++) {
			proizvedenie = proizvedenie*arr[i];
		}
		cout << "������������ ���� ��������� �������=" << proizvedenie << endl;

	}
	else if (b == 4)
	{
		//c.����� ��������� ���� ��������� �������;
		int summkvadratov = 0;
		for (int i = 0; i < 10; i++) {
			summkvadratov = summkvadratov + pow(arr[i], 2);

		}
		cout << "����� ��������� ���� ��������� =" << summkvadratov << endl;

	}
	else if (b == 5)
	{
		//d.����� ����� ������ ��������� �������;
		int summ6 = 0;
		for (int i = 0; i < 6; i++) {
			summ6 = summ6 + arr[i];
		}
		cout << "����� ����� ������ ���������=" << summ6 << endl;

	}
	else if (b == 6)
	{
		//e.����� ��������� ������� � k1 - �� �� k2 - �
		//(�������� k1 � k2 ��������  � ����������; k2 > k1);
		int k1, k2, summk1k2 = 0;
		cout << "������� k1 �������:";
		cin >> k1;
		cout << "������� k2 �������:";
		cin >> k2;
		for (int i = k1; i <= k2; i++) {
			summk1k2 = summk1k2 + arr[i];
		}
		cout << "����� ��������� ������� � k1 - �� �� k2 - � :" << summk1k2 << endl;
	}
	 if (b == 7) {
			//f.	������� �������������� ���� ��������� �������; 

	
		
	}
	
	
	
	
}



