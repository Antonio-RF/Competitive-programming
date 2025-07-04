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
	
	long long qntd;
    cin >> qntd;
    while (qntd--) {
		long long a1,a2,b1,b2;
		cin >> a1 >> a2 >> b1 >> b2;
 
		int resultado = 0;
 
		if ((compara(a1,b1) + compara(a2,b2)) > 0) resultado++;
 		if ((compara(a1,b2) + compara(a2,b1)) > 0) resultado++;
		if ((compara(a2,b1) + compara(a1,b2)) > 0) resultado++;
		if ((compara(a2,b2) + compara(a1,b1)) > 0) resultado++;
 
		cout << resultado << "\n";
 
	}	

	return 0;
}

