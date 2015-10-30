#include <bits/stdc++.h>
using namespace std;

long int max_pow2(long long int x)
{	long int n=-1;
	while(x>>++n > 0);
	return n-1;
}
int main() {
	string str;
	unsigned long long int x,a,b,c,y;
	cin>>str;
	while (str!="00e0")
	{
		
		a=str[0]-'0';
		b=str[1]-'0';
		c=str[3]-'0';
		x=(b+a*10)*pow(10,c);
		y=(x-pow(2,max_pow2(x)))*2;
		if(y<0)
		y=0;
		cout<<1+y<<endl;
		cin>>str;
	}
	
	// your code goes here
	return 0;
}
