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
		int n,m,l,r,r1,l1;
		cin >> n >> m >> l >> r;
		r1 = r;
		l1 = l;
		while(((r1-l1) > m) and l1 < 0){
			l1++;
		}
		while(((r1-l1) > m) and r1 > 0){
			r1--;
		}
		while(((r1-l1) < m) and (l1 >= l)){
			l1--;
		}
		while(((r1-l1) < m) and (r1 <= r)){
			r1++;
		}
		if(l1 < l){
			l1++;
			r1++;
		}
		if(r1 > r){
			r1--;
			l1--;
		}
		cout << l1 << " "<< r1 << endl;
    }
	return 0;
}

