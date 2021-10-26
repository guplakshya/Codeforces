#include <bits/stdc++.h>
# define ll  long long
using namespace std;

ll n;
// Odd Divisor

int main(){
	int t;
    cin >> t;
    while (t--) {
        cin >> n;
        if (n & 1)
            cout << "YES" << endl;
        else {
            while (((n & 1) == 0) && n != 1) {
                n/=2;
            }
            if(n == 1)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }
	return 0;
}
