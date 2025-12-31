#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    float N,M,z;
    cin>>N>>M;
    z=N/2;
    if(M>= round(z))
        cout<<"NEWBIE";
    else
        cout<<"PRO";
    return 0;
}