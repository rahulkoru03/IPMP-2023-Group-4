void rearrange(int arr[], int n) {
    int pc=0,nc=0;
    for(int i=0; i<n; i++) {
        if(arr[i]>=0) {
            pc++;
        } else {
            nc++;
        }
    }
    int pos[pc],neg[nc];
    int k1=0,k2=0;
    for(int i=0; i<n; i++) {
        if(arr[i]>=0) {
            pos[k1] = arr[i];
            k1++;
        } else {
            neg[k2] = arr[i];
            k2++;
        }
    }
    k1=0;
    k2=0;
    int f1=0,f2=0;
    for(int j=0; j<n; j++) {
        if(j%2 == 0) {
            if(k1<pc) {
                arr[j] = pos[k1];
                k1++;    
            } else {
                f1=1;
                break;   
            }
            
        } else {
            if(k2<nc) {
                arr[j] = neg[k2];
                k2++;
            } else {
                f2=1;
                break;
            }
        }
    }
    if(f1 == 1) {
        for(int i=(pc+k2); i<n; i++) {
            arr[i] = neg[k2];
            k2++;
        }
    } else if (f2==1) {
        for(int j=(nc+k1); j<n; j++) {
            arr[j] = pos[k1];
            k1++;
        }
    }
}