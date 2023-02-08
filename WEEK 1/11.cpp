string reverseWord(string str){
    int len = str.length();
    string rev = "";
    for(int i=len; i>=0; i--) {
        rev = rev + str[i];
    }
    return rev;
}
