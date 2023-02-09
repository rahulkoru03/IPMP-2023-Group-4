string convertToTitle(int columnNumber) {
    string title,temp;
    int i=0;
    while(columnNumber>0) {
        int rem=columnNumber%26;
        if(rem==0) {
            //title += 'Z';
            temp = title;
            title = 'Z';
            title+=temp;
            columnNumber = (columnNumber/26)-1;
        } else {
            //title += (rem-1) + 'A';
            temp = title;
            title = (rem-1) + 'A';
            title+=temp;
            columnNumber/=26;
        }
    }
    return title;
}