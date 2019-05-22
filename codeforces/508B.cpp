
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
	string str;
	cin >> str;
	int n = str.length();
	int last_even = -1;
	rep(i,0,str.length()){
		int x = str[i]-'0';
		if(x%2==0) // Storing the index of last even encountered
			last_even=i;
		// If this is the first even encountered with value less than last element
		if(x%2==0 && x<(str[n-1]-'0')){
			char temp = str[i];
			str[i] = str[n-1];
			str[n-1] = temp;
			break;
		}
	}
	if((str[n-1]-'0')%2 ==0){
		cout << str << "\n";
	}else if(last_even != -1){
		char temp = str[last_even];
		str[last_even] = str[n-1];
		str[n-1] = temp;
		cout << str << "\n";	
	}else{
		cout << "-1\n";
	}
	return 0;
}
	
