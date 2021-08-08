class a{
    void display()
    {
        System.out.println("A");
    }
}
class b extends a{
    void display(){
        System.out.println("B");
    }
}


public class Overriding {
    public static void main(String[] args){
    b o=new b();
    o.display();
    }

}