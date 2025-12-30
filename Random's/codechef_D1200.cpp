#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while (t--){
	    int n;
	    long long k;
	    cin>>n>>k;
	    
	    vector<long long>p(n);
	    for(int i=0;i<n;i++){
	        cin>>p[i];
	    }
	    
	    long long minMoves= LLONG_MAX;
	    long long answer= -1;
	    
	    for(int i=0;i<n;i++){
	        if(p[i]>k) continue;
	        
	        if(k%p[i]==0){
	            long long moves=(k/p[i])-1;
	            
	            if(moves<minMoves){
	                minMoves=moves;
	                answer=p[i];
	            }
	        }
	            
	    }
	    cout<<answer<<endl;
	   	}
    return 0;
}
