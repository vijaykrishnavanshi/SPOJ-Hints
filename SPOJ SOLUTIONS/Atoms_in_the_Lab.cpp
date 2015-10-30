#include <bits/stdc++.h>
using namespace std;
 int main(){
    int P;
    long long N,K,M,count;
    double res;
    scanf("%d",&P);
    while(P--){
        scanf("%lld %lld %lld",&N,&K,&M);
        res=N;
        count=0;
        while(res<=M){
            count++;
            res*=K;
        }
        if (count>0)
            printf("%lld\n",count-1);
        else
            printf("0\n");
    }
	//enter you code here
    return 0;
    
}
