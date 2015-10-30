#include <bits/stdc++.h>
using namespace std;

int main() {

	int T; 
	scanf("%d", &T);

	while (T--) {
		double a, b, c, d;
		cin>>a>>b>>c>>d;
		double s = (a+b+c+d) / 2;
		double res = sqrt((s-a)*(s-b)*(s-c)*(s-d));
		printf("%.2lf\n", res);
	}
return 0;
}
