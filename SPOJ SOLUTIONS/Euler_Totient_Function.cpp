#include <iostream>
using namespace std;

long long int fi_(long long int n) 
     { 
       long long int result = n; 
       for(int i=2;i*i <= n;i++) 
       { 
         if (n % i == 0) result -= result / i; 
         while (n % i == 0) n /= i; 
       } 
       if (n > 1) result -= result / n; 
       return result; 
      } 

int main() {
	
	long long int N,x;
	cin>>N;
	for(int i=0;i<N;i++)
	{
		cin>>x;
		cout<<fi_(x)<<endl;
	}
	// your code goes here
	return 0;
}
