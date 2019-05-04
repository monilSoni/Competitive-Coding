#include<bits/stdc++.h>
using namespace std;

int main(){
	double x, y;
	scanf("%lf %lf", &x, &y);
	double check = (x/y)*(log(y)/log(x));
	if(check > 1) printf("<\n");
	else if(check < 1) printf(">\n");
	else printf("=\n");
	return 0;
}
