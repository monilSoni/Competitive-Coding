
/* Monil Soni sonil06 */
/* DA-IICT  */

#include <bits/stdc++.h>
#include <unistd.h>

using namespace std;

typedef long long LL;
typedef vector<int> vi;
typedef vector<long long> vl;

#define MOD 1000000007
#define rep(i,s,n) for(int i=s; i<n; i++)
#define repp(i,s,n) for(int i=s; i<=n; i++)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()

int main(){
	int a, b, x;
	scanf("%d %d %d",&a,&b,&x);
	vector<string> v(x+1);
	bool bI;
	int bc=0, ac=0;
	(b>a)?(bI=true):(bI=false);
	for(int i=0; i<x+1; i++){
		if(bI){
			v[i]="1";
			bc++;
			bI=false;
		}else{
			v[i]="0";
			ac++;
			bI=true;
		}
	}

	int i=0;
	while(bc<b){
		if(v[i].find("0")!=string::npos) i++;
		v[i]+="1";
		bc++;
	} i=0;
	while(ac<a){
		if(v[i].find("1")!=string::npos) i++;
		v[i]+="0";
		ac++;
	}

	string result = "";
	for(int i=0; i<v.size(); i++){
		result+=v[i];
	}
	reverse(result.begin(), result.end());
	cout << result << "\n";
	return 0;
}
