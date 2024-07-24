void factorial(int n, int& f) {
    if(n == 0) {
        f = 1;
        return;
    }
    factorial(n - 1, f); 
    f *= n;
}
