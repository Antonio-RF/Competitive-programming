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
		string binary;
		cin >> binary;
		
		int count = 0;
		for (int i=0 ; i<n ; i++) {
			if (binary[i] == '0')
				count++;
			else
				count--;
			for (int j=0 ; j<n ; j++) {
				if (binary[j] == '1')
					count++;
			}
		}

		cout << count << endl;
	}


    return 0;
}


