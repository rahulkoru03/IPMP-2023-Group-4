int doUnion(int a[], int n, int b[], int m)  {
    int d[m+n];
    int k1=0, k2=0, l=0;
    
    while(k2<m) {
        while(k1<n) {
            if(b[k2] == a[k1]) {
                break;
            }
            k1++;
        }
        d[l] = b[k2];
        l++;
        k2++;
        k1=0;
    }

    while(k1<n) {
        int flag = 0;
        while(k2<m) {
            if(a[k1] == b[k2]) {
                flag = 1;
                break;
            }
            k2++;
        }
        if(flag != 1) {
            d[l] = a[k1];
            l++;    
        }
        k1++;
        k2=0;
    }
    return (l-1); //subtract 1 cuz the last 'l++' is an extra since by then we already would have traversed the entire array
}