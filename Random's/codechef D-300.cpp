#include<iostream>
using namespace std;

int main(){
	
	int N,M,A,B;
	cin>>N>>M>>A>>B;
	int buy=N*M;
	int sell=A*B;
	cout<<sell-buy;
return 0;
}
