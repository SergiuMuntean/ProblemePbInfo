int CifDiferiteRec(int n, int k) {
    static int apeluri{};
    if(n == 0) {
        if(n != k) {
            if(!apeluri) {
        		return 1;
            } else {
                apeluri = 0;
                return 0;
            }
        }
        return 0;
    }
    apeluri++;
    if(n % 10 != k) {
        return 1 + CifDiferiteRec(n / 10, k);
    }
    else {
        return CifDiferiteRec(n / 10, k);
    }
}
