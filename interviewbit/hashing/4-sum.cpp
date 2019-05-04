vector<vector<int> > Solution::fourSum(vector<int> &num, int target) {
    sort(num.begin(), num.end());

    int sum = 0;
    vector<vector<int> > ans;
    int sz = num.size();
    // Fix the smallest number in the three integers
    for (int i = 0; i < sz - 3; i++) {
        // Lets make sure that we do not have duplicate triplets. 
        // We skip the duplicate elements as min integer in the triplet. 
        if (i > 0 && num[i] == num[i - 1]) {
            continue;
        }
        for (int j = i + 1; j < sz - 2; j++) {
            if (j > i + 1 && num[j] == num[j - 1]) {
                continue;
            }
            // Now num[i] is the smallest number in the three integers in the solution
            int ptr1 = j + 1, ptr2 = num.size() - 1;
            while (ptr1 < ptr2) {
                sum = num[i] + num[j] + num[ptr1] + num[ptr2];
                if (sum == target) {
                    vector<int> tmp; 
                    tmp.push_back(num[i]);
                    tmp.push_back(num[j]);
                    tmp.push_back(num[ptr1]);
                    tmp.push_back(num[ptr2]);
                    ans.push_back(tmp);    
                }
                if (sum > target) {
                    ptr2--;
                } else if (sum < target) {
                    ptr1++;
                } else if (sum == target) {
                    // In this case, we have a choice of increasing the first pointer, 
                    // or decreasing the last pointer. Lets go wiht increasing the first 
                    // pointer approach
                    // Note that we cannot have duplicate triplets. So we need to skip all 
                    // the occurrences of duplicates.
                    ptr1++;
                    while (ptr1 < ptr2 && num[ptr1] == num[ptr1 - 1]) {
                        ptr1++;
                    }
                }
            }
        }
    }
    return ans;
}
