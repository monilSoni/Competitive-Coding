#include<bits/stdc++.h>
using namespace std;


vector<pair<int, int>> rotate(vector<pair<int, int>> &a){
	// Rotate both the squares
	int temp;
	for(int i=0; i<4; i++){
		temp = a[i].first;
		a[i].first+=a[i].second;
		a[i].second=temp-a[i].second;
	}
	return a;	
}

bool liesInside(int x,int y, vector<pair<int, int>> &a){
	int top = a[3].second, bottom = a[0].second, left = a[0].first, right = a[3].first;
	if(left<=x && x<=right && bottom<=y && y<=top)
		return true;
	return false;
}

int main(){
	int x, y;
	vector<pair<int, int>> a,b;
	bool ans = false;
	for(int i=0; i<4; i++){
		scanf("%d %d", &x, &y);
		a.push_back(make_pair(x,y));
	}
	sort(a.begin() ,a.end());
	for(int i=0; i<4; i++){
		scanf("%d %d", &x, &y);
		b.push_back(make_pair(x,y));
	}
	sort(b.begin(), b.end());
	for(int i=0; i<4; i++){
		if(liesInside(b[i].first,b[i].second, a)){
			printf("YES\n");
			return 0;
		}
	}
	if(liesInside((b[0].first+b[3].first)/2, (b[0].second+b[3].second)/2, a)){
		printf("YES\n");
		return 0;
	}
	a = rotate(a);
	b = rotate(b);
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	for(int i=0; i<4; i++){
		if(liesInside(a[i].first,a[i].second, b)){
			printf("YES\n");
			return 0;
		}
	}
	if(liesInside((a[0].first+a[3].first)/2, (a[0].second+a[3].second)/2, b)){
		printf("YES\n");
		return 0;
	}
	printf("NO\n");
	return 0;
}

