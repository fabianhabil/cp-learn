#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; int p; cin >> n >> p;
    int area = 0;
    while(p--){
        int w, h;
        cin >> w >> h;
        area += w*h;
    }
    cout << area;
}
