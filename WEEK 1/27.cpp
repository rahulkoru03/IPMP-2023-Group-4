int Solution::threeSumClosest(vector<int> &A, int B) {
    sort(A.begin(), A.end());
    int closestSum = 1000000000;

    for (int i = 0; i < A.size() - 2; i++) {
        int ptr1 = i + 1, ptr2 = A.size() - 1;
        while (ptr1 < ptr2) {
            int sum = A[i] + A[ptr1] + A[ptr2];
            if (sum == B)
                return sum;
            if (abs(B - sum) < abs(B - closestSum)) {
                closestSum = sum;
            }
            if (sum > B) {
                ptr2--;
            } else {
                ptr1++;
            }
        }
    }
    return closestSum;
}
