#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int arr[26] = {0};
	cin >> s;
	for(int i=0; i<s.size(); i++) arr[s[i]-65]++;
	cin >> s;
	for(int i=0; i<s.size(); i++) arr[s[i]-65]++;
	cin >> s;
	for(int i=0; i<s.size(); i++) arr[s[i]-65]--;
	for(int i=0; i<26; i++){
		if(arr[i]!=0){
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
	return 0;
}
