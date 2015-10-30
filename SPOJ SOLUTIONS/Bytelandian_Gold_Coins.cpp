#include <cstdio>
#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

map<int, long long> dyn;

long long f(int n){

if(n==0) 
return 0;

if(dyn[n]!=0) 
return dyn[n];
long long aux=f(n/2)+f(n/3)+f(n/4);

if(aux>n) 
dyn[n]=aux;
else 
dyn[n]=n;


return dyn[n];

}
int main(){
int num;
while(1)
{
	cin>>num;
	if(cin)
	cout<<f(num)<<endl;
	else 
	break;
}
return 0;
}

