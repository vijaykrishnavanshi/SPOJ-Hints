#include <bits/stdc++.h>
using namespace std;

int main() {
	map <string,int> f,ff;
	int N,count=0,M;
	string str;
	cin>>N;
	for(int i=0;i<N;i++)
	{
		cin>>str;
		if(ff.find(str)!=ff.end())
		ff.erase(str);
		f[str]=1;
		cin>>M;
		//cout<<str<<endl;
		for(int j=0;j<M;j++)
		{
			cin>>str;
			if(f.find(str)==f.end())
			{
				ff[str]=1;
		//		cout<<str<<endl;
			}
			
		}
	}
	/*for(map <string,int> :: iterator it=ff.begin();it!=ff.end();it++)
	{
		if(it->second==1)
		count++;
	}*/
	cout<<ff.size()<<endl;
		
	// your code goes here
	return 0;
}
