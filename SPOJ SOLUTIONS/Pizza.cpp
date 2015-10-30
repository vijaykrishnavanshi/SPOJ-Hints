#include <bits/stdc++.h>
using namespace std;

int main() {
	map <string,int> m;
	string str;
	int T,count=0;
	cin>>T;
	for (int i=0;i<T;i++)
	{
		cin>>str;
		m[str]++;
	}
	count=m["3/4"];
	m["1/4"]-=m["3/4"];
	count+=(m["1/2"]-m["1/2"]%2)/2;
	if(m["1/2"]%2)
	{
		count++;
		m["1/4"]-=2;
	}
	if(m["1/4"]>0)
	{
	count+=(m["1/4"]-m["1/4"]%4)/4;
	if(m["1/4"]%4>0)
	{
		count++;
	}
	}
	cout<<count+1;

	
	// your code goes here
	return 0;
}
