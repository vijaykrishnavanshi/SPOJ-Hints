#include<bits/stdc++.h>
using namespace std;
int main()
{
   long int T;
   cin>>T;
   while(T--)
   {
       long int M=0;
       cin>>M;
       int A[M+9];
       for(int i=0;i<M;i++)
           scanf("%d",&A[i]);
       long long answer=0;
       for(int i=0;i<M/2;i++)
       {
            answer+=((M - 2*i -1)*(A[M-i-1] - A[i]));
       }
       cout<<answer<<endl;
    }
    return 0;
}

