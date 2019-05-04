#include<bits/stdc++.h>
using namespace std;

unordered_map<char, char> match = {
    {'(', ')'},
    {'[', ']'},
    {'{', '}'}
};

void isBalanced(string str){
    stack<char> s;
    for(int i=0; i<str.size(); i++){
        if(str[i]=='(' || str[i] == '[' || str[i] == '{')
            s.push(str[i]);
        else{
            if(!s.empty() && str[i]==match[s.top()]){
                s.pop();
            }else{
                printf("NO\n");
                return;
            }
        }
    }
    if(!s.empty())
        printf("NO\n");
    else 
        printf("YES\n");
    return;
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        isBalanced(s);
    }
}
