 public static boolean isSortedArray(int arr[],int si){

        if(si==arr.length-1){
            return true;
        }

       if(arr[si]>arr[si+1]){
           return false;
       }
       else{
           boolean restAns=isSortedArray(arr, si+1);
           return restAns;
       }

    }
