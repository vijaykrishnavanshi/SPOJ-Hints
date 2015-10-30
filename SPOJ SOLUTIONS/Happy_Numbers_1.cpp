#include <bits/stdc++.h>
using namespace std;
long long compute(long long int N)
{
	long long int sum=0;
	while(N)
	{
		sum+=pow(N%10,2);
		N=N/10;
	}
	return sum;
}

int main() {
	long long int N,x,count=1;
	cin>>N;
	vector <long long int> v;
	
	while(1)
	{
		N=compute(N);
		if((N==1)||(v.end()!=find(v.begin(),v.end(),N)))
		break;
		v.push_back(N);
		count++;
	}
	if(N==1)
	cout<<count;
	else
	cout<<-1;
	// your code goes here
	return 0;
}
