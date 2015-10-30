#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int N,R;
	cin>>N;
	for(int i=0;i<N;i++)
	{
		cin>>R;
		cout<<"Case "<<i+1<<": "<<setprecision(2)<<fixed<<4.0*R*R+1.0/4<<endl;
	}
	// your code goes here
	return 0;
}
