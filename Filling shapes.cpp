#include <bits/stdc++.h>
using namespace std;

// Filling Shapes

int main(){
	int n;
	cin>>n;
	if (n & 1)
    	cout << 0 << endl;
  	else 
    	cout << (1l<<(n/2)) << endl;
	return 0;
}
