#include <bits/stdc++.h>
using namespace std;
int countN[20000]={0};
int main() {
	map <string , int> m;
	int N,M;
	cin>>N>>M;
	while(N!=0&&M!=0)
	{
		m.clear();
                string str;
		for(int i=0;i<N;i++)
		{
			cin>>str;
			m[str]++;
		}
		memset(countN,0,N*sizeof(int));
		map <string , int> :: iterator i;
		for(i=m.begin();i!=m.end();i++)
		{
			countN[i->second]++;
		}
		for(int i=1;i<=N;i++)
		{
			cout<<countN[i]<<endl;
		}
		
		cin>>N>>M;
	}
	// your code goes here
	return 0;
}


