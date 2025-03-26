#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

	int t;
	cin >> t;
	while(t--) {
		string c;
		cin >> c;
		int count_a = 0;
		int count_b = 0;
		for (int i=0 ; i<5 ; i++) {
			if (c[i] == 'A')
				count_a++;
			else
				count_b++;
		}
		if (count_a > count_b)
			cout << "A" << endl;
		else
			cout << "B" << endl;
	}


    return 0;
}


