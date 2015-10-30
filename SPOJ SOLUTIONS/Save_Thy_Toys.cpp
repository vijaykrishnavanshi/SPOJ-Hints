#include<bits/stdc++.h>
using namespace std;

long long int DP[100030];
long long int V[100030];

int main(){
    int T, N;
    cin>>T;
    while(T--){
        scanf("%lld",&N);
        for (int i=0;i<N;i++)
        {
            scanf("%lld",&V[i]);
        }
        for(int i=N;i<N+7;i++)
        {
        DP[i]=0LL;
        V[i]=0LL;
        }
        for (int i=N-1;i>=0;i--){
            DP[i] = 0LL;
            DP[i] = V[i]+DP[i+2];
            if (i+1<N)
                DP[i] = max(DP[i], V[i]+V[i+1]+DP[i+4]);
            if (i+2<N)
                DP[i] = max(DP[i], V[i]+V[i+1]+V[i+2]+DP[i+6]);
        }
        printf("%lld\n",DP[0]);
    }
}
