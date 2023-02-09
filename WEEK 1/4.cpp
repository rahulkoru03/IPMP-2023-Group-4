vector<int> twoRepeated (int arr[], int N) {
    // Your code here
    /*
    int count=0;
    int visited[N]l
    for(int i=0; i<N; i++) {
        visited[i]=0;
    }
    for(int i=0; i<N; i++) {
        if(visited[i]) {
            return arr[i];
        }
        visited[i]=1;
    }
    // visited[N] array takes O(N) space
    */
    vector<int> v;
    int temp;
    for(int i=0; i<N+2; i++) {
        temp = abs(arr[i]);
        if(arr[temp] < 0) {
            v.push_back(temp);
        } else {
            arr[i] = arr[i]*(-1);
        }
    }
    return v;
}

// Code must execute properly but it's not..