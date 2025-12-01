#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define pb push_back
#define MAXIMO LLONG_MAX
#define MINIMO LLONG_MIN
typedef long long ll;

const int INF = 0X3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;

void solution() {
    ll n;
    cin >> n;

    vector<string> v = {"Abigail","Sebastian", "Penny", "Sam", "Leah", "Harvey", "Haley", "Maru", "Alex", "Emily"};
    map<string, ll> chaves;
    chaves["Abigail"] = 0;
    chaves["Sebastian"] = 0;
    chaves["Penny"] = 0;
    chaves["Sam"] = 0;
    chaves["Leah"] = 0;
    chaves["Harvey"] = 0;
    chaves["Haley"] = 0;
    chaves["Maru"] = 0;
    chaves["Alex"] = 0;
    chaves["Emily"] = 0;


    for (int i=0 ; i<n ; i++) {
        string k;
        ll num;
        cin >> k >> num;
        chaves[k] += num;
    }
    for (int i=0 ; i<v.size() ; i++) {
        ll res = (chaves[v[i]] / 250);
        if (res != 0 && res <= 8)
            cout << v[i] << " " << res << endl;
        else if (res != 0 && res >= 8)
            cout << v[i] << " " << 8 << endl;
    }


}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    solution();
}