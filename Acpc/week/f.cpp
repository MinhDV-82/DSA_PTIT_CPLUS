#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    vector<int> A(N), B(N);
    for (int i = 0; i < N; i++) cin >> A[i];
    for (int i = 0; i < N; i++) cin >> B[i];
    
    int total = accumulate(A.begin(), A.end(), 0);
    
    {
        vector<int> cap = B;
        sort(cap.begin(), cap.end(), greater<int>());
        int sumCap = 0;
        for (int i = 0; i < N; i++) {
            sumCap += cap[i];
            if (sumCap >= total) {
                cout << (i + 1) << " ";
                break;
            }
        }
    }
    
    int maxBsum = accumulate(B.begin(), B.end(), 0);
    int Kmin;
    {
        vector<int> cap = B;
        sort(cap.begin(), cap.end(), greater<int>());
        int sumCap = 0;
        for (int i = 0; i < N; i++) {
            sumCap += cap[i];
            if (sumCap >= total) {
                Kmin = i + 1;
                break;
            }
        }
    }
    

    vector<vector<int>> dp(maxBsum + 1, vector<int>(Kmin + 1, -1));
    dp[0][0] = 0;
    
    for (int i = 0; i < N; i++) {
        vector<vector<int>> new_dp = dp;
        for (int capa = 0; capa <= maxBsum; capa++) {
            for (int k = 0; k < Kmin; k++) {
                if (dp[capa][k] != -1) {
                    int nc = capa + B[i];
                    int nk = k + 1;
                    if (nc <= maxBsum && nk <= Kmin) {
                        new_dp[nc][nk] = max(new_dp[nc][nk], dp[capa][k] + A[i]);
                    }
                }
            }
        }
        dp.swap(new_dp);
    }
    
    int best_keep = 0;
    for (int capa = total; capa <= maxBsum; capa++) {
        if (dp[capa][Kmin] != -1) {
            best_keep = max(best_keep, dp[capa][Kmin]);
        }
    }
    
    int T = total - best_keep;
    cout << T << "\n";
    return 0;
}
