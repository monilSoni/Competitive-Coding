#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, k;
	long long x;
	vector<pair<long long, pair<long long, long long>>> vlll;
	priority_queue<long long, vector<long long>, std::greater<long long>> heapsdontlie;
	scanf("%d %d", &n, &k);
	for(int i=0; i<n; i++){
		scanf("%lld",&x);
		vlll.push_back(make_pair(x, make_pair(0,0)));
	}
	for(int i=0; i<n; i++){
		scanf("%lld",&x);
		vlll[i].second.first = x;
		vlll[i].second.second = i;
	}
	sort(vlll.begin(), vlll.end());
	long long sum = 0;
	for(int i=0; i<n; i++){
		if(heapsdontlie.size()<k){
			heapsdontlie.push(vlll[i].second.first);
			sum+=vlll[i].second.first;
			vlll[i].second.first=sum;
		}else if(k!=0 && heapsdontlie.size()==k){
			x = vlll[i].second.first;
			vlll[i].second.first+=sum;
			if(x>heapsdontlie.top()){
				sum-=heapsdontlie.top();
				heapsdontlie.pop();
				sum+=x;
				heapsdontlie.push(x);
			}
		}
	}
	vector<long long> v(n, 0);
	for(int i=0; i<n; i++){
		v[vlll[i].second.second] = vlll[i].second.first;
	}
	for(int i=0; i<n; i++){
		printf("%lld ", v[i]);
	}printf("\n");
	return 0;
}

/* A relatively shorter solution by the winner of the contest - @FiveAtomTree. The user has used multiset<int> which is a nice data structure for keeping things in sorted order. It has logarithmic insertion complexity.
 *
 * #include <bits/stdc++.h>
using namespace std;
#define int long long
typedef pair <int, int> pii; 
typedef pair <pair <int, int>, int> piii; 
int answers [200005];
main(){
    ios_base::sync_with_stdio(0);
    int a, b; cin >> a >> b; 
    vector <int> x, y; 
    vector <piii> den; 
    for (int i=0; i<a; i++){
        int r; cin >> r; x.push_back(r); 
    }
    for (int i=0; i<a; i++){
        int r; cin >> r; y.push_back(r); 
        den.push_back(piii(pii(x[i], y[i]), i)); 
    }
    sort(den.begin(), den.end()); 
    multiset <int> xk; 
    
    for (int i=0; i<den.size(); i++){
        int rz = 0; 
        int ans = den[i].first.second; 
        if (xk.size() > 0){
            auto rf = --xk.end(); 
            while (rz < b){
                rz+=1; 
                ans+=(*rf); 
                if (rf == xk.begin()) break; 
                --rf; 
            }
        }
        answers[den[i].second] = ans; 
        xk.insert(den[i].first.second);
    }
    for (int i=0; i<a; i++) cout << answers[i] << '\n';
    return 0;
}*/
