 public static int TOH(int n,String src,String dest,String helper,int counter){
            if(n==0){
                return 1;
            }
            int counter_1=TOH(n-1,src,helper,dest,counter+1);
            System.out.println("Move "+n+" disc from "+src+" to "+dest);
            int counter_2=TOH(n-1,helper,dest,src,counter+1);

            return counter_1+counter_2;
        }
