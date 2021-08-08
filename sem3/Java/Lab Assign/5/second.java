public class second{
    public static void main(String[] args){
    int first=63;
    System.out.println("The Two Digit Number ="+first);
    int a=first/10;
    int b=first%10;
        int c;
        c=a;
        a=b;
        b=c;
        int after_interchanging=(a*10)+(b);
        System.out.println("After Interchanging="+after_interchanging);
        //now difference
            int diff=0;
            if (a<b)
                diff=b-a;
            else
                diff=a-b;
        System.out.println("The difference between them is ="+diff);

    }
}