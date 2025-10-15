#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, i) for (int i = a; i <= b; i++)
#define FORR(b, a, i) for (int i = b; i >= a; i--)
#define ll long long
#define sp ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define mainCode int main()

class SmallestInfiniteSet {
private:
    priority_queue<int, int, vector<int>>pq;
public:
    SmallestInfiniteSet() {
        for (int i = 1; i <= 1000; i++) {
            pq.push(i);
        }
    }
    
    int popSmallest() {
        int value  = pq.top();
        pq.pop();
        return value;
    }
    
    void addBack(int num) {
        pq.push(num);   
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */

mainCode {
    sp;
   
}