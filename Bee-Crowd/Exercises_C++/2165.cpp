#include <bits/stdc++.h>
using namespace std;

int main() {

    string frase;
    getline(cin, frase);

    int tamanho = frase.length();

    if (tamanho <= 140) {
        cout << "TWEET" << endl;
    }
    else {
        cout << "MUTE" << endl;
    }

}
