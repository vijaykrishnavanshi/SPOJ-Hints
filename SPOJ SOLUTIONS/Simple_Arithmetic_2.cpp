#include <iostream>
using namespace std;

int main() {
	int N;
	cin>>N;
	while(N--)
	{
	int x=0,res=0;
	char ch='+';
	scanf("%d",&res);
	cin>>ch;
	while(ch!='=')
	{
		scanf("%d",&x);
		if(ch=='+')
		{
			res+=x;
		}
		if(ch=='-')
		{
			res-=x;
		}
		if(ch=='*')
		{
			res*=x;
		}
		if(ch=='/')
		{
			res/=x;
		}
		cin>>ch;
	}
	cout<<res<<endl;
	}
	// your code goes here
	return 0;
}
