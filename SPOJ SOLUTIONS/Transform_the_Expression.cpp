// Example program
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  int N;
  
  cin>>N;
  for(int i=0;i<N;i++)
  {     
      string Exp;
      vector <char> temp,out;
      
      cin>>Exp;
      
      for(int j=0;j<Exp.length();j++)
      {
          if((int)Exp[j] == 40 )
          temp.push_back(Exp[j]);
          
          else if(( Exp[j] == 94 )||( Exp[j] == 42 )||( Exp[j] == 43 )||( Exp[j] == 45 )||( Exp[j] == 47 ))
          temp.push_back(Exp[j]);
          else if((int)Exp[j] == 41 )
          {
              out.push_back(temp.back());
              temp.pop_back();
              temp.pop_back();
          }
          else
          out.push_back(Exp[j]);
          
      }
      for(int k=0;k<out.size();k++)
          {
              cout<<out[k];
          }
          cout<<endl;
      
  }
  return 0;
}


