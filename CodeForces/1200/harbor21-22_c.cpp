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

void solution(){
    ll t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int t1=0, t2=0;
        int tin=0;
        vector<int> v;
        for (int i=0 ; i<10 ; i++) {
            if (i%2==0 && s[i]=='1') t1++;
            if (i%2!=0 && s[i]=='1') t2++;

            if (s[i]=='?') {
                tin++;
                v.pb(i);
            }
        }

        int ans=10;
        for (int j=0 ; j< (1<<tin) ; j++) {
            ll temp1=0, temp2=0;
            string temp=s;
            for (int i=0 ; i<tin ; i++) {
                if (bool(j & (1<<i))) {
                    temp[v[i]]='1';
                }
                else temp[v[i]]='0';
            }
            
            for (int i=0 ; i<10 ; i++) {

                if (i%2==0 && temp[i]=='1') temp1++;
                if (i%2!=0 && temp[i]=='1') temp2++;
                
                ll pos2;
                if (i%2==1) pos2 = (9-i)/2;
                else pos2 = ((9-i)/2)+1;
    
                ll pos1 = (9-i)/2;

                if ((temp1 > temp2+pos2) || (temp2 > temp1+pos1)) {
                        ans = min(ans, i+1);
                        break;
                }
            }

        }

        cout << ans << endl;


    }
}
 
int main() {
    IO io;
	solution();
	return 0;
}


