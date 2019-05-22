int Solution::lengthOfLongestSubstring(string A) {
    int count = 0, maxcount = INT_MIN;
    unordered_set<char> hash;
    int start = 0; 
    while(start+count<A.size()){
        if(hash.find(A[start+count]) == hash.end()){
            hash.insert(A[start+count]);
            count++;
        }else{
            hash.erase(hash.find(A[start]));
            start++;
            if(count>maxcount){
                maxcount = count;
            }count--;
        }
    }
    if(count>maxcount){
                maxcount = count;
    }
    return (maxcount==INT_MIN)?1:maxcount;
}

