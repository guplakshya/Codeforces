#include <bits/stdc++.h>
using namespace std;

// Orac and Factors

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k,i;
		cin>>n>>k;
		for(i=2;i<=n;i++)
			if(n%i==0)
				break;
		n+=i,k--;
		n+=k*2;
		cout<<n<<endl;
	}
	return 0;
}
