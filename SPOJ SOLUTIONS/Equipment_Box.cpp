#include <bits/stdc++.h>
using namespace std;
bool rectest(double x,double y,double w,double h)
{
		if(x>=y)swap(x,y);
		if(w>=h)swap(w,h);
		if(w<=x)return false;
		if(y<h && x<w)return true;
		double d_w=(double)w,d_h=(double)h,d_x=(double)x,d_y=(double)y;
		double temp;
		temp = (2.0*d_x*d_y*d_h + (d_y*d_y - d_x*d_x)*(sqrt(d_x*d_x + d_y*d_y - d_h*d_h )));
		temp = temp / (d_x*d_x + d_y*d_y);
		return ((w-temp)>0.0000001);
}


int main() {
	double x,y,w,h;
	int T;
	cin>>T;
	while(T--)
	{
	cin>>w>>h>>x>>y;
	if(rectest(x,y,w,h))
	cout<<"Escape is possible."<<endl;
	else
	cout<<"Box cannot be dropped."<<endl;
	
	}
	// your code goes here
	return 0;
}
