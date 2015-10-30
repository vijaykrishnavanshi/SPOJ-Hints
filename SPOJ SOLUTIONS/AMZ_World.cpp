#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int A[35],N;
A[0]=1;
A[1]=3;
for(int i=2;i<35;i++)
{
A[i]=A[i-1]*2+A[i-2];
}
cin>>N;
cout<<A[N];
return 0;
}
