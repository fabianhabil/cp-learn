#include <algorithm>
#include <bitset>
#include <cstdlib>
#include <deque>
#include <iostream>
#include <iterator>
#include <map>
#include <set>
#include <stack>
#include <stack>
#include <string>
#include <utility>
#include <vector>
using namespace std;

int main() {

    int T = 0, Q = 0;
    string S;

    vector<int> ans;

    cin >> T;

    cin >> S;

    cin >> Q;

    int DO = 0, P = 0, X = 0, K = 0;

    for (int i = 0; i < Q; i++)
    {
        cin >> DO;
        int LOST = 0;
        if (DO == 1) {
            cin >> P;
            S[P - 1] = '1';
        }
        else if (DO == 2)
        {
            cin >> P;
            S[P - 1] = '0';
        }
        else if (DO == 3)
        {
            cin >> X >> K;
            for (int j = X - 1; j < S.size(); j += K)
            {
                // cout <<"j:"<< j << endl;
                if (S[j] == '0')
                {
                    LOST++;
                }
            }
            ans.push_back(LOST);
        }
        if (LOST != 0) cout << LOST << endl;
    }
}