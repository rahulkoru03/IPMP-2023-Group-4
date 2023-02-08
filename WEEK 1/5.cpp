int MissingNumber(vector<int>& array, int n) {
    long long temp=(n*(n+1))/2;
    for(int i=0; i<n-1; i++) {
        temp = temp - array[i];
    }
    return temp;
}