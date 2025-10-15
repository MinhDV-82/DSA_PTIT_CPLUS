#include <bits/stdc++.h>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    double s = a + b + c;

    double result = ((100.0 - a) * a / s) + 
                    ((100.0 - b) * b / s) + 
                    ((100.0 - c) * c / s);

    cout << fixed << setprecision(6) << result;
    return 0;
}
