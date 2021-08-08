public class Third {
    public static void main(String[] args){
        int a,b,c;
        int sum=15;
        int diff=3;
        a=(sum+diff)/2;
        b=a+sum;

        int store=0,sm=0;
        while(b>0){
            store=b%10;
            sm=sm+store;
            b=b/10;
        }
        System.out.println("The Two Digit Number is ="+a+sm);
    }
}
