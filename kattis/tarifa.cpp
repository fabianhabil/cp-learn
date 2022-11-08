#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int kuota, tc;
    cin >> kuota; 
    int sekarang = kuota;
    cin >> tc;
    for(int i = 0; i < tc; i++){
        int x; cin >> x;
        sekarang = sekarang + kuota;
        sekarang = sekarang - x;
    }
    cout << sekarang;
}