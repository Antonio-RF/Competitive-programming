#include <bits/stdc++.h>
using namespace std;
 
 
#define endl '\n'
#define pb push_back
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

void troca(string &a, int x, int y) {
	char temp = a[x];
	a[x] = a[y];
	a[y] = temp;
}
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		string a;
		cin >> a;

		int tam = a.size();
		for (int i=0 ; i<(tam/2) ; i++) {
			troca(a, i, tam-i-1);
		}
		for (int i=0 ; i<tam ; i++) {
			if (a[i] == 'q') a[i] = 'p';
			else if (a[i] == 'p') a[i] = 'q';
		}

		cout << a << endl;
	}

	
	return 0;
}

