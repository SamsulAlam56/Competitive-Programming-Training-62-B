#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<long long> p(n);
    p[0] = a[0];
    for(int i = 1; i < n; i++) {
        p[i]=p[i - 1] + a[i];
    }

    cout << "Prefix sum array: " << endl;
    for(int i = 0; i < n; i++) {
        cout << p[i] << " ";
    }
    cout << endl;

    return 0;
}
