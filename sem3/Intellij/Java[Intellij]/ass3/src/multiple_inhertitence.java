interface A{
    public abstract void  m1();
}
interface B extends A{
    public abstract void m2();
}
class C implements B{
    public void m1(){
        System.out.println("This is M1 Method");
    }
    public void m2(){
        System.out.println("This is M2 Method");
    }
}
public class multiple_inhertitence {
    public static void main(String [] args){
    C obj=new C();
    obj.m1();
    obj.m2();
    }
}
