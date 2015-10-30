#include<iostream>
using namespace std;
 
#define MAX 500
 
int multiply(int x, int res[], int ressize);
 
void vij(int n)
{
    int res[MAX];
 
    res[0] = 1;
    int ressize = 1;
 
    for (int x=2; x<=n; x++)
        ressize = multiply(x, res, ressize);
    for (int i=ressize-1; i>=0; i--)
        cout << res[i];
}
 

int multiply(int x, int res[], int ressize)
{
    int carry = 0;  
 
    for (int i=0; i<ressize; i++)
    {
        int prod = res[i] * x + carry;
        res[i] = prod % 10;  
        carry  = prod/10;    
    }
 
    while (carry)
    {
        res[ressize] = carry%10;
        carry = carry/10;
        ressize++;
    }
    return ressize;
}
 
int main()
{
	int N,A;
	cin>>N;
	for(int i=0;i<N;i++)
	{cin>>A;
    vij(A);
    cout<<endl;}
    return 0;
}
