void moveZeroes(vector<int>& nums) {
    vector<int> nonZeroElements;
    vector<int> zeroElements;
    int len = nums.size();
    for(int i=0; i<len; i++) {
        if(nums[i]!= 0) {
            nonZeroElements.push_back(nums[i]);
        } else {
            zeroElements.push_back(nums[i]);
        }
    }
    int len2 = nonZeroElements.size();
    int len3 = zeroElements.size();
    for(int j=0; j<len2; j++) {
        nums[j] = nonZeroElements[j];
    }
    for(int k=0; k<len3; k++) {
        nums[len2+k] = 0;
    }
}