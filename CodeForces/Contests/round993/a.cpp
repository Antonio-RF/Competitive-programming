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
		int n;
		cin >> n;

		int result = 0;
		int b = 1;
		while (true) {
			int a;
			a = n - b;

			if (a<=0) break;

			result++;
			b++;
		}

		cout << result << endl;
	}

}

