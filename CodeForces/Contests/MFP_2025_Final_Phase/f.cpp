#include <bits/stdc++.h>
using namespace std;
 
// Tipos básicos
using ll = long long;
using ull = unsigned long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vi = vector<int>;
using vll = vector<ll>;
 
// Constantes comuns
const int INF = 1e9+7;
const ll LINF = 1e18;
const int MOD = 1e9+7;
 
// Direções para grafos/grelhas
const int dx4[4] = {-1,0,1,0};
const int dy4[4] = {0,1,0,-1};
 
const int dx8[8] = {-1,-1,-1,0,0,1,1,1};
const int dy8[8] = {-1,0,1,-1,1,-1,0,1};
 
// Macros rápidos
#define all(x) (x).begin(),(x).end()
#define sz(x) ((int)(x).size())
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define mt make_tuple
#define f first
#define s second
#define endl '\n'
 
// Fast I/O
struct IO {
	IO() {
		ios::sync_with_stdio(false);
		cin.tie(nullptr);
	}
} io;
 
bool eh_letra(char k) {
    if (k=='a' || k=='b' || k=='c' || k=='d' || k=='e' || k=='f' || k=='g' || k=='h' || k=='i' || k=='j' || k=='k' || k=='l' || k=='m' || k=='n' || k=='o' || k=='p' || k=='q' || k=='r' || k=='s' || k=='t' || k=='u' || k=='v' || k=='w' || k=='x' || k=='y' || k=='z')
        return true;
    return false;
}

bool eh_digito(char k) {
    if (k=='0' || k=='1' || k=='2' || k=='3' || k=='4' || k=='5' || k=='6' || k=='7' || k=='8' || k=='9')
        return true;
    return false;
}
 
void solution(){
    ll t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;

        //Regra 1:
        if (s.size() <= 10) {
            cout << 'N' << endl;
            continue;
        }

        //Regra 2:
        bool letra=false, digito=false;
        for (int i=0 ; i<s.size() ; i++) {
            if (eh_digito(s[i])) digito = true;
            if (eh_letra(s[i])) letra = true;
            
            if (digito && letra) break;
        }
        if (!digito || !letra) {
            cout << "N" << endl;
            continue;
        }

        //Regra 3:
        bool achou_primeira_letra=false;
        ll count=0;
        bool dig_dps_let=false;
        while(!achou_primeira_letra) {
            if (eh_letra(s[count])) {
                achou_primeira_letra=true;
                for (int i=count ; i<s.size() ; i++) {
                    if (eh_digito(s[i])) {
                        dig_dps_let=true;
                        break;
                    }
                }
            }
            count++;
        }
        if (dig_dps_let) {
            cout << "N" << endl;
            continue;
        }

        //Regra 4:
        vector<char> letras;
        vector<char> digitos;
        for (int i=0 ; i<s.size() ; i++) {
            if (eh_digito(s[i])) digitos.pb(s[i]);
            else if (eh_letra(s[i])) letras.pb(s[i]);
        }
        vector<char> copial=letras;
        vector<char> copiad=digitos;
        sort(copial.begin(), copial.end());
        sort(copiad.begin(), copiad.end());


        if (letras!=copial || digitos!=copiad) {
            cout << "N" << endl;
            continue;
        }

        cout << "S" << endl;

    }
}
 
int main() {
    IO io;
	solution();
	return 0;
}