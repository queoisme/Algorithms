#include <bits/stdc++.h>
#define el cout << '\n'
#define L(i, a, b) for (int i = (a); i <= (b); i++)
#define R(i, a, b) for (int i = (a); i >= (b); i--)
#define gg(...) [](const auto&...x){ char c='='; cerr<<#__VA_ARGS__<<" ";((cerr<<exchange(c,',')<<" "<<x),...); cerr<<endl; }(__VA_ARGS__);
#define N (int)
using namespace std;
int n, q, p, a[100005];

bool is_connection(int q, int p){
	return q == p;
} 

void Union(int q, int p){
	int qid = a[q], pid = a[p];
	L(i, 0, n - 1){
		if(a[i] == qid){
			a[i] = pid;
		}
	}
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    cin >> n;
   	L(i, 0, n - 1) a[i] = i;
    while(cin >> q >> p)
    {
    	Union(q, p);
    }
    L(i,0, n - 1) cout << a[i] << ' ';
}