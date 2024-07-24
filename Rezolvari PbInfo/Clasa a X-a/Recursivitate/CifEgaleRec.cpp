int CifEgaleRec(int n, int k) {
    if(n <= 9 && n == k) {
        return 1;
    }
    if(n <= 9 && n != k) {
        return 0;
    }
    if(n % 10 != k) {
        return 0;
    }
    return CifEgaleRec(n / 10, k);
}
