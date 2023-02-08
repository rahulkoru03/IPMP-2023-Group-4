vector<long long int> twoOddNum(long long int arr[], long long int n)  {
    map<int,int> mp;
    vector<long long int> v;
    for(int i=0;i<n;i++) {
        mp[arr[i]]++;
    }
    for(auto elem:mp) {
        if( elem.second %2 != 0 )
            v.push_back(elem.first);
        }   
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    return v;
}