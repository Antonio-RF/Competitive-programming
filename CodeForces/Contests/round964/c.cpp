#include <bits/stdc++.h>
using namespace std;
 
 
#define endl '\n'
#define pb push_back
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

void solve () {
	int n,s,m;
	cin >> n >> s >> m;
	array<int,2>q[n+1];
	
	for (int i=1 ; i<=n ; i++) {
		int l,r;
		cin >> l >> r;
		q[i][0]=l;
		q[i][1]=r;
	}
 
	q[n+1][0]=q[n+1][1]=m;
	sort(q+1, q+n+2);
 
	int pre=0;
	for (int i=1 ; i<=n+1 ; i++) {
		if(q[i][0]-pre >= s) {
			cout << "YES\n";
			return;
		}
		pre=q[i][1];
	}
	cout << "NO\n";
 
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
		
	int qntd;
	cin >> qntd;
	while (qntd--) {
		solve();
	}

	
	return 0;
}

