#include <bits/stdc++.h>
using namespace std;
 
 
#define endl '\n'
#define pb push_back
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

long long destrinchar_menor(long long a) {
	long long contador_p3 = 1;
	while (a > 0) {
		contador_p3 *= 3;
		a /= 3;
	}
 
	return contador_p3;
}
 
long long destrinchar_elemento(long long k) {
	long long count = 0;
	while (k > 0) {
		count++;
		k /= 3;
	}
	return count;
 
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
    vector<int> original (2e5+15);
    for (int i = 0; i < 2e5+15; i++) {
    	original[i] = destrinchar_elemento(i);
    }
 
    vector<int> ps (2e5+15);
    for (int i = 1; i < 2e5+15; i++) {
    	ps[i] = ps[i-1] + original[i];
    }
 
	long long qntd;
	cin >> qntd;
	while (qntd--) {
		long long a,b;
		cin >> a >> b;
 
		long long copia_b;
		copia_b = b;
		b *= destrinchar_menor(a);
 
		long long count_total = 0;
		count_total += ps[copia_b-1] - ps[a-1];
		count_total += destrinchar_elemento(b);
 
		cout << count_total << "\n";
	}	

	return 0;
}

