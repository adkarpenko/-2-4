
#include<stdio.h>
#include<math.h>
#include<locale.h>

void task1()
{
	int A, B, i;
	printf("Введите число A: ");
	scanf_s("%d", &A);
	printf("Введите число B: ");
	scanf_s("%d", &B);
	while (A < B)
	{
		for (i = A; i < B; i++)
		{
			printf("Числа: %d\n", B--);
		}
		printf("Количество чисел : %d\n", i++);
	}

}
void task2()
{
	int A, B, N, H, i, x;
	float F;
	printf("Введите начало отрезка:");
	scanf_s("%d", &A);
	printf("Введите конец отрезка:");
	scanf_s("%d", &B);
	printf("Введите количество частей отрезка:");
	scanf_s("%d", &N);
	if (N > 2 && A < B)
	{
		for (i = 0; i <= N; i++)
		{
			H = (B - A) / N;
			x = A + i * H;
			F = 1 - sin(x);
			printf("Значение функции: %d\n", F);
		}

	}

}

void task3()
{
	int D, N, An, i;
	int A = 1;
	printf("Введите число D:");
	scanf_s("%d", &D);
	printf("Введите количество чисел:");
	scanf_s("%d", &N);
	for (i = 1; i <= N; i++)
	{
		An = A * i;
		if ((A*i - A * (i–1)) < D)
		{
			printf("Коэфициент: %d\n", i);
		}
	}

}



int main()
{
	setlocale(LC_ALL, "");
	int task = 0;
	int flag;
	int a;
	do
	{
		printf("Введите номер задания: ");
		scanf_s("%d", &a);
		switch (a)
		{
		case 1:
		{
			task1();
		}
		break;
		case 2:
		{
			task2();
		}
		break;
		default:
			break;
		}
		printf("Хотите продолжить? 1/0 \n");
		scanf_s("%d", &flag);
	} while (flag == 1);
}