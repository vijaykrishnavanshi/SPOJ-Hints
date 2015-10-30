#include<bits/stdc++.h>
using namespace std;
int main()
{
        long long int N,M,ans;
        cin>>N>>M;
    	while(N!=0||M!=0)
        {
                ans=0;
    
                for(int i=2;i<=N;i++)
                {       
                        ans=(ans+M)%i;
                }
                cout<<N<<" "<<M<<" "<<ans+1<<endl;
                cin>>N>>M;
        }
        return 0;
}


