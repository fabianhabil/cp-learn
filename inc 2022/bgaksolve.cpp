#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define MAX 1000007
#define INF (int)1e9
#define pb push_back
using namespace std;

const int mx = (int)1e3 + 7;
const ll MOD = 1e9 + 7;

int dx[] = { 0, 0, -1, 1 };
int dy[] = { -1, 1, 0, 0 };


void solve() {
    int n;

    cin >> n;
    int t[n];
    for (int i = 0;i < n - 1;i++) {
        cin >> t[i];
    }
    int a[n];
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }
    int b[n];
    for (int i = 0;i < n;i++) {
        cin >> b[i];
    }

    int cost = 0;
    for (int i = n - 1;i > 0;i--) {
        if (b[i] > a[i]) {
            cost += (t[i - 1] * (b[i] - a[i]));
            a[i - 1] -= (b[i] - a[i]);
        }
    }


    if (a[0] - b[0] >= 0) {
        cout << cost << "\n";
    }
    else {
        cout << -1 << "\n";
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    //    cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}