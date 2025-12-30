#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        long long A,B;
        cin>>A>>B;
        
        long long evenpairs=(A/2)*(B/2);
        long long oddpairs=((A-(A/2))*(B-(B/2)));
        
        cout<<evenpairs + oddpairs<<endl;
    }
    return 0;
}