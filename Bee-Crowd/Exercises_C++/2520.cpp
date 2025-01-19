#include <bits/stdc++.h>
using namespace std;

int main() {

	int i,j;
	while(cin >> i >> j) {

	int guardar_i1, guardar_i2, guardar_j1, guardar_j2;
	guardar_i1 = -1; guardar_i2 = -1; guardar_j1 = -1; guardar_j2 = -1;
	int matriz[i][j];
	for (int k=0 ; k<i ; k++) {
		for (int o=0 ; o<j ; o++) {
			cin >> matriz[k][o];

			if (matriz[k][o] == 1) {
				guardar_i1 = k;
				guardar_j1 = o;
			}
			if (matriz[k][o] == 2) {
				guardar_i2 = k;
				guardar_j2 = o;
			}
		}
	}
	
	int resultado;
	resultado = abs(guardar_i1 - guardar_i2) + abs(guardar_j1 - guardar_j2);
	cout << resultado << endl;
}
}
