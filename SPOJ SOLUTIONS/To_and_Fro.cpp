#include <bits/stdc++.h>
using namespace std;
int n,row;
int main() {
	
	cin>>n;
	while(n!=0)
	{
		string str;
		cin>>str;
		row=str.length()/n;
		//cout<<row;
		for(int k=n,len=str.length();k<len;k=k+2*n)
		reverse(str.begin()+k,str.begin()+k+n);
		
		
		for(int i=0;i<n;i++)
		{
			for(int j=i,len=str.length();j<len;j=j+n)
			{
				cout<<str[j];
			}
		}
		cout<<endl;
		cin>>n;
	}
	
	// your code goes here
	return 0;
}

