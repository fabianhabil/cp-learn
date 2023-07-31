#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int pricesTemp = prices[0];
    int profit = 0;
    for (int i = 0; i < prices.size(); i++) {
        pricesTemp = min(prices[i], pricesTemp);
        profit = max(abs(pricesTemp - prices[i]), profit);
    }

    return profit;
}


int main() {
    vector <int> prices = { 7,6,4,3,1 };
    cout << maxProfit(prices);
}