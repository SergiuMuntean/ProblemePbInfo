int CifDiv3Rec(int n) {
    static int contor{};
    if(n == 0) {
        return 1;
    }
    int val{};
    val = n % 10;
    if(val % 3 == 0) {
        contor++;
    }
    CifDiv3Rec(n / 10);
    return contor;
}
