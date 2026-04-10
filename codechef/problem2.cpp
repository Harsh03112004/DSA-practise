#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int N,X;
	    cin>>N>>X;
	    int subscription=(N+5)/6;
	    int total_cost=subscription*X;
	    cout<<total_cost<<endl;
	}
	return 0;
}
