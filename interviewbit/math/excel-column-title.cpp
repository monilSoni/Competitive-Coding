#include<bits/stdc++.h>
using namespace std;

string convertToTitle(int n) {
    int x;
    string result = "";
    char a;
    while(n>0){
        x = (n)%26;
	if(x == 0) a = 'Z';
	else a = x+64;
        printf("%d %c\n",x,a);
	result.insert(result.begin(), a);
        n = n/26;
    }
    return result;
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%s\n", convertToTitle(n).c_str());
	return 0;
}
