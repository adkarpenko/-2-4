
#include<stdio.h>
#include<math.h>
#include<locale.h>

void task1()
{
	int A, B, i;
	printf("������� ����� A: ");
	scanf_s("%d", &A);
	printf("������� ����� B: ");
	scanf_s("%d", &B);
	while (A < B)
	{
		for (i = A; i < B; i++)
		{
			printf("�����: %d\n", B--);
		}
		printf("���������� ����� : %d\n", i++);
	}

}
void task2()
{
	int A, B, N, H, i, x;
	float F;
	printf("������� ������ �������:");
	scanf_s("%d", &A);
	printf("������� ����� �������:");
	scanf_s("%d", &B);
	printf("������� ���������� ������ �������:");
	scanf_s("%d", &N);
	if (N > 2 && A < B)
	{
		for (i = 0; i <= N; i++)
		{
			H = (B - A) / N;
			x = A + i * H;
			F = 1 - sin(x);
			printf("�������� �������: %d\n", F);
		}

	}

}

void task3()
{
	int D, N, An, i;
	int A = 1;
	printf("������� ����� D:");
	scanf_s("%d", &D);
	printf("������� ���������� �����:");
	scanf_s("%d", &N);
	for (i = 1; i <= N; i++)
	{
		An = A * i;
		if ((A*i - A * (i�1)) < D)
		{
			printf("����������: %d\n", i);
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
		printf("������� ����� �������: ");
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
		printf("������ ����������? 1/0 \n");
		scanf_s("%d", &flag);
	} while (flag == 1);
}