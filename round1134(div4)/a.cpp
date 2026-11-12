#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
 
int main() {
    int x; 
    cin >> x;
    vector<int> arr(3);
    while (cin >> arr[0] >> arr[1] >> arr[2]) {
        sort(arr.begin(), arr.end());
        if (arr[2] - arr[1] == arr[1] - arr[0] && arr[2] - arr[1] == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}