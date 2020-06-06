public static void TOH(int n,String src,String dest,String helper){
            if(n==0){
                return;
            }
            TOH(n-1,src,helper,dest);
            System.out.println("Move "+n+" disc from "+src+" to "+dest);
            TOH(n-1,helper,dest,src);
}
