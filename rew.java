import java.util.*;
public class rew {

      public static void main() {

         Scanner sc=new Scanner(System.in);
         int arr[]=new int[10];
         System.out.println("enter the 10 numbers");
         for(int i=0;i<10;i++)
         {
             arr[i]=sc.nextInt();
         }
         int min=arr[0];
         for(int i=0;i<10;i++)
         {
             if(min>arr[i])
             min=arr[i];
         }
         System.out.println("small no:"+min);
        
         sc.close();







         
    }
}
