#include <bits/stdc++.h>
using namespace std;
int main() {
	long long int N,K=1;
	scanf("%lld",&N);
	while(N)
	{
	long int A[N][3];
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%ld",&A[i][j]);
		}
	}
	A[1][0] += A[0][1];
   A[0][2] += A[0][1];
   A[1][1] += min(min(A[1][0],A[0][1]),A[0][2]);
   A[1][2] += min(min(A[0][2],A[0][1]),A[1][1]);
   
   for(int i  = 2 ; i<N;i++)
   {
    A[i][0] += min(A[i-1][0],A[i-1][1]);
    A[i][1] += min(min(min(A[i][0],A[i-1][0]),A[i-1][1]),A[i-1][2]);
    A[i][2] += min(min(A[i][1],A[i-1][1]),A[i-1][2]);
   }
   printf("%lld. %ld\n",K,A[N-1][1]);
   K++;
	scanf("%lld",&N);
	}
	// your code goes here
	return 0;
}
