#include <bits/stdc++.h>
using namespace std;

int main() {
    string subs;
    while (cin >> subs) {
        int count_subs = 0;
        string gigante;
        cin >> gigante;

        size_t pos = gigante.find(subs);
        while (pos != string::npos) {
            count_subs++;
            pos = gigante.find(subs, pos + 1);
        }

        cout << count_subs << endl;
    }
}

