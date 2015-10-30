#include<bits/stdc++.h>

using namespace std;

int A[210],length,ans[500],alength;
int mp[]={0,1,2,5,9,8,6};


bool is_not_zero()
{
    for(int i=0;i<length;++i)
    {
        if(A[i])
        {
            return true;
        }
    }

    return false;
}


int main()
{

    int T,tmp=0;
    char buffer[210];
    cin>>T;
    getchar();

    while(T--)
    {
        memset(A,0,sizeof(A));
        memset(ans,0,sizeof(ans));

        cin>>buffer;
        length=strlen(buffer);

        for(int i=0;i<length;++i)
        {
            A[i]=buffer[i]-'0';
        }

        alength=0;
        tmp=0;

        while(is_not_zero())
        {
            tmp=0;

            for(int i=0;i<length;++i)
            {
                tmp=tmp*10+A[i];
                A[i]=tmp/7;
                tmp%=7;
            }
            ans[alength++]=tmp;
        }

        for(int i=0;i<alength;++i)
        {
            printf("%d",mp[ans[i]]);
        }

        printf("\n");
    }



    return 0;
}
