#include<cstdio>
#include<iostream>
using namespace std;
long long int factorial(int N)
{
long long int K;

if(N==0)
{
return 1;
}

else
{
K=N*factorial(N-1);
}

return K ;
}

int main()
{

    int N,i,K;
    unsigned int A[100];
    long long int answer;
    while(scanf("%d %d",&N,&K)!=EOF)
    {
        i=0;
        answer=factorial(N);
        while(i < K)
        {
            cin>>A[i];
            answer=answer/factorial(A[i]);
            i++;

        }
    cout<<answer<<endl;
    }

}
