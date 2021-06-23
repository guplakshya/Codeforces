#include <bits/stdc++.h>
using namespace std;

// Candies

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=4;i<=n+1;i*=2){
			if(n%(i-1) == 0){
				printf("%d\n",n/(i-1));
				break;
			}
		}
	}
	return 0;
}
