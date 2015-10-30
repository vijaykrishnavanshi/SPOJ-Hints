#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,A[100000];

    scanf("%d",&N);

    for(int i = 0;i < N;i++)
        scanf("%d",&A[i]);

    int tmp = A[1] - A[0];

    for(int i = 1;i + 1 < N;i++)
    {
        tmp = __gcd(tmp,A[i + 1] - A[i]);
    }
    int fin = 0;

    for(int i = 0 ; i < N-1 ; i++)
    {
        fin += (A[i + 1] - A[i]) / tmp - 1;
    }
    printf("%d\n",fin);

    return 0;
}
