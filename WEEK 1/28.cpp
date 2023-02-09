vector<vector<int>> fourSum(vector<int>& nums, int target) {
    long long int sum;
    int len=nums.size();
    vector<vector<int> > V;
    for(int i=0; i<len; i++) {
        vector<int> v;
        sum=nums[i];
        for(int j=i+1; j<len; j++) {
            sum+=nums[j];
            for(int k=j+1; k<len; k++) {
                sum+=nums[k];
                for(int l=k+1; l<len; l++) {
                    sum+=nums[l];
                    if(sum==target) {
                        v.push_back(nums[l]);
                        v.push_back(nums[k]);
                        v.push_back(nums[j]);
                        v.push_back(nums[i]);
                        V.push_back(v);
                        v.clear();
                    }
                    sum-=nums[l];
                }
                sum-=nums[k];
            }
            sum-=nums[j];
        }
        sum-=nums[i];
    }
    int len2 = V.size();
    for(int i=0; i<len2; i++) {
        sort(V[i].begin(),V[i].end());
    }
    sort(V.begin(),V.end());
    auto last = unique(V.begin(),V.end());
    V.erase(last,V.end());
    return V;
}