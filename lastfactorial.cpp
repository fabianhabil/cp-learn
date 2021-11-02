#include <bits/stdc++.h>
using namespace std;

int factorial(int z){
    if(z == 0){
        return 1;
    }
    else{
        return z * factorial(z-1);
    }

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tc; cin >> tc;
    int x;
    while(tc--){
        int x;
        cin >> x;
        cout << factorial(x)%10 << "\n"; 
    }
}