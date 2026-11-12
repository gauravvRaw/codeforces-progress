#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int main() {
    fastio;
    int x; 
    cin >> x;
    int n;
    while(cin >> n) {
        vector<int> arr(n);
        for (int &i : arr) {
            cin >> i;
        }
        sort(arr.begin(), arr.end());
        vector<int> ans(n);
        int curr = 0; bool back = false;
        int count = 1;
        int backp = n - 1;
        ans[0] = arr[0]; 
        int frontp = 1;
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] == arr[i - 1]) {
                if (back == false) {ans[backp] = arr[i]; backp--; count++; back = true; }
                else { ans[frontp] = arr[i]; frontp++;}
            }
            else { back = false; count++; ans[frontp] = arr[i]; frontp++; } 
        }
        cout << count << endl;
        for (int &i : ans) {
            cout << i << " "; 
        }
        cout << endl;
    }
}
