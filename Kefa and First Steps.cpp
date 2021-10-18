#include <bits/stdc++.h>
using namespace std;

// Kefa and First Steps

int main(){
	int n,i;
	cin>>n;
	int max=0,cnt=1;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	 for(i=0; i<n-1; i++)
    {
        if(a[i]>a[i+1])
        {
            if(cnt>max){
                max=cnt;
            }
            cnt=1;
        }
        else
        cnt++;
    }
    if(cnt>max)
        max=cnt;
    cout<<max;	
	return 0;
}
