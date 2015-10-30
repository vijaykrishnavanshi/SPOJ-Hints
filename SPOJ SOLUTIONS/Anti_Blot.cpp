#include <iostream>
using namespace std;

int conv(string s) 
{ 
    int ret=0; 
    for(int i=0;i<s.length();i++) 
    { 
        if(!isdigit(s[i]))
        return -1; 
        
        ret = ret*10 + (s[i]-'0'); 
    } 
    return ret; 
} 

int main() {
	int N,a,b,c;
	cin>>N;
	for(int i=0;i<N;i++)
	{
	string str1,str2,str3,str4,str5;
	cin>>str1>>str2>>str3>>str4>>str5;
	a=conv(str1);
	b=conv(str3);
	c=conv(str5);
	if(a<0){
		a=c-b;
	}
	if(b<0){
		b=c-a;
	}
	if(c<0)
	{
		c=a+b;
	}
	
	cout<<a<<" + "<<b<<" = "<<c<<endl;
	
	}
	// your code goes here
	return 0;
}
