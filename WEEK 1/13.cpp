int findSum(int A[], int N)
{
    if(N==1) {
        return 2*A[0];
    }
    int max = A[0] > A[1] ? A[0] : A[1];
    int min = A[0] < A[1] ? A[0] : A[1];
    int temp;
    for(int i=2; i<N; i++) {
        temp = A[i];
        if(temp>max) {
            max = temp;
        } else if(temp<min) {
            min = temp;
        }
    }
    return max+min;
}