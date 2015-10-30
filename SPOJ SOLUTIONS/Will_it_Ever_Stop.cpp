#include <iostream>
using namespace std;

int main() {
	
	unsigned long long int N;
	cin>>N;
	if(!((N)&(N-1)))
	cout<<"TAK";
	else
	cout<<"NIE";
	// your code goes here
	return 0;
}

