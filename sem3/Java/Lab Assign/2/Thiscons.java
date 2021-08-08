class test
{
    test()
    {
        this(4);
        System.out.println("no args");
    }
    test(int i)
    {
        this(232.34);
        System.out.println("int args");
    }
    test(double i){
        System.out.println("double args");
    }
}
public class Thiscons {
    public static void main(String[] args){
        test obj=new test();
    }
}
