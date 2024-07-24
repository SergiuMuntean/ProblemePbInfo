int ExistaImpareRec(int n) {
    if(n == 0) {
        return 0;
    }
    if((n % 10) % 2 == 1) {
        return 1;
    }
    ExistaImpareRec(n / 10);
}
