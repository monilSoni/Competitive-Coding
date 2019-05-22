#include<bits/stdc++.h>
using namespace std;

int main(){
	double a, b;
	int n, t;
	scanf("%d",&t);
	for(int i=0; i<t; i++){
		cin >> a >> b >> n;
		if(a>0 || (a<0 && n%2==0)){
			a=log(abs(a));
		}else if(a<0){
			a=-1*log(abs(a));
		}else{
			a=1;
		}
		if(b>0 || (b<0 && n%2==0)){
			b=log(abs(b));
		}else if(b<0){
			b=-1*log(abs(b));
		}else{
			b=1;
		}
		if(a>b){
			printf("1\n");
		}else if(a<b){
			printf("2\n");
		}else{
			printf("0\n");
		}
	}
	return 0;
}

		
