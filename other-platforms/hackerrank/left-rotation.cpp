#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, d, x;
    scanf("%d %d", &n, &d);
    vector<int> v(n);
    d = d%n;
    for(int i=0; i<n; i++){
        scanf("%d",&x);
        v[(i-d < 0)?i-d+n: i-d] = x;
    }
    for(int i=0; i<n; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
    return 0;
}

