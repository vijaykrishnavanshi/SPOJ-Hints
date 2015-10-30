#include <bits/stdc++.h>
using namespace std;

int main()
{
int i,j,k,l,n,m,T;
cin>>T;
double u,v,w,U,V,W,Vol,res,b=12;
while(T--)
{
	cin>>u>>v>>w>>W>>V>>U;
	res=4*(pow(u,2)*pow(v,2)*pow(w,2)) - pow(u,2)*pow((pow(v,2)+pow(w,2)-pow(U,2)),2) - pow(v,2)*pow((pow(w,2)+pow(u,2)-pow(V,2)),2) - pow(w,2)*pow((pow(u,2)+pow(v,2)-pow(W,2)),2) + (pow(v,2)+pow(w,2)-pow(U,2))*(pow(w,2)+pow(u,2)-pow(V,2))*(pow(u,2)+pow(v,2)-pow(W,2));
	Vol=sqrt(res);
	Vol/=b;
	printf("%.4lf\n",Vol);
}
return 0;
}
