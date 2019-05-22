#include <bits/stdc++.h>
using namespace std;

int freq(char* arr, int l){
	int max = -1, j = 0;
	sort(arr, arr+l);
	for(int i=0; i<l; i++){
		j = i+1;
		while(tolower(arr[j]) == tolower(arr[i]))
			j++;
		if(j-i > max) max = j-i;
	}
	return max;
}

int main(){
	int n;
	pair<int, int> winner = make_pair(-1, 0);
	scanf("%d",&n);
	char arr[3][100010];
	int max[3];
	for(int i=0; i<3; i++){
		scanf("%s", arr[i]);
	}
	for(int i=0; i<3; i++){
		int l = strlen(arr[i]);
		max[i] = freq(arr[i], l);
		printf("%d %d\n", max[i], l);
		if(max[i]+n > l){
			if((max[i]+n-l)%2==0) max[i] = l;
			else max[i] = l-1;
		}
		else if(max[i] + n <= l) max[i] += n;
		

		if(max[i] > winner.first){
			winner.first = max[i];
			winner.second = i+1;
		} else if(max[i] == winner.first){
			winner.second = 0;
		}
	}

	switch(winner.second){
		case 0: printf("Draw\n");
			break;
		case 1: printf("Kuro\n");
			break;
		case 2: printf("Shiro\n");
			break;
		case 3: printf("Katie\n");
			break;
	}
	return 0;
}
