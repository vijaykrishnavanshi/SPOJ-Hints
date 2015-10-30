#include<bits/stdc++.h>
using namespace std;
int A[100001];
int C,N;
int func(int x){
	
	int cowsplaced=1;
	
	long long int last=A[0];
	
	for(int i=1;i<N;i++){
	
		if(A[i]-last>=x){
	
			cowsplaced++;
            
			if(cowsplaced==C)
	
			  return 1;
    
              last=A[i];
		  }
	  }
	  return 0;
  }

 int bsearch1(){
	
	int first=0,last=A[N-1];
	
	while(first<last){
	
		int mid=(first+last)/2;
	
		if(func(mid)==1)
	
		    first=mid+1;
	
		else
	
		    last=mid;
	
		}
	
		return first-1;
	}
	 
int main(){
	int T;
	cin>>T;
	
	while(T--)
	{
		cin>>N>>C;;
		
		for(int i=0;i<N;i++)
		{
			cin>>A[i];
		}
        
        sort(A,A+N);
		
		printf("%d\n",bsearch1());
     
		
	}
 }
