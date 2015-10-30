#include <bits/stdc++.h>
using namespace std;
long long int L[6102][6102];
char rev[6102];
long long int lcs( char *X, char *Y, long long int m, long long int n )
{
   long long int i, j;
 
   for (i=0; i<=m; i++)
   {
     for (j=0; j<=n; j++)
     {
       if (i == 0 || j == 0)
         L[i][j] = 0;
 
       else if (X[i-1] == Y[j-1])
         L[i][j] = L[i-1][j-1] + 1;
 
       else
         L[i][j] = max(L[i-1][j], L[i][j-1]);
     }
   }
 
   return L[n][n];
}
 
int findMin(char str[], int n)
{
   strcpy(rev, str);
   reverse(rev,rev+n);
 
   return (n - lcs(str, rev, n, n));
}
 
int main()
{
    char str[6102];
    long long int N;
    
    cin>>N;
    for(int i=0;i<N;i++)
    {
    cin>>str;	
    
    printf("%d\n", findMin(str, strlen(str)));
    }
    return 0;
}


