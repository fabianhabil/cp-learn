#include <bits/stdc++.h>
using namespace std;

int main() {
    double odd;
    cin >> odd;
    printf("%.10f\n", 100 / odd);
    printf("%.10f\n", 100 / abs((100 - odd)));
}