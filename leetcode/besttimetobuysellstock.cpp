#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int buy = prices[0];
    int profit = 0;
    for (int i = 0; i < prices.size(); i++) {
        buy = min(buy, prices[i]);
        profit = max(profit, prices[i] - buy);
    }
    return profit;
}

int main() {
    vector<int> prices = { 7,6,4,3,1 };
    cout << maxProfit(prices);
}