void segregateEvenOdd(int arr[], int n) {
    vector<int> even;
    vector<int> odd;
    for(int i=0; i<n; i++) {
        if(arr[i]%2==0) {
            even.push_back(arr[i]);
        } else {
            odd.push_back(arr[i]);
        }
    }
    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end());
    int len1 = even.size();
    int k1=0;
    for(int j=0; j<n; j++) {
        if(j<len1) {
            arr[j] = even[j];
        } else {
            arr[j] = odd[k1];
            k1++;
        }
    }
}