#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int N;
	cin>>N;
	while(N!=-1)
	{
		if(N%2)
		{
			N--;
			if(N%3==0)
			{
				N/=3;
				N=N*4+1;
				int t=sqrt(N);
				if(t*t==N)
				{
					
					if(t%2)
					{
						cout<<"Y"<<endl;
					}
					else
					{cout<<"N"<<endl;
					//cout<<"Hey;";
					}
				}
				else
				{cout<<"N"<<endl;
				//cout<<"Hey;";
				}
			}
			else
			{cout<<"N"<<endl;
			//cout<<"Hey;";
			}
		}
		else
		{cout<<"N"<<endl;
		//cout<<"Hey;";
		}
		cin>>N;
	}
	// your code goes here
	return 0;
}
