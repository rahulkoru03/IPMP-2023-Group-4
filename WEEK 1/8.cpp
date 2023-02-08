int Solution::repeatedNumber(const vector<int> &A) {
    int len = A.size();
    int num1 = -1, num2 = -1, count1 = 0, count2 = 0, i;
    for (i = 0; i < len; i++) {
        if (A[i] == num1)
            count1++;
        else if (A[i] == num2)
            count2++;
        else if (count1 == 0) {
            num1 = A[i];
            count1 = 1;
        } else if (count2 == 0) {
            num2 = A[i];
            count2 = 1;
        } else {
            count1--;
            count2--;
        }
    }
    count1 = count2 = 0;
    for (i = 0; i < len; i++) {
        if (A[i] == num1)
            count1++;
        else if (A[i] == num2)
            count2++;
    }
    if (count1 > len / 3)
        return num1;
    else if (count2 > len / 3)
        return num2;
    else
        return -1;
}