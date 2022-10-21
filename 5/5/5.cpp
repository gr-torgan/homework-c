#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
const int N = 10;
int random(int N) { return rand() % N; }
long lower_sum(int mat[N][N], size_t dim)
{
    long sum = 0;
    for (size_t i = 0; i < dim; ++i)
        for (size_t j = 0; j < i; ++j)
            sum += mat[i][j];
    return sum;
}
int main()
{
    int n, B[N][N], i, j, k, a = -10, b = 10, max = -10000;
    printf("Vvedite kolichestvo matric\n");
    scanf_s("%d", &n);
    long* sum = new long[n];
    for (k = 0; k < n; k++)
    {
        for (i = 0; i < N; i++)
            for (j = 0; j < N; j++)
                B[i][j] = random(b - a + 1) + a;
        sum[k] = lower_sum(B, N);
    }
    for (i = 0; i < n; i++)
        if (sum[i] > max) max = sum[i];
    printf("max summa:%d\n", max);
    _getch();
    return 0;
}