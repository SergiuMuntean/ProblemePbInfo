void cnt_cif(int n, int k, int& c) {
    if(n < 10) {
        if(n >= k) {
            c = 1;
            return;
        } else {
            c = 0;
            return;
        }
    }
    cnt_cif(n / 10, k, c);
    if(n % 10 >= k) {
        c++;
    }
}
