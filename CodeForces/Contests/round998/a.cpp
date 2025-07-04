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
		int a1,a2,a4,a5;
		cin >> a1 >> a2 >> a4 >> a5;

		int a3_1 = a1 + a2;
		int a3_2 = a5 - a4;
		
		int temp1 = 0;
		if (a1 + a2 == a3_1) 
			temp1++;
		if (a2 + a3_1 == a4)
			temp1++;
		if (a3_1 + a4 == a5)
			temp1++;

		int temp2 = 0;
		if (a1 + a2 == a3_2)
            temp2++;
        if (a2 + a3_2 == a4)
            temp2++;
        if (a3_2 + a4 == a5)
            temp2++;

		if (temp1 >= temp2)
			cout << temp1 << endl;
		else
			cout << temp2 << endl;

	}


	return 0;
}

