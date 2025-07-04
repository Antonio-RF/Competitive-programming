#include <bits/stdc++.h>
#include <vector>
using namespace std;
 
 
#define endl '\n'
#define pb push_back
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

void merge(vector<int> &v, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    std::vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; ++i) L[i] = v[left + i];
    for (int i = 0; i < n2; ++i) R[i] = v[mid + 1 + i];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            v[k] = L[i];
            i++;
        } else {
            v[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) v[k++] = L[i++];
    while (j < n2) v[k++] = R[j++];
}

void mergeSort(vector<int> &v, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(v, left, mid);
        mergeSort(v, mid + 1, right);
        merge(v, left, mid, right);
    }
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
 	
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;

		vector<int> v(n);

		for (auto it = v.begin() ; it != v.end() ; ++it) {
			cin >> *it;
		}

		mergeSort(v, 0, v.size()-1);
		
		int temp = 0;
		for (int i=0 ; i<v.size()-1 ; i++) {
			for (int j=i+1 ; j<v.size() ; j++) {
				if (v[i] + v[j] == k) {
					temp++;
					v.erase(v.begin()+j);
					j--;
					break;
				}
			}
		}
		
		cout << temp << endl;

	}


	return 0;
}

