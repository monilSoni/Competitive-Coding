#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	scanf("%d %d", &n,&m);
	int teams = min(n,m);
	n-=teams; m-=teams;
	if(teams<=max(n,m))
		printf("%d\n",teams);
	else{
		int total = max(m,n);
		teams-=total;
		if(teams%3==2)
			total++;
		total+=(teams/3)*2;
		printf("%d\n",total);
	}
	return 0;
}

/* Better solution by @TheUselessGuy  int minr = min(m,min(n,(m+n)/3));
  				      cout<<minr<<endl;
				      That's it! */
