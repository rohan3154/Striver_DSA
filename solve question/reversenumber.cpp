 int reverse(long long x) {
        long long rs = 0;
        while(x>0 || x < 0) {
            long long rn = x%10;
            x = x/10;
            rs= (rs * 10) + rn;
        }
        return (long long)rs;
    }