import java.util.Scanner;

public class Ticket {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int a,b,c;
        System.out.println("Enter a Ticket Number(Six Digit) To Find Next");
        a=sc.nextInt();
        System.out.println("The Ticket Number is ="+a);
        int last,first,store,temp;
        do {
            first=0;
            last=0;
            temp=a;
            for (int i=3;i<=5;i++)
            {
                store=temp%10;
                last=last+store;
                temp=temp/10;
            }
            for (int i=0;i<3;i++)
            {
                store=temp%10;
                first=first+store;
                temp=temp/10;
            }
            a=a+1;

        }while(first!=last);
        System.out.println("The Lucky number is ="+(a-1));
    }
}
