#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
     int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        int r=y/x;
        if(y%x==0 && y/x<=n)
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
}
