 /* bubble_sort_recursive({12,11,10,9,8,7,56},0,1)*/
 
 public static int [] bubble_sort_recursive(int arr[],int ol,int il){

        if(ol==arr.length-2){
            return arr;
        }
        if(il==arr.length-1){
            ol+=1;
            il=ol+1;
            return bubble_sort_recursive(arr, ol, il);
        }
        if(arr[ol]>arr[il]){
            int temp=arr[ol];
            arr[ol]=arr[il];
            arr[il]=temp;
        }
        int temp_arr[]=bubble_sort_recursive(arr, ol, il+1);
        return temp_arr;

    }
