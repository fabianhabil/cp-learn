#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	set<string> word;
	bool dup = false;
	while (cin >> s){
		if (!word.count(s)) word.insert(s);
		else{
            dup = true;
            break;
        }
	}
	if (dup) cout << "no" << endl;
	else cout << "yes" << endl;
	return 0;
}
