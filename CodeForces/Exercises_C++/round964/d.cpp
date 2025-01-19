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
	
	int qntd;
	cin >> qntd;
	while (qntd--) {
		
		string palavra1, palavra2;
		cin >> palavra1;
		cin >> palavra2;
		
		int count = 0;
		bool deu = false;
		for (int i = 0 ; i < palavra1.size() ; i++) {
			if (count < palavra2.size()) {
				if (palavra1[i] == palavra2[count] || palavra1[i] == '?') {
					deu = true;
					palavra1[i] = palavra2[count];
					count++;
					if (count < palavra2.size()) deu = false;
					// if (count > palavra2.size()) break;
				}
			}
			else {
				if (palavra1[i] == '?') palavra1[i] = 'a';
			}
		}
		
		if (deu) {
			cout << "YES\n";
			cout << palavra1 << "\n";
		}
		else cout << "NO\n";
	}	

	
	return 0;
}

