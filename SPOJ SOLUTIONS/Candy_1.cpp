#include <iostream>
using namespace std;
int find_less(int A[],int n,int avg)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		if((A[i]-avg)>0)
		count = count + (A[i]-avg);
		else
		count = count - (A[i]-avg);

	}
	return count/2;
}
int average(int A[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum = sum + A[i];
	}
	if (sum%n!=0)
	return -1;
	
	else 
	return sum/n;
}
int main() {
	int n,A[10000],avg;
	cin>>n;
	while( n != -1 )
	{
		for(int i=0;i<n;i++)
		cin>>A[i];
		avg=average(A,n);
		if(avg==-1)
		cout<<avg<<endl;
		else
		{
			cout<<find_less(A,n,avg)<<endl;
		//	cout<<avg;
		}
		cin>>n;	
	}
	// your code goes here
	return 0;
}
