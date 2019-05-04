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

void recurse(string str, string result, vector<int> &freq){
    if(result.length() == str.length()){
        cout << result << " ";
        return;
    }

    for(int i=0; i<26; i++){
        if(freq[i]>0){
            freq[i]--;
            result.push_back(i+'A');
            recurse(str, result, freq);
            //Restore the original state
            freq[i]++;
            result.pop_back();
        }
    }
}

void solve(string str){
    vector<int> freq(26, 0);
    for(int i=0; i<str.length(); i++){
	    cout << str[i]-65 << "\n";
	    freq[str[i]-65]++;
    }
    string result = "";
    recurse(str, result, freq);
}

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    string str;
	    cin >> str;
	    sort(str.begin(), str.end());
	    solve(str);
	    printf("\n");
	}
	return 0;
}
