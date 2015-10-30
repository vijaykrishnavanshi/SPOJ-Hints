#include <bits/stdc++.h>
int main()
{
    int T,cnt;
    long long int K,N;
    scanf("%d",&T);
    while(T--)
    {
        cnt=0;
        scanf("%lld %lld",&K,&N);
        if(N==1)
            printf("Male\n");
        else if(N==2)
            printf("Female\n");
        else{
            N--;
        while(N>1)
        {
            if(N%2!=0)
                cnt++;
            N>>=1;
        }
        if(cnt%2==0)
            printf("Female\n");
        else
            printf("Male\n");
        }
        printf("\n");
    }
    return 0;
}
