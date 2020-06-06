 public static int find(int arr[],int start,int end,int number){

        if(start>arr.length-1 || end>arr.length-1 || end<0){
            System.out.println(start+" "+end);
            return -1;
        }
        int mid=(start+end)/2;
        if(arr[mid]==number){
            return mid;
        }
        else if(arr[mid]>number){
            //System.out.println(start+" "+end);
            return find(arr,start,mid-1,number);
        }
        else if(arr[mid]<number){
            return find(arr,mid+1,end,number);
        }
        return -1;
    }
