unsigned int cmmdc(unsigned int a, unsigned int b) {
    int rest{};
    if(b == 0) {
        return a;
    }
    rest = a % b;
    return cmmdc(b, rest);
}
