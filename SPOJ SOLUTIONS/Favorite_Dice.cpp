#include <bits/stdc++.h>
int main()
{
int T, N;
scanf("%d", &T);
while (T--)
{
scanf("%d", &N);
double expected = 0.0;
for (int k = 1; k <= N; k++)
expected += N / (double)k;
printf("%.2f\n", expected);
}
}
