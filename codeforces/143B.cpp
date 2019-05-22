
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

vector<string> split(string str){
	vector<string> result;
	int pos1 = str.find("-");
	int pos2 = str.find("."); 
	if(pos1 == string::npos){
		result.pb("");
		result.pb(str.substr(0, pos2));
	}else{
		result.pb("-");
		result.pb(str.substr(pos1+1, pos2-1));
	}
	
	if(pos2 == string::npos){
		result.pb("");
	}else{
		result.pb(str.substr(pos2+1, string::npos));
	}
	return result;
}
	

int main(){
	string input;
	cin >> input;
	vector<string> str = split(input);
	// Integer part
	int length = str[1].length();
	if(str[0][0] == '-'){
		printf("(");
	}
	printf("$");
	int next;
	if(length%3 != 0){
		next = length%3;
	}else{
		next = 3;
	}
	for(int i=0; i<length; i++){
		if(i == next){
			printf(",");
			next += 3;
		}
		printf("%c", str[1][i]);
	}
	printf(".");
	while(str[2].length() < 2){
		str[2].pb('0');
	}
	printf("%c%c",str[2][0],str[2][1]);
	if(str[0][0] == '-'){
		printf(")");
	}
	printf("\n");
	return 0;
}
