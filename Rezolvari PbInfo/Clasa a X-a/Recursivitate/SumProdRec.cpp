long long SumProdRec(int n) {
    if(n == 2) {
        return 2;
    }
    return n * (n - 1) + SumProdRec(n - 1);
}
