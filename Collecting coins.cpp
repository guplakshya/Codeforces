#include <bits/stdc++.h>
using namespace std;

// Collecting Coins

int main() {
    int t;
    cin>>t;
    while (t--) {
        int a, b, c, d;
        cin>>a>>b>>c>>d;
        int sum = a + b + c + d;
        if (sum % 3 == 0) {
            int avg = sum / 3;
            if (a <= avg && b <= avg && c <= avg) 
				printf("YES\n");
            else 
				printf("NO\n");
        } 
		else
			printf("NO\n");
    }
    return 0;
}
