#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		string linhas[n];
		for (int i=0 ; i<n ; i++) {
			cin >> linhas[i];
		}
		bool triangulo = true;
		for (int j=0 ; j<n ; j++) {
			bool foi = false;
			for (int k=0 ; k<n ; k++) {
				if (linhas[j][k] == '1') {
					if (linhas[j][k+1] == '1' && linhas[j+1][k] == '1') {
						triangulo = false;
						foi = true;
						break;
					}
					else {
						foi = true;
						break;
					}
				}
			}
			if (foi)
				break;
		}
		if (triangulo)
			cout << "TRIANGLE" << endl;
		else
			cout << "SQUARE" << endl;
	}


    return 0;
}


