#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    int tc, x, sum = 0;
    cin >> tc;
    for(int i = 0; i < tc; i++){
        cin >> x;
        sum += pow(x/10, x%10);
    }
    cout << sum;
}
