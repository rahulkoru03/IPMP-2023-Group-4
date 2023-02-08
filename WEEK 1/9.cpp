vector<int> singleNumber(vector<int> nums) 
{
    map<int, int> mp;
    vector<int> v;
    for(int i=0; i<nums.size(); i++) {
        mp[nums[i]]++;
    }
    for(auto elem: mp) {
        if (elem.second == 1) {
            v.push_back(elem.first);
        }
    }
    return v;
}