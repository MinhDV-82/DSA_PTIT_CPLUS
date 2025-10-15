#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct Point {
    ll x, y;
    int id;
};

ll manhattan_max_after_remove(vector<Point>& pts, int remove_id) {
    ll maxU = LLONG_MIN, minU = LLONG_MAX;
    ll maxV = LLONG_MIN, minV = LLONG_MAX;
    for (auto &p : pts) {
        if (p.id == remove_id) continue;
        ll u = p.x + p.y;
        ll v = p.x - p.y;
        maxU = max(maxU, u);
        minU = min(minU, u);
        maxV = max(maxV, v);
        minV = min(minV, v);
    }
    return max(maxU - minU, maxV - minV);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<Point> pts(N);
    for (int i = 0; i < N; i++) {
        cin >> pts[i].x >> pts[i].y;
        pts[i].id = i;
    }

    // tìm các điểm biên theo u và v
    vector<Point> cand;

    // theo u = x+y
    {
        auto cmpU = [](const Point& a, const Point& b) {
            return (a.x + a.y) < (b.x + b.y);
        };
        sort(pts.begin(), pts.end(), cmpU);
        cand.push_back(pts.front());
        cand.push_back(pts.back());
    }

    // theo v = x-y
    {
        auto cmpV = [](const Point& a, const Point& b) {
            return (a.x - a.y) < (b.x - b.y);
        };
        sort(pts.begin(), pts.end(), cmpV);
        cand.push_back(pts.front());
        cand.push_back(pts.back());
    }

    // loại trùng id
    sort(cand.begin(), cand.end(), [](auto &a, auto &b) {
        return a.id < b.id;
    });
    cand.erase(unique(cand.begin(), cand.end(), [](auto &a, auto &b) {
        return a.id == b.id;
    }), cand.end());

    // thử xóa từng ứng viên
    ll ans = LLONG_MAX;
    for (auto &p : cand) {
        ans = min(ans, manhattan_max_after_remove(pts, p.id));
    }

    cout << ans << "\n";
    return 0;
}

Trang trại của nông dân John được thắp sáng bởi hệ thống chiếu sáng với N cột điện. Để cung cấp điện cho hệ thống, anh ấy đã kết nối M đường dây điện trực tiếp giữa một số cột. Mỗi đường dây điện có khả năng chịu tải được W[i] bóng đèn. Người thợ điện đã lắp đúng và đủ W[i] bóng đèn một cách đều đặn trên mỗi đường dây.

Tuy nhiên, sau một thời gian, nông dân John thấy cách bố trí đèn như vậy không được đẹp cho lắm. Anh ấy muốn các bóng đèn chỉ tập trung ở phía cột đèn mà thôi. Trên mỗi đường dây, các bóng đèn trước kia phân bố đều trên đường dây, nay anh sẽ dồn về phía 2 cột đèn. Mục tiêu của anh là số lượng bóng đèn ở tất cả các cột phải bằng nhau và là nhiều nhất có thể. Vì thế, một số bóng đèn thừa sẽ phải tháo bỏ.

Các bạn hãy tính giúp xem anh John cần phải loại bỏ ít nhất bao nhiêu bóng đèn?

Input: 

Dòng đầu tiên chứa hai số nguyên N và M (N ≤ 200, M ≤ 500).

M dòng tiếp theo, mỗi dòng gồm 3 số nguyên u, v, W (1 ≤ u, v ≤ N, W ≤ 10000) cho biết một đường dây giữa cột thứ u và v đã có W bóng đèn. Input đảm bảo giữa 2 cột điện chỉ có 1 đường dây duy nhất.

Output: 

In ra một số nguyên là số bóng đèn ít nhất cần được loại bỏ.

Test ví dụ:

Input:

Output:

3 3

1 2 3

1 3 4

2 3 6

1

5 4

1 2 3

1 5 3

2 3 3

2 4 10

4


1