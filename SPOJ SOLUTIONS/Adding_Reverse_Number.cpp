#include <iostream>
using namespace std;
int rev(int N)
{
	int reverse;
	while(N!=0)
	{
	  reverse = reverse * 10;
      reverse = reverse + N%10;
      N = N/10;
	}
	return reverse;
}


int main() {
	int n,A,B;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>A>>B;
		cout<<rev(rev(A)+rev(B))<<endl;
	}
	// your code goes here
	return 0;
}
