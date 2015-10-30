#include<bits/stdc++.h>
#define ROOT3 1.7320508075688772935274463
using namespace std ;
int main( )
{
int T ;
double Area , A , B , C , semi ;
scanf("%d",&T) ;
while( T-- )
{
scanf("%lf %lf %lf",&A,&B,&C) ;
Area = ( ROOT3 * ( A * A + B * B + C * C ) ) / 8 ;
semi = ( A + B + C ) / 2 ;
Area += ( 1.5 * sqrt( semi * ( semi - A ) * ( semi - B ) * ( semi - C ) ) ) ;
printf("%0.2lf\n",Area) ;
}
return 0 ;
}
