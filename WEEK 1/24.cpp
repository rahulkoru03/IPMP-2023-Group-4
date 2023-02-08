bool hasArrayTwoCandidates(int arr[], int n, int x) {
    int sum = 0;
    int i,j;
    for(i=0; i<n; i++) {
        sum = sum + arr[i];
        for(j=i+1; j<n; j++) {
            sum = sum + arr[j];
            if(sum == x) {
                return true;
            }
            sum = sum - arr[j];
        }
        sum = sum - arr[i];
    }
    return false;
}