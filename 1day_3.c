////#include <stdio.h>
//int main(void)
//{
//    int a, b, c, d, e = 0;
//    int num = 0;
//    int A[10];
//    for (int i = 0; i < 10; i++)
//    {
//        scanf_s("%d", &A[i]);
//    }
//    for (int i = 0; i < 10; i++)
//    {
//
//        while (1)
//        {
//            if (A[i] == 4)
//            {
//                break;
//            }
//            if (A[i] == 1)
//            {
//                num++;
//                break;
//            }
//            if (A[i] > 0 && A[i] < 10)
//            {
//                A[i] *= A[i];
//            }
//            else if (A[i] > 9 && A[i] < 100)
//            {
//                a = A[i] % 10;
//                b = A[i] / 10;
//                A[i] = a * a + b * b;
//            }
//            else if (A[i] > 99 && A[i] < 1000)
//            {
//                a = A[i] % 10;
//                b = A[i] % 100 / 10;
//                c = A[i] / 100;
//                A[i] = a * a + b * b + c * c;
//            }
//            else if (A[i] > 999 && A[i] < 10000)
//            {
//                a = A[i] % 10;
//                b = A[i] % 100 / 10;
//                c = A[i] % 1000 / 100;
//                d = A[i] / 1000;
//                A[i] = a * a + b * b + c * c + d * d;
//            }
//            else if (A[i] > 9999 && A[i] < 100000)
//            {
//                a = A[i] % 10;
//                b = A[i] % 100 / 10;
//                c = A[i] % 1000 / 100;
//                d = A[i] % 10000 / 1000;
//                e = A[i] / 10000;
//                A[i] = a * a + b * b + c * c + d * d + e * e;
//            }
//        }
//    }
//    printf("%d", num);
//}