#include <bits/stdc++.h>
using namespace std;

// Integer Sequencing Problem

int main(){
	long long n;
  	cin >> n;
  	long long ans = n * (n + 1) / 2;
  	cout << ans % 2 << endl;
	return 0;
}
