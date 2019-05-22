#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1, n2, n3, x;
    int sum1=0, sum2=0, sum3=0;
    vector<int> s1, s2, s3;
    scanf("%d %d %d", &n1, &n2, &n3);
    for(int i=0; i<n1; i++){
        scanf("%d",&x);
        s1.push_back(x);
        sum1+=x;
    }
    for(int i=0; i<n2; i++){
        scanf("%d",&x);
        s2.push_back(x);
        sum2+=x;
    }
    for(int i=0; i<n3; i++){
        scanf("%d",&x);
        s3.push_back(x);
        sum3+=x;
    }
    int min_sum;
    int s1t=0, s2t=0, s3t=0;
    while(s1t<s1.size() || s2t<s2.size() || s3t<s3.size()){
        if(sum1 == sum2 && sum2 == sum3)
            break;
        min_sum = min(sum1, min(sum2, sum3));
        if(sum1>min_sum){
            s1t++; sum1-=s1[s1t-1];
        }
        if(sum2>min_sum){
            s2t++; sum2-=s2[s2t-1];
        }
        if(sum3>min_sum){
            s3t++; sum3-=s3[s3t-1];
        }
    }
    printf("%d\n", sum1);
    return 0;
}
