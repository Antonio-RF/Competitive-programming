#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
using namespace boost::multiprecision;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    cpp_int numero;
    cin >> numero;

    while (numero != -1) {
        if (numero == 0) {
            cout << "0" << endl;
        } else {
            cout << numero - 1 << endl;
        }

        cin >> numero;
    }
	}

