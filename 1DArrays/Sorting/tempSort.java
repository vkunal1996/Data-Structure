/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication14;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.LinkedList;
import java.util.Arrays;
/**
 *
 * @author vkunal1996
 */
public class JavaApplication14 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        // TODO code application logic here
        int array[]={12,34,56,12,88,9,45,23,88,89,23,100,22,23,42};
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int yourNumber;
        try{
        yourNumber=Integer.parseInt(br.readLine());
       
        LinkedList mySortedList =new LinkedList();
        for(Integer i:array){
            if(i<=yourNumber){
                mySortedList.addFirst(i);
            }
            else if(i>yourNumber){
                mySortedList.addLast(i);
            }
        }
        System.out.println("Sorted List \n");
        for(Object i :mySortedList){
            System.out.print(i+" ");
        }
        }catch(Exception e){
            System.out.println(e.getMessage());
        }
    }
    
}
