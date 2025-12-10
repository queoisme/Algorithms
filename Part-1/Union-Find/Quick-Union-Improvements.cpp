#include <bits/stdc++.h>
#define el cout << '\n'
#define L(i, a, b) for (int i = (a); i <= (b); i++)
#define R(i, a, b) for (int i = (a); i >= (b); i--)
#define gg(...) [](const auto&...x){ char c='='; cerr<<#__VA_ARGS__<<" ";((cerr<<exchange(c,',')<<" "<<x),...); cerr<<endl; }(__VA_ARGS__);
#define N (int)
using namespace std;
int n, q, p, a[100005], s[100005];

int Root(int i){
	//2 pass
	int root = i;
	while(root != a[root]){
		root = a[root];
	}
	while(i != root){
		int next = a[i];
		// cout << next << ' ' << a[i] << ' ' << i; el;
		a[i] = root;
		i = next;
	}
	return root;
}

void Union(int q, int p){
	int i = Root(q), j = Root(p);

	if(q == p) return;

	if(s[i] >= s[j]){
		a[j] = i;
		s[i] += s[j];
	}
	else{
		a[i] = j;
		s[j] += s[i];
	}
}
bool is_connection(int q, int p){
	return Root(q) == Root(p);
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    cin >> n;
    L(i, 0, n - 1){
    	a[i] = i;
    	s[i] = 1;
    }
    while(cin >> q >> p){
    	Union(q, p);
    }
    L(i, 0, n - 1) cout << a[i] << ' ';
}