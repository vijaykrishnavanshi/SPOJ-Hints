#include <iostream>
#include <iomanip>
#define PI 3.141592654
using namespace std;

int main() {
	float A,Area;
	while(1)
	{
	Area=0;
	cin>>A;
	if(A==0)
	break;
	Area=(A*A)/(2*PI);
	cout<<setprecision(2)<<fixed<<Area<<endl;
	}
	// your code goes here
	return 0;
}
