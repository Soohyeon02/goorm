#include <stdio.h>
int main(void)
{
	int N = 0;
	float A[100];
	float B[100];
	float temp = 0;
	float sum = 0;

	scanf_s("%d", &N);


	for (int i = 0; i < N; i++)
	{
		scanf_s("%f", &A[i]);
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N-i; j++)
		{
			if (A[j] > A[j+1])
			{
				temp = A[i];
				A[j] = A[j+1];
				A[j+1] = temp;
			}
		}
	}
	for (int i = 0; i < N / 5; i++)
	{
		A[i] = 0;
	}
	for (int i = N - 1; i > N - (N / 5) - 1; i--)
	{
		A[i] = 0;
	}
	for (int i = 0; i < N; i++)
	{
		sum += A[i];
	}
	printf("%.2f", sum / (3 * N / 5));
}