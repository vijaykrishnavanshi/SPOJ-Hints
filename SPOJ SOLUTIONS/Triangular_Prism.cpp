#include<bits/stdc++.h>
int main()
{
    double A,ans;
    int T;
     scanf("%d",&T);
    while(T--)
    {
        scanf("%lf",&A);
        ans=3.0*sqrt(3.0)*0.5*pow((16.0*A*A),(1/3.0));
        printf("%.10lf\n",ans);
    }
return 0;
}
