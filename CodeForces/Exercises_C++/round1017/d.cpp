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
	while(t--) {
		string p, s;
		cin >> p >> s;
		bool control = true;

		int i = 0;
		int j = 0;
		while (i < p.size() or j < s.size()) {
			if (i == p.size() or j == s.size() or p[0] != s[0]) {
				cout << "NO" << endl;
				control = false;
				break;
			}

			int st1 = i, st2 = j;
			while (i < p.size() and p[i] == p[st1])
				i++;
			while (j < s.size() and s[j] == s[st2])
				j++;

			if (j-st2 < i-st1 or j-st2 > 2*(i-st1)) {
				cout << "NO" << endl;
				control = false;
				break;
			}
		}
		if (control)
			cout << "YES" << endl;
	}
	return 0;
}

