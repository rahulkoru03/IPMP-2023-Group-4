vector<int> Solution::repeatedNumber(const vector<int> &A) {
    vector<int> ret(2);
    long long sumOfA = 0, sumOfA2 = 0;
    long long temp;
    int retA, retB;
    int n = A.size();
    for (int i = 0; i < n; i++) {
        temp = A[i];
        sumOfA += temp;
        sumOfA2 += temp*temp;
        temp = i + 1;
        sumOfA -= temp;
        sumOfA2 -= temp*temp;
    }
    sumOfA2 = sumOfA2/sumOfA;
    retA = (int)((sumOfA + sumOfA2)/2);
    retB = (int)(sumOfA2-retA);
    ret[0] = retA;
    ret[1] = retB;
    return ret;
}


/*
int* repeatedNumber(const int* A, int n1, int *len1) {

    // int visited[n1];
    // int i,j,k;
    // for(i=0; i<n1; i++) {
    //     visited[i]=0;
    // }
    // int *p=(int *)malloc(2*(sizeof(int)));
    // for(j=0; j<n1;j++) {
    //     if(visited[*(A+j)-1] == 1) {
    //         *(p)=*(A+j);
    //     } else {
    //         visited[*(A+j)-1] = 1;
    //     }
    // }
    // for(k=0; k<n1; k++) {
    //     if(visited[k]==0) {
    //         *(p+1) = k+1;
    //         break;
    //     }
    // }
    // return p;
    

// ----------------- //

    // int i;
    // int *B;
    // *(B) = *(A);
    // int *p=(int *)malloc(2*(sizeof(int)));
    // for(i=0; i<n1; i++) {
    //     if(abs(*(B+(*(B+i)-1))>0)) {
    //         *(B+(*(B+i)-1)) *= -1;
    //     } else {
    //         *(p) = abs(*(B+i));
    //     }
    // }
    // for(i=0; i<n1; i++) {
    //     if(*(B+i)>0) {
    //         *(p+1) = i+1;
    //     }
    // }
    // return p;
}
*/




/*
vector<int> Solution::repeatedNumber(const vector<int> &A) {
    vector<int> v;
    int len=A.size();
    
    // for(auto elem : A) {
    //     int temp = abs(elem)-1;
    //     if(A[temp] <0) {
    //         v.push_back(temp);
    //         break;
    //     } else {
    //         A[temp] *= -1;
    //     }
    // }
    
    int sqSum = (len)*(len+1)*((2*len)+1)/6;
    int tempSum=0;
    for(int i=0; i<len; i++) {
        tempSum += (A[i])*(A[i]);
    }
    
    
    // int i=0;
    // while(i<A.size()) {
    //     if(A[i]>0 && A[i]<=A.size() && A[i!=i+1 && A[i]!=A[A[i]-1]) {
    //         int temp = A[i];
    //         A[i] = A[A[i]-1];
    //         A[A[i]-1] = temp;
    //     }
    //     i++;
    // }
    // for(int i=0; i<A.size(); i++) {
    //     if(A[i]!=i+1) {
    //         v.push_back(i+1);
    //         break;
    //     }
    // }
    
    
    int sum=-v[0];
    int actualSum= len*(len+1)/2;
    for(int i=0; i<A.size(); i++) {
        sum+=A[i];
    }
    v.push_back(actualSum-sum);
    return v;
}
*/
