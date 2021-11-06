#include <bits/stdc++.h>
using namespace std;

// Stones on the Table

int main(){
	int n;
	char s[100];
	int count;
	cin>>n;
	cin>>s;
	for(int i=0;i<n-1;i++){
		if(s[i]==s[i+1])
			count++;
	}
	cout<<count;
	return 0;
}
