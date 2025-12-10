#include <bits/stdc++.h>
#define el cout << '\n'
#define L(i, a, b) for (int i = (a); i <= (b); i++)
#define R(i, a, b) for (int i = (a); i >= (b); i--)
#define gg(...) [](const auto&...x){ char c='='; cerr<<#__VA_ARGS__<<" ";((cerr<<exchange(c,',')<<" "<<x),...); cerr<<endl; }(__VA_ARGS__);
#define N (int)
using namespace std;
int n, q, p, a[100005];

int root(int i){
	while(a[i] != i)
	{
		i = a[i];
	}
	return i;
}

void Union(int q, int p){
	int i = root(q);
	int j = root(p);

	a[i] = j;
}

bool is_connection(int q, int p){
	return root(q) == root(p);
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    cin >> n;
    while(cin >> q >> p){
    	Union(q, p);
    }
    cout << is_connection(1, 0); el;
}