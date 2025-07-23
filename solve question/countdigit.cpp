int countDigit(int n) {
    int count = 0;
    while(n > 0) {
        int l = n % 10;
        count++;        
        n = n / 10; 
    }
    return count;