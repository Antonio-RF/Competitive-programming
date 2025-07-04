#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		
		int tamanho;
		tamanho = s.size();
		if (tamanho == 0)
			cout << "NO" << endl;
		else {
			int primeiro = s[0];
			bool n_igual = false;
			for (int i=1 ; i<tamanho ; i++) {
				if (primeiro != s[i]) {
					n_igual = true;
					s[0] = s[i];
					s[i] = primeiro;
					break;
				}
			}
			if (n_igual) {
				cout << "YES\n" << s << endl;
			}
			else 
				cout << "NO" << endl;
		}
	}
    return 0;
}


