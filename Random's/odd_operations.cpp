#include <bits/stdc++.h>
using namespace std;

bool hasOddDigit(int n) {
    while (n > 0) {
        if ((n % 10) % 2 == 1) return true;
        n /= 10;
    }
    return false;
}

int largestDigit(int n) {
    int mx = 0;
    while (n > 0) {
        mx = max(mx, n % 10);
        n /= 10;
    }
    return mx;
}

int main() {
	// your code goes here

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;

        if (N % 2 == 1) {
            cout << 0 << "\n";
            continue;
        }

        int ops = 0;

        while (N > 0 && N % 2 == 0) {
            if (hasOddDigit(N)) {
                ops++;
                break;
            }
            int d = largestDigit(N);
            N -= d;
            ops++;
        }

        if (N == 0)
            cout << -1 << "\n";
        else
            cout << ops << "\n";
    }
    return 0;
}
