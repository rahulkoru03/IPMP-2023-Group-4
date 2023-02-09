/*
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
// Time complexity and Space complexity are both O(N^4)
*/

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    vector<vector<int> > vect;
    sort(nums.begin(),nums.end());
    int ptr1,ptr2;
    auto len=nums.size();
    for(auto i=0; i<len-3; i++) {
        if(i>0 && nums[i]==nums[i-1]) {
            continue;
        }
        for(auto j=i+1; j<len-2; j++) {
            if(j>i+1 && nums[j]==nums[j-1]) {
                continue;
            }
            ptr1=j+1;
            ptr2=len-1;
            while(ptr1<ptr2) {
                auto sum=nums[i]+nums[j]+nums[ptr1]+nums[ptr2];
                if(sum==target) {
                    vector<int> v;
                    v.push_back(nums[i]);
                    v.push_back(nums[j]);
                    v.push_back(nums[ptr1]);
                    v.push_back(nums[ptr2]);
                    vect.push_back(v);
                    ptr1++;
                    while(ptr1<ptr2 && nums[ptr1]==nums[ptr1-1]) {
                        ptr1++;
                    }
                } else if(sum>target) {
                    ptr2--;
                } else if(sum<target) {
                    ptr1++;
                }
            }
        }
    }
    return vect;
}
// Test cases passed : 283/292
// Runtime error : signed integer overflow, unable to overcome this issue.
