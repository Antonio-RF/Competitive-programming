#include <bits/stdc++.h>
using namespace std;

int main() {
    int qntd;
    cin >> qntd;
    string s, r;

    for (int c = 1; c <= qntd; ++c) {
        cin >> s >> r;
		
		if (s == r) {
			cout << "Caso #" << c << ": De novo!" << endl;
		}


        else if (s == "tesoura") {
            if (r == "papel" || r == "lagarto") {
                cout << "Caso #" << c << ": Bazinga!" << endl;
            } else {
                cout << "Caso #" << c << ": Raj trapaceou!" << endl;
            }
        } 

        else if (s == "papel") {
            if (r == "pedra" || r == "Spock") {
                cout << "Caso #" << c << ": Bazinga!" << endl;
            } else {
                cout << "Caso #" << c << ": Raj trapaceou!" << endl;
            }
        }

        else if (s == "pedra") {
            if (r == "lagarto" || r == "tesoura") {
                cout << "Caso #" << c << ": Bazinga!" << endl;
            } else {
                cout << "Caso #" << c << ": Raj trapaceou!" << endl;
            }
        }

        else if (s == "lagarto") {
            if (r == "papel" || r == "Spock") {
                cout << "Caso #" << c << ": Bazinga!" << endl;
            } else {
                cout << "Caso #" << c << ": Raj trapaceou!" << endl;
            }
        }

        else if (s == "Spock") {
            if (r == "tesoura" || r == "pedra") {
                cout << "Caso #" << c << ": Bazinga!" << endl;
            } else {
                cout << "Caso #" << c << ": Raj trapaceou!" << endl;
            }
        }
    }
    return 0;
}

