int titleToNumber(string columnTitle) {
    int sum = 0;
    int len = columnTitle.length();
    int temp = 0;
    for(int i=len-1; i>=0; i--) {
        char charac = columnTitle[i];
        int asciiOfCharac = int(charac);
        sum = sum + pow(26, temp)*(asciiOfCharac-int('A')+1);
        temp++;
    }
    return sum;
}