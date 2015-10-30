#include <iostream>
using namespace std;

int main() {
	float A,Sum=0.0;
	while(1)
	{
	int i=0;
	
	cin>>A;
	
	if(A==0.0)
	break;
	
	while(Sum < A)
	{
		i++;
		Sum=Sum+(1.0/(1+i));
	//	cout<<Sum<<endl;
	}
	cout<<i<<" card(s)"<<endl;
	Sum=0.0;
	}
	// your code goes here
	return 0;
}

