#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin >> T;
    while (T--) {
        long long X, Y;
        cin >> X >> Y;
        if (2 * Y >= X)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
