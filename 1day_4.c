//#include <stdio.h>
//int main(void)
//{
//	int N = 0;
//	int temp = 0;
//	float A[100];
//	float sum = 0;
//	
//	scanf_s("%d", &N);
//	
//	for (int i = 0; i < N; i++)
//	{
//		scanf_s("%f", &A[i]);
//	}
//	for (int i = 0; i < N / 5; i++)
//	{
//		A[i] = 0;
//	}
//	
//	for (int i = 0; i < N; i++)
//	{
//		int left = 0;
//		int right = N - 1;
//		temp = A[left];
//		A[left] = A[right];
//		A[right] = temp;
//		left++;
//		right--;
//		for (int i = 0; i < N / 5; i++)
//		{
//			A[i] = 0;
//		}
//	}
//	for (int i = 0; i < N; i++)
//	{
//		sum += A[i];
//	}
//	printf("%.2f", sum / (3 * N / 5));
//}