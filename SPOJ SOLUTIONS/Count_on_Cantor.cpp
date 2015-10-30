#include<cstdio>
#include<cmath>
int main()
{
    int x;
    scanf("%d",&x);
    while(x--)
    {
        int i,n,s=0;
        scanf("%d",&n);
        for(i=1;;i++)
        {
            s+=i;
            if(s>=n)
                break;
        }
        int te=n-(s-i);
        int tot=i+1;
        if(i%2==0)
            printf("TERM %d IS %d/%d\n",n,te,tot-te);
        else
            printf("TERM %d IS %d/%d\n",n,tot-te,te);
    }
    return 0;
}
