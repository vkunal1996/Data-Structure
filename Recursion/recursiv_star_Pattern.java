/*
  *
  **
  ***
  ****
  *****
*/

public static void printStar(int n,int row,int col){
        
        if(col>row){
            row+=1;
            col=1;
            System.out.println();
        }

        if(row>n){
            return;
        }

        System.out.print("* ");
        printStar(n, row, col+1);

    }
