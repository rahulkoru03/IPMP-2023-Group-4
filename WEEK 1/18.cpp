void sort012(int a[], int n)
{
    int zc=0,oc=0,tc=0;
    for(int i=0; i<n; i++) {
        if(a[i]==0) {
            zc++;
        } else if(a[i]==1) {
            oc++;
        } else if(a[i]==2) {
            tc++;
        }
    }
    for(int i=0; i<zc; i++){
        a[i] = 0;
    }
    for(int i=0; i<oc; i++){
        a[zc+i] = 1;
    }
    for(int i=0; i<tc; i++){
        a[zc+oc+i] = 2;
    }
}