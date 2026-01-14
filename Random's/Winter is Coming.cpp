#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
   int T;
    cin >> T;
    while (T--) {
        int N, A, B;
        cin >> N >> A >> B;

        vector<int> temp(N);
        for (int i = 0; i < N; i++) {
            cin >> temp[i];
        }

        bool wearing = false;
        int count = 0;

        for (int i = 0; i < N; i++) {
            if (temp[i] < A) {
                if (!wearing) {
                    wearing = true;
                    count++;
                }
            } 
            else if (temp[i] > B) {
                if (wearing) {
                    wearing = false;
                }
            }
        }

        cout << count << "\n";
    }
}
