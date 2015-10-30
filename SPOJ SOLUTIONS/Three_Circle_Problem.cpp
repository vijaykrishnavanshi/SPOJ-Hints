#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int T;
	cin>>T;
	while(T--)
	{
		double a,b,c,r;
		cin>>a>>b>>c;
		r= (a * b * c) / (a*b + b*c + c*a + 2*sqrt(a*b*c*(a+b+c)));
		cout<<setprecision(6)<<fixed<<r<<endl;
	}
	// your code goes here
	return 0;
}
