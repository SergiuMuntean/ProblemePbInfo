int nr_cif_zero(int n) {
    int contor{};
    static int apeluri{};
    if(n == 0) {
        if(apeluri == 0) {
            return 1;
        }
        return 0;
    }
    if(n % 10 == 0) {
        contor = 1;
    }
    apeluri++;
    return contor + nr_cif_zero(n / 10);
}
