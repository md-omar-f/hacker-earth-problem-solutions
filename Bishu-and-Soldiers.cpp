#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

const int N=10010;
int s[N];
int n,q,p;

void solve(){
	int y=0,z=0;
	for(int i=0;i<n;++i){
		if(p>=s[i]){
			++y;
			z+=s[i];
		}
	}
	cout<<y<<" "<<z<<endl;
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
		cin>>s[i];
	}
	cin>>q;
	while(q--){
		cin>>p;
		solve();
	}
	
	return 0;
}