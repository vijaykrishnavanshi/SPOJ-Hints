#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int A,D;
	cin>>A>>D;
	while((A!=0)&&(D!=0))
	{
		int att[50],de[50];
		for(int i=0;i<A;i++)
		{
			cin>>att[i];
		}
		for(int j=0;j<D;j++)
		{
			cin>>de[j];
		}
		sort(att,att+A);
		sort(de,de+D);
	
		if(att[0]<de[1])
		cout<<"Y"<<endl;
		else
		cout<<"N"<<endl;
	
		cin>>A>>D;
	}

	// your code goes here
	return 0;
}

