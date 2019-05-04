#include <iostream>
using namespace std;

int main() {
	string str, result;
	cin >> str;
	for(int i=0; i<str.size(); i++){
		if(str[i] == '.'){
			result.push_back('0');
		}else{
			if(str[i+1]=='.')
				result.push_back('1');
			else 
				result.push_back('2');
			i++;
		}
	}
	cout << result << "\n";
	return 0;
}
