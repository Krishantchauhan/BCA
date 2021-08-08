import java.util.Scanner;
class take extends ArithmeticException
{
    take(String a)
    {
        super(a);
        //System.out.println(+a);
    }

}
class factorial{
    public static void main(String[] args){
        int num,i,fact=1;;
        Scanner store = new Scanner(System.in);
        System.out.println("Enter a number ");
        num =store.nextInt();
        if(num<=9)
        {
            for( i=2; i<=num;i++){
                fact=fact*i;
            }
            System.out.println("The number is "+fact);
        }
        else{
            throw new take("Number is greater than 9");
        }
    }

}
