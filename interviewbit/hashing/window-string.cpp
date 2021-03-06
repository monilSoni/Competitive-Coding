string Solution::minWindow(string S, string T) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int> mp(128,0);
    
    for(auto ch : T){
        mp[ch]++;
    }
    int len=T.size(),st=0,end=0,max1=INT_MAX,he=0;
    while(end < S.size()){
        if(mp[S[end++]]-- > 0)
        len--;
        while(len==0){
         if(end-st < max1)
         max1=end-(he=st);
         if(mp[S[st++]]++==0)
            len++;         
        }
            
    }
    if(max1==INT_MAX)
    return "";
    else
    return S.substr(he,max1);
}


