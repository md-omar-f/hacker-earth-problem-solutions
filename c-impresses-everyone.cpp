#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

const int N=1000000;
int n,q;
int a[N];

void solve(int b){
	int sum=0;
	for(int i=n-1;i>=0;--i){
		sum+=a[i];
		if(sum>=b){
			if(i&1){
				cout<<'B'<<endl;
				return;
			}else{
				cout<<'A'<<endl;
				return;
			}
		}
	}
}

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>n;
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	cin>>q;
	while(q--){
		int b;
		cin>>b;
		solve(b);
	}
	
	return 0;
}