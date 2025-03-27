//complexity:  o(2^n)
import java.util.Scanner;
public class towerofhanoi {
    public static void tower(int n,String strc,String help,String dest){
        if(n==1){
           System.out.println("transfer "+n+" from "+strc+" to "+dest);
           return;
        }
        tower(n-1,strc,dest,help);
        System.out.println("transfer "+n+" from "+strc+" to "+dest);
        tower(n-1,help,strc,dest);
    }
   public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();
    tower(n,"s","h","d");
    sc.close();
   }
}
