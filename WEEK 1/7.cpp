int* repeatedNumber(const int* A, int n1, int *len1) {
    /*
    int visited[n1];
    int i,j,k;
    for(i=0; i<n1; i++) {
        visited[i]=0;
    }
    int *p=(int *)malloc(2*(sizeof(int)));
    for(j=0; j<n1;j++) {
        if(visited[*(A+j)-1] == 1) {
            *(p)=*(A+j);
        } else {
            visited[*(A+j)-1] = 1;
        }
    }
    for(k=0; k<n1; k++) {
        if(visited[k]==0) {
            *(p+1) = k+1;
            break;
        }
    }
    return p;
    */
    int i;
    int *B;
    *(B) = *(A);
    int *p=(int *)malloc(2*(sizeof(int)));
    for(i=0; i<n1; i++) {
        if(abs(*(B+(*(B+i)-1))>0)) {
            *(B+(*(B+i)-1)) *= -1;
        } else {
            *(p) = abs(*(B+i));
        }
    }
    for(i=0; i<n1; i++) {
        if(*(B+i)>0) {
            *(p+1) = i+1;
        }
    }
    return p;
}