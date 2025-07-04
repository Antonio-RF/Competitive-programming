#include <bits/stdc++.h>
using namespace std;
 
 
#define endl '\n'
#define pb push_back
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
 
	int t;
	cin >> t; 
	while(t--){
		string s;
		cin >> s;

		int tam = s.size();
		if (tam > 1) {
			int i = 0;
			while(i != s.size()-1) {
				if (s[i] == s[i+1] and i != 0) {
					s[i] = s[i-1];
					s.erase(i+1);
					i = -1;
				}
				else if (s[i] == s[i+1] and i == 0) {
					if (s.size() >= 3) {
						s[i] = s[i+2];
						s.erase(i+1);
						i = -1;
					}
					else {
						s[i] = 'i';
						s.erase(i+1);
						i = -1;
					}
				}
				i++;
			}
		}

		cout << s.size() << endl;
	}


	return 0;
}

