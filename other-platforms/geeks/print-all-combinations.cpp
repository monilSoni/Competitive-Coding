
/* Monil Soni sonil06 */
/* DA-IICT  */

#include <bits/stdc++.h>
#include <unistd.h>

using namespace std;

typedef long long LL;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef pair<int, int> pii;

#define MOD 1000000007
#define rep(i,s,n) for(int i=s; i<n; i++)
#define repp(i,s,n) for(int i=s; i<=n; i++)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define CLOCK_INIT clock_t start, stop; double t = 0.0; assert((start = clock())!=-1);
#define CLOCK_END stop = clock(); t = (double) (stop-start)/CLOCKS_PER_SEC; printf("Run time: %f\n", t); 

void recurse(string result, vector<int> &freq){
	cout << result << "\n";
	for(int i=0; i<26; i++){
		if(freq[i]>0){
			result.push_back(i+'A');
			freq[i]--;
			recurse(result, freq);
			freq[i]++;
			result.pop_back();
		}
	}
	return;
}

int main(){
	string str;
	cin >> str;
	vector<int> freq(26, 0);
	for(int i=0; i<str.length(); i++){
		freq[str[i]-65]++;
	}
	string result = "";
	recurse(result, freq);
	return 0;
}
