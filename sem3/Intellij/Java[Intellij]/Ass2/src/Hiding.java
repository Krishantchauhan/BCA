class a1{
    static void display()
    {
        System.out.println("A1");
    }
}
class b1 extends a1{
    static void display(){
        System.out.println("B1");
    }
}


public class Hiding {
    public static void main(String[] args){
    b1.display();
    }

}