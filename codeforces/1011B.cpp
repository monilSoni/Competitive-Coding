
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
	int n, m, x;
	scanf("%d %d",&n,&m);
	vector<int> packages(101, 0);
	rep(i,0,m){
		scanf("%d",&x);
		packages[x]++;
	}
	int result = 0;
	for(x=m/n; x>0; x--){
		vector<int> temp(packages);
		int count = n;
		for(int i=1; i<101; i++){
			if(temp[i]>=x)
				count-=temp[i]/x;
		}
		if(count<=0){
			result = x;
			break;
		}
	}
	printf("%d\n", result);
	return 0;
}

/* Alternate mlogm solution 

   #include<bits/stdc++.h>
using namespace std;

const int maxn=110;
int n,m;
int a[maxn];
int num[maxn];
int cnt[maxn];

bool check(int mid)
{
	if (mid==0)	return true;
	int ans=0;
	for (int i=1;i<=m;i++)
		ans+=(cnt[i]/mid);
	return ans>=n;
}
int main()
{
	scanf("%d%d",&n,&m);
	int r=0;
	for (int i=1;i<=m;i++)
	{
		scanf("%d",&a[i]);
		num[i]=a[i];
	}
	sort(num+1,num+m+1);
	int _m=unique(num+1,num+m+1)-(num+1);
	for (int i=1;i<=m;i++)
		cnt[lower_bound(num+1,num+_m+1,a[i])-num]++;
	m=_m;
	for (int i=1;i<=m;i++)
		r=max(r,cnt[i]);
	int l=0;
	while (l<r)
	{
		int mid=((l+r)>>1)+((l+r)&1);
		if (check(mid))	l=mid;else r=mid-1;
	}
	printf("%d\n",l);
	return 0;
}

*/
