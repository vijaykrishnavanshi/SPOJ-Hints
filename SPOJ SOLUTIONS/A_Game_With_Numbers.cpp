#include<stdio.h>
int main()
{
        int N;
        while(scanf("%d",&N)!=EOF)
        {
                if(N%10==0)
                        printf("2\n");
                else
                        printf("1\n%d\n",N%10);
        }
        return 0;
}
