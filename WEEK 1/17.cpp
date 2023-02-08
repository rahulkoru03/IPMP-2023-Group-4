void pushZerosToEnd(int arr[], int n) {
    int zc=0;
    for(int i=0; i<n; i++) {
        if(arr[i]==0) {
            zc++;
        }
    }
    int nze[n-zc], ze[zc];
    int k1=0,k2=0;
    for(int i=0; i<n; i++) {
        if(arr[i]!=0) {
            nze[k1] = arr[i];
            k1++;
        } else {
            ze[k2] = arr[i];
            k2++;
        }
    }
    for(int j=0; j<k1; j++) {
        arr[j] = nze[j]; 
    }
    for(int j=0; j<k2; j++) {
        arr[k1+j] = ze[j]; 
    }
}