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
		int m, a, b, c;
		cin >> m >> a >> b >> c;

		int result = 0;
		if (a >= m) 
			result += m;
		else {
			result += a;
			if (c <= (m - a)) {
				result += c;
				c = 0;
			}
			else {
				c -= m - a;
				result += m - a;
			}
		}

        if (b >= m) 
            result += m;
        else {
            result += b;
            if (c <= (m - b))
                result += c;
            else {
                result += m - b;
            }
        }

		cout << result << endl;

	}

	return 0;
}

