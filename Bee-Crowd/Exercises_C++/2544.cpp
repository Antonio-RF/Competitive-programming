#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
	
	double resultado, num, base;
	base = 2.0;
	while(cin >> num) {

	num = num * 1.0;

	resultado = log(num) / log(base);

	printf("%.0f\n", resultado);
	
	}
}
