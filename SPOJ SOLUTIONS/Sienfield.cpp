#include<bits/stdc++.h>
using namespace std;
int main()
{
 int level=1;
 while(1){
  string Str;
  char ch;
  int top=0,cnt=0,i=0;
  cin>>Str;
  if(Str[0]=='-')
   break;
  while(Str[i]!='\0')
  {
   	ch=Str[i];
   	if(ch==123)
    	++top;
   	else if(ch==125 && top==0)
   	{
		cnt+=1;
    	++top;
   	}
   	else
    	top--;
   	
   	i++;
  
  	
  }
  
  printf("%d. %d\n",level++,(top/2)+cnt);
 
 }
 return 0;
}
