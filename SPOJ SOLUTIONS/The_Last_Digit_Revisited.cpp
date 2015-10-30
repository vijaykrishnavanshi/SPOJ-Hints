#include <iostream>
#include <string>
using namespace std;

int main() {
	int t,base,power;
	unsigned long long int vij;
	int fact[10][4]={	0,0,0,0,   
						1,1,1,1,   
						6,2,4,8,   
						1,3,9,7,  
						6,4,6,4,   
						5,5,5,5,   
						6,6,6,6,   
						1,7,9,3,   
						6,8,4,2,   
						1,9,1,9
					};
	string A;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>A;
		cin>>vij;
		base = A[A.length()-1]-'0';
		/*if((A.length()==1)&&(base=0))
		{
			cout<<0;
		}*/
		//else
		{
		if(vij!=0)
		{
			power = vij%4;
			cout<<fact[base][power];
		}
		else{
			cout<<1;
		}
		}
		cout<<endl;
	}
	// your code goes here
	return 0;
}
