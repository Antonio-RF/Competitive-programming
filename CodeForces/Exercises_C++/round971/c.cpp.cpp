#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
	int qntd;
	cin >> qntd;
	while (qntd--) {
		int x,y,pulo;
		cin >> x >> y >> pulo;
		
		int resultadox, resultadoy;
 
		resultadoy = ((y+pulo-1) / pulo);
		resultadox = ((x+pulo-1) / pulo);
		
		if (resultadoy >= resultadox) {
			cout << resultadoy*2 << "\n";
		}
		else {
			cout << (resultadox*2)-1 << "\n";
		}
 
	}
 
    return 0;
}