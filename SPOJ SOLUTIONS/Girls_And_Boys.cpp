    #include <iostream>
    #include <algorithm>
    using namespace std;
     
    int main() {
    int x,y,maxp,minp;
    cin>>x>>y;
    while((x!=-1)&&(y!=-1))
    {	
    maxp=max(x,y);
    minp=min(x,y);
    if(maxp==0 && minp==0)
    {
    	cout<<0<<endl;
    	
    }
    else if((maxp==minp)||(minp==maxp-1))
    {
    	cout<<1<<endl;
    }
    else
    {
    	if(maxp%(minp+1)==0)
    	{
    		cout<<maxp/(minp+1)<<endl;
    	}
    	else
    	cout<<maxp/(minp+1)+1<<endl;
    }
    cin>>x>>y;
     
    }
    // your code goes here
    return 0;
    }
