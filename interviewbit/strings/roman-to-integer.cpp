#include <bits/stdc++.h>
using namespace std;

/* A thousand times more efficient way of doing this is presented in the editorial solution
   class Solution {
public:
    int romanToInt(string s) {
        int num = 0;
        int size = s.size();

        for (int i = 0; i < size; i++) {
            // Does lesser value precede higher value ?
            if (i < (size - 1) && romanCharToInt(s[i]) < romanCharToInt(s[i + 1])) {
                num -= romanCharToInt(s[i]);
            } else {
                num += romanCharToInt(s[i]);
            }
        }
        return num;
    }

    int romanCharToInt(char c) {
        switch (c) {
            case 'I':   return 1;
            case 'V':   return 5;
            case 'X':   return 10;
            case 'L':   return 50;
            case 'C':   return 100;
            case 'D':   return 500;
            case 'M':   return 1000;
            default:    return 0;
        }
    }
};
*/

int solve(string str){
	int c = 0;
	int number = 0;
	int n = str.length();
	while(c<n){
		switch(str.at(c)){
			case 'I': if(c<n-1 && str.at(c+1) == 'V'){
					  number+=4;
					  c+=2;
				  }else if(c<n-1 && str.at(c+1) == 'X'){
					  number+=9;
					  c+=2;
				  }else {
					  number+=1;
					  c++;
				  }break;
			case 'V': number+=5;
				  c++;
				  break;
			case 'X': if(c<n-1 && str.at(c+1) == 'L'){
					  number+=40;
					  c+=2;
				  }else if(c<n-1 && str.at(c+1) == 'C'){
					  number+=90;
					  c+=2;
				  }else{
					  number+=10;
					  c++;
				  }break;
			case 'L': number+=50;
				  c++;
				  break;
			case 'C': if(c<n-1 && str.at(c+1) == 'D'){
					  number+=400;
					  c+=2;
				  }else if(c<n-1 && str.at(c+1) == 'M'){
					  number+=900;
					  c+=2;
				  }else{
					  number+=100;
					  c++;
				  }break;
			case 'D': number+=500;
				  c++;
				  break;
			case 'M': number += 1000;
				  c++;
				  break;
		}
	}

	return number;
}

int main(){
	string s;
	cin >> s;
	printf("%d\n", solve(s));
	return 0;
}
