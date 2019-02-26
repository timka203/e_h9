#include <iostream>
#include <stdio.h>
#include <time.h>
#include <locale.h>
using namespace std;
void func2(int a[])
{
	for (size_t i = 0; i < 100; i++)
	{
		a[i] = 1 + rand() % 200;
		cout << a[i] <<' '<<i<< endl;
	}
}
void task2()
{
	int a[100] = { 0 };
	int *p = a;
	func2(a);
	int c, sum1 = 0, g;
	printf("--------------------------\n");
	cin >> c>>g;

	for (p = a; c < g+1;c++)
	{
		sum1 = sum1 + p[c];
	}
	printf("--------------------------\n");
	
		cout << sum1  << endl;
	


}
void task1()
{
	int a[100] = { 0 };
	int *p = a;
	func2(a);
	int c, sum1=0,sum2=0;
	printf("--------------------------\n");
	cin >> c ;

	for (p= a; p < a+100; p++)
	{
		if (*p > c)
		{
		sum1++;
		}
		else sum2++;
	}
	printf("--------------------------\n");
	if (sum1 > sum2)
	{
		cout << sum1<<'>' <<  endl;
	}
	else
	{
		cout << sum2<<'<' << endl;
	}

}
int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int a, d;
	do
	{
		printf("Which task");
		scanf_s("%d", &d);
		switch (d)
		{
		case 1: task1(); break;
		case 2: task2(); break;
		default:
			break;
		}
		printf(" do you want continue y(1)/no(2)");
		scanf_s("%d", &a);
	} while (a == 1);
	system("pause");
}