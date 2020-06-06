public static int [] findIndices(int arr[],int number, int si,int counter){
        
        int temp[]=null;
        if(si>arr.length-1){
            int base[]=new int [counter];
            return base;
        }
        if(arr[si]==number){
            temp=findIndices(arr, number, si+1, counter+1);
        }
        else{
            temp=findIndices(arr, number, si+1, counter);
        }
        if(arr[si]==number){
            temp[counter]=si;
        }
        return temp;
    }
