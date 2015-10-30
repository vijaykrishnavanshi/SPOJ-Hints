#include <bits/stdc++.h>
using namespace std;

int main() {
	string str,hay;
	int found,T;
	cin>>T;
	while(cin)
	{
		cin>>hay>>str;
		found=str.find(hay);
		if(found==std::string::npos)
		{
			printf("\n");
		}
		else
		{
			while(found!=std::string::npos)
			{
			printf("%d\n",found);
			found=str.find(hay,found+1);
			}
		}
		
		
		cin>>T;
	}
	// your code goes here
	return 0;
}
