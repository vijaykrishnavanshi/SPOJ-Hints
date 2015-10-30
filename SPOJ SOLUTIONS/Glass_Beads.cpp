#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	string str,temp,min=" ";
	cin>>str;
	int num=0;
	
	for(int i=0,N=str.length();i<N;i++)
	{
		temp=str.substr(i,N-i) + str.substr(0,i);
		if(min==" "||temp<min)
		{
			min=temp;
			num=i;
		}
	}
	cout<<num+1<<endl;
	}
	// your code goes here
	return 0;
}
