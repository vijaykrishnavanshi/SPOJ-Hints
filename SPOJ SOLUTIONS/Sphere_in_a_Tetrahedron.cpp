#include <bits/stdc++.h>
using namespace std;
int main(){
 int T;
 double W, U, V, w, u, v;
 long double volume, Surface, radius;
 cin>>T;
 while(T--){
  cin>>u>>v>>w>>W>>V>>U;
  volume=sqrt(4*u*u*w*w*v*v-u*u*pow((long double)(v*v+w*w-U*U), 2)-v*v*pow((long double)(w*w+u*u-V*V), 2)-w*w*pow((long double)(u*u+v*v-W*W), 2)+(v*v+w*w-U*U)*(w*w+u*u-V*V)*(u*u+v*v-W*W))/12;
  Surface=0;
  Surface+=sqrt((U+V+W)*(W+V-U)*(U+W-V)*(U+V-W))/4;
  Surface+=sqrt((U+v+w)*(U+v-w)*(U+w-v)*(v+w-U))/4;
  Surface+=sqrt((u+v+W)*(u+v-W)*(u+W-v)*(W+v-u))/4;
  Surface+=sqrt((u+w+V)*(u+w-V)*(u+V-w)*(w+V-u))/4;
  radius=3*volume/Surface;
  printf("%.4Lf\n", radius);
 }
 return 0;
}
