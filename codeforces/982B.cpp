#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<pair <int, int>> rows, extrovert;
	int n, x;
	scanf("%d", &n);
	char s[2*n];
	for(int i=0; i<n; i++){
		scanf("%d", &x);
		rows.push_back(make_pair(x, i+1));
	} sort(rows.begin(), rows.end());

	scanf("%s", s);
	int j=0, k;
	for(int i=0; i<2*n; i++){
		if(s[i] == '0'){
			extrovert.push_back(make_pair(rows[j].first, rows[j].second));
			printf("%d ", rows[j].second);
			j++;
		} else{
			printf("%d ", extrovert[extrovert.size()-1].second);
			extrovert.pop_back();
		}
	}
	return 0;
}
		
