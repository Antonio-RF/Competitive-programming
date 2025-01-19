#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {

	int xf,yf,xi,yi,vel_i,r1,r2;
	while(cin >> xf >> yf >> xi >> yi >> vel_i >> r1 >> r2) {

	double distancia;
	distancia = sqrt(pow((xi - xf), 2.0) + pow((yi - yf), 2.0)) + (vel_i * 1.5);

	if (distancia <= (r1 + r2)) {
		cout << "Y" << endl;
	}
	else {
		cout << "N" << endl;
	}
	
	}
}
