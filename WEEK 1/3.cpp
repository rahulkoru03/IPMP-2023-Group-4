int findSingle(int N, int arr[]){
    int count = 0;
    for(int i=0; i<N; i++) {
        int elem = arr[i];
        for(int j=0; j<N; j++) {
            if(arr[j] == elem) {
                count ++;
            }
        }
        if(count%2 != 0) {
            return elem;
        } else {
            count = 0;
        }
    }
}