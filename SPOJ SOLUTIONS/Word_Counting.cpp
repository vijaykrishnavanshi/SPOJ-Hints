#include <bits/stdc++.h>
using namespace std;

int main() {
	string str,word;
	long long int T;
	cin>>T;
	getline(cin,str);
	for(int i=0;i<T;i++)
	{
	
		long long int prev=0,count=1,ans=0;
		getline(cin,str);
		istringstream wor(str, istringstream::in);
		while(wor>>word)
		
		{
		
		if(word.length()==prev) 
		{
		count++;
		}
		else
		{
			prev=word.length();
			count=1;
		}
		
		if(count>ans)
		{
			ans=count;
		}
	}
		cout<<ans<<endl;
	}
	// your code goes here
	return 0;
}
