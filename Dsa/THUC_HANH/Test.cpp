#include <iostream>
#include <chrono>
using namespace std;

void tkns(vector<int>a, int x) {
    int l = 0, r = s.size() - 1;
    while (l <= r && x >= a[l] && x <= a[r])
    {
        if (a[l] == a[r]) {
            if (a[l] == x) return l;
            return -1; 
        }
        int p = l + (x - a[l]) * (r - l) / (a[r] - a[l]);
        if (a[p] > x) {
            r = p -1;
        }
        else if (a[p] < x) {
            l = p + 1;
        }
        else {
            return p;
        }
        /* code */
    }
    return -1;
    
} 

int main() {
    auto start = chrono::high_resolution_clock::now();
    double sum = 0;
    for (long long i = 0; i < 1e9; i++) sum += i * 0.0001;
    auto end = chrono::high_resolution_clock::now();
    cout << "Time: " 
         << chrono::duration<double>(end - start).count() 
         << "s\n";
}
