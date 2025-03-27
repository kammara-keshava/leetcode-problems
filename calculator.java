import java.util.Scanner;
public class calculator {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        int b=sc.nextInt();
        int bu=sc.next().charAt(0);
        switch(bu){
            case '+':System.out.println(a+b);
            break;
            case '-':System.out.println(a-b);
            break;
            case '*':System.out.println(a*b);
            break;
            case '%':System.out.println(a%b);
            break;
            case '/':System.out.println(a/b);
            break;
            default:System.out.println("invalid input");
        }
sc.close();

    }
}
