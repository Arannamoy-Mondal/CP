import java.util.Scanner;
public class A_Way_Too{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int ts=sc.nextInt();
        for(int i=0;i<=ts;i++)
        {
            String s=sc.nextLine();
            if(s.length()<=10)System.out.println(s);
            else System.out.println(s.charAt(0)+""+(s.length()-2)+""+s.charAt(s.length()-1));
            //System.out.println(i);
        }
    }
}