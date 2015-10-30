#include <iostream>
using namespace std;

int main() {
	
	string str1,str2;
	cin>>str1;
	cin>>str2;
	while(cin)
	{
		int C1[26]={0},C2[26]={0},C3[26]={0};
		for(int i=0,len=str1.length();i<len;i++)
		{
			C1[str1[i]-'a']++;
		}
		for(int i=0,len=str2.length();i<len;i++)
		{
			C2[str2[i]-'a']++;
		}
		for(int i=0;i<26;i++)
		{
			C3[i]=min(C1[i],C2[i]);
		}
		for(int i=0;i<26;i++)
		{
			while(C3[i]--)
			{
			cout<<(char)(i+97);
			}
		}
		cout<<endl;
		cin>>str1>>str2;
	}
	// your code goes here
	return 0;
}
