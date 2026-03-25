#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, K;
    while (cin >> N >> K) {
        vector<int> a(N);
        for (int i = 0; i < N; ++i) {
            cin >> a[i];
        }

        vector<int> res(N);
        if (K == 0) {
            for (int i = 0; i < N; ++i) res[i] = 0;
        }
        else {
            int m = abs(K);
            for (int i = 0; i < N; ++i) {
                int sum = 0;
                if (K > 0) {
                    for (int j = 1; j <= m; ++j) {
                        int pos = (i + j) % N;
                        sum += a[pos];
                    }
                }
                else {
                    for (int j = 1; j <= m; ++j) {
                        int pos = (i - j + N) % N;
                        sum += a[pos];
                    }
                }
                res[i] = sum;
            }
        }
        for (int i = 0; i < N; ++i) {
            if (i > 0) cout << " ";
            cout << res[i];
        }
        cout << endl;
    }
    return 0;
}