#include <bits/stdc++.h>
using namespace std;

int mdc(int a, int c) {
	while (c != 0) {
		int temp = c;
		c = a % c;
		a = temp;
	}
	return a;
}

int mmc(int a, int c) {
    return (a * c) / mdc(a, c);
}

int main() {

    int a,b,c,d;
    cin >> a >> b >> c >> d;

    int n = -1;
	int mmc_ac = mmc(a, c);
    for (int i=a ; i < c+1 ; i+= mmc_ac) {

        if (i%b != 0) {
           if (d%i != 0) {
                n = i;
                break;
            }
        }
    }

    cout << n << endl;
}


