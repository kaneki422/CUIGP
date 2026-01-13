#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(b>=a && b>=c){
            if((a<=b || a<=c)&&(c<=b || c<=a))
                cout<<"yes"<<endl;
        }
        else
            cout<<"no"<<endl;
            
    }
}