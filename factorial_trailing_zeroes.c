int trailingZeroes(int n){
    int i=5;
    int r=0;
    while(n/i!=0){
        r=r+(n/i);
        i=i*5;
    }
    return r;
}