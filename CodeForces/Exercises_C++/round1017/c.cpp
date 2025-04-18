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
		int tam = 2 * n;
		int vector[tam];
		map <int, int> v;
 
		int input;
		for (int i=0 ; i<n ; i++) {
			for (int j=0 ; j<n ; j++) {
				cin >> input;
				if (i==0) {
					vector[i+j+1] = input;
					v[input] = 1;
				}
				if (i!=0 && j==(n-1)) {
					vector[i+j+1] = input;
					v[input] = 1;
				}
			}
		}
		for (int i=1 ; i<tam+1 ; i++) {
			if (v[i] == 0) {
				vector[0] = i;
				break;
			}
		}
		for (int k=0 ; k<tam ; k++) {
			cout << vector[k] << " ";
		}
		cout << endl;
	}



	return 0;
}

