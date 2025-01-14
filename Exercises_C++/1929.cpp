#include <bits/stdc++.h>
using namespace std;

int main() {

	int a,b,c,d;
	cin >> a >> b >> c >> d;

	bool triangulo;
	triangulo = false;

	if ((a + b) > c and (a + c) > b and (b + c) > a) {
		triangulo = true;
	}
	
	else if ((a + b) > d and (a + d) > b and (b + d) > a) {
        triangulo = true;
    }
	
	else if ((d + b) > c and (d + c) > b and (b + c) > d) {
        triangulo = true;
    }
	
	else if ((a + d) > c and (a + c) > d and (d + c) > a) {
        triangulo = true;
    }
	
	if (triangulo) {
		cout << "S" << endl;
	}
	else {
		cout << "N" << endl;
	}

}
