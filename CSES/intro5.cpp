#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

	int n;
	cin >> n;
	int meio;
	if (n==1) {
		cout << 1 << endl;
		return 0;
	}
	if (n<=3) {
		cout << "NO SOLUTION" << endl;
		return 0;
	}

	if (n%2 != 0) {
		meio = (n+1)/2;
		for (int i=1 ; i<((n-1)/2)+1 ; i++) {
			cout << (meio+i) << " " << (meio-i) << " ";
		}
		cout << meio << endl;
	}
	else {
		meio = n/2;
		int i;
		for (i=1 ; i<((n-2)/2)+1 ; i++) {
			cout << (meio+i) << " " << (meio-i) << " ";
		}
		cout << (meio+i) << " " << meio << endl;
	}

    return 0;
}


