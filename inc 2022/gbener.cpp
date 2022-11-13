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
    ll n, p;
    ll x1, x2;
    ll dp[2][n + 5];

    memset(dp, 0, sizeof(dp));
    cin >> n >> p;
    dp[0][0] = dp[1][0] = p;
    char c1, c2;
    ll ans = 0;
    for (int i = 1;i <= n;i++) {
        scanf("%c %lld %c %lld", &c1, &x1, &c2, &x2);
        ll right, left;
        if (c1 == 'x') {
            left = max(dp[0][i - 1] * x1, dp[1][i - 1] * x1);
        }
        else {
            left = max(dp[0][i - 1] + x1, dp[1][i - 1] + x1);
        }

        if (c2 == 'x') {
            right = max(dp[0][i - 1] * x2, dp[i][i - 1] * x2);
        }
        else {
            right = max(dp[0][i - 1] + x2, dp[i][i - 1] + x2);
        }

        dp[0][i] = left;
        dp[1][i] = right;
    }

    //    for(int i=0;i<=n;i++){
    //        cout<<dp[0][i]<<" "<<dp[1][i]<<"\n";
    //    }

    ans = max(dp[0][n], dp[1][n]);

    cout << ans << "\n";
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