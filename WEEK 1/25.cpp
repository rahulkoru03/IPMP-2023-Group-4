bool find3Numbers(int A[], int n, int X)
{
    int sum = 0;
    for(int i=0; i<n; i++) {
        sum += A[i];
        for(int j=i+1; j<n; j++) {
            sum += A[j];
            for(int k=j+1; k<n; k++) {
                sum += A[k];
                if(sum == X) {
                    return true;
                }
                sum -= A[k];
            }
            sum -= A[j];
        }
        sum -= A[i];
    }
    return false;
}