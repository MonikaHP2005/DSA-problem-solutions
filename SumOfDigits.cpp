class Solutions{
    public:
    int sumOfDigits (int n){
        int rem, sum=0;
        while(n>0){
            rem = n%10;
            n = n/10;
            sum = sum + rem;
        }
        return sum;
    }
};