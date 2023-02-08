int firstMissingPositive(int* A, int n1) {
    int i = 0;  
    while (i < n1) {  
        if (A[i] > 0 && A[i] <= n1 && A[i] != i+1 && A[i] != A[A[i]-1]) {  
            int temp = A[A[i]-1];  
            A[A[i]-1] = A[i];  
            A[i] = temp;  
        } else {  
            i++;
        }  
    }
    i = 0;  
    while (i < n1 && A[i] == i+1) {
        i++;
    }  
    return i+1;
}