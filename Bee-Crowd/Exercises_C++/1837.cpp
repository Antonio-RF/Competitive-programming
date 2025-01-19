#include <bits/stdc++.h>
using namespace std;

int main() {

	int a,b;
	cin >> a >> b;

	int quociente;
	quociente = a / b;

	int resto;
	resto = (a % b);
	if (resto < 0 && b > 0) {
		resto += b;
		quociente--;
	}
	else if (resto < 0 && b < 0){
		resto -= b;
		quociente++;
	}

	
	cout << quociente << " " << resto << endl;
}
