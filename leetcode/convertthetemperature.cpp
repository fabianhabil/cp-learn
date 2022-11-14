#include <bits/stdc++.h>
using namespace std;

vector <double> convertTemperature(double celsius) {
    vector<double> answer;
    answer.push_back(celsius + 273.15);
    answer.push_back(celsius * 1.80 + 32.00);
    return answer;
}


int main() {
    double celsius = 36.50;
    vector <double> answer = convertTemperature(celsius);

    for (auto x : answer) {
        cout << x << " ";
    }
}