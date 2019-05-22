int Solution::maxArr(vector<int> &a) {
    int max1 = INT_MIN;
    int min1 = INT_MAX;
    int max2 = INT_MIN;
    int min2 = INT_MAX;
    for(int i=0; i<a.size(); i++){
        if(a[i]+i > max1) max1 = a[i]+i;
        if(a[i]+i < min1) min1 = a[i]+i;
        if(a[i]-i > max2) max2 = a[i]-i;
        if(a[i]-i < min2) min2 = a[i]-i;
        //printf("%d %d %d %d\n", max1, min1, max2, min2);
    }
    
    return max(abs(max1-min1), abs(max2-min2));
}

/* The logic here was almost nothing. You just had to open the modulus and check for all the possibilites and group them together to see if any logic comes together. Mental note: From now on, for every question, just dissect the question. What does the question ask? What are the possibilities from which I have to select the maximum */
