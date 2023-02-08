bool isPalindrome(int x) {
    if (x<0){
        return false;
    } else if (x==0) {
        return true;
    } else if (x%10 == 0) {
        return false;
    }
    long long reverse = 0;
    int y = x;
    int z=0;
    while(x!=0){
        z=x%10;
        reverse = reverse*10 + z;
        x = x/10;
    }
    if(reverse == y) {
        return true;
    } else {
        return false;
    }
}