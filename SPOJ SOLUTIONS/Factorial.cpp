// Example program
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  long long N,number;
  
  cin>>N;
  for(long long int i=0;i<N;i++)
  {   
  	cin >> number;
   long long int count = 0;



if(number == 5){
count=1; 
}

else
{
for ( int j = 5; number/j >= 1; j *= 5 )
{
count  +=  number  /  j;
}
}
cout << count;
          cout<<endl;
      
  }
  return 0;
}



