/*Get the nth number in the fibonacci series*/
 public static int nthfib(int n){
        if(n==0){
            return n;
        }
        if(n==1){
            return n;
        }
        int sum= nthfib(n-1)+nthfib(n-2);
        return sum;
    }
