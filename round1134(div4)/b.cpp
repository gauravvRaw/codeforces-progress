#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

char opp(char a) {
    if (a == 'B') return 'R';
    else return 'B';
}

int main() {
    fastio;
    int x; 
    cin >> x;
    string s;
    int n;
    while (cin >> n >> s) {
        char curr = 'R';
        int i = 0;
        int count = 0;
        while(i < n) {
            if (curr != s[i]) count++;
            else curr = opp(curr); 
            i++;
        }
        cout << count << endl;
    }
}