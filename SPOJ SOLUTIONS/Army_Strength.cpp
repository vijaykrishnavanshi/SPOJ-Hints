#include <iostream>
#include<algorithm>
using namespace std;

struct node
{
	int power;
	int index;
};
bool cmppow(node a,node b)
{
	if(a.power==b.power)
	return a.index>b.index;
	else
	return a.power>b.power;
}


int main() {
	long long int N,NG,NM;
	cin>>N;
	for(int i=0;i<N;i++)
	{
		cin>>NG>>NM;
		node Node[NG+NM];
		int k=0;
		for(int j=0;j<NG;j++)
		{
			cin>>Node[k].power;
			Node[k].index=1;
			k++;
		}
		for(int l=0;l<NM;l++)
		{
			cin>>Node[k].power;
			Node[k].index=0;
			k++;
		}
		sort(Node,Node+NG+NM,cmppow);
		/*for(int j=0;j<NM+NG;j++)
		{
			cout<<Node[j].power<<" "<<Node[j].index<<endl;
		}*/
		if(Node[0].index)
		cout<<"Godzilla"<<endl;
		else
		cout<<"MechaGodzilla"<<endl;
		
	}
	// your code goes here
	return 0;
}

