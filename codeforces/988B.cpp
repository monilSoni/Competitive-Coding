#include <bits/stdc++.h>
using namespace std;

bool compare(const std::string& first, const std::string& second) {
       return first.size() < second.size();
}

int main(){
	int n;
	scanf("%d",&n);
	string s;
	vector<string> v;
	for(int i=0; i<n; i++){
		cin >> s;
		v.push_back(s);
	}
	sort(v.begin(), v.end(), compare);

	for(int i=1; i<n; i++){
		if(v[i].find(v[i-1]) == string::npos){
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
	for(int i=0; i<n; i++)
		cout << v[i] << "\n";
	return 0;
}
