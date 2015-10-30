#include<bits/stdc++.h>
using namespace std;

int main() {
	int N;
	
	cin>>N;
	while(N){
	vector <int> order(N);
	for(int i=0;i<N;i++)
	{
		cin>>order[i];
		
	}
	stack<int> line; int need = 1;
	bool state = true;
	for (int i = 0; i < order.size(); i++) {
		while (!line.empty() && line.top() == need) {
			need++;
			line.pop();
		}
	if (order[i] == need) {
		need++;
	} else if (!line.empty() && line.top() < order[i]) {
		state = false;
		break;
	} else {
		line.push(order[i]);
	}
}
if (state) cout << "yes" << "\n";
else cout << "no" << "\n";
	cin>>N;
	}
	// your code goes here
	return 0;
}
