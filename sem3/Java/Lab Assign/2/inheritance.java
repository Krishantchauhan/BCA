class Parent{
    void show()
    {
        System.out.println("Hello from Parents");
    }
}
class child extends Parent{
    void display(){
        System.out.println("hello from Child");
    }
}


public class inheritance {
    public static void main(String[] args){
        Parent a=new Parent();
        a.show();

        child b=new child();
        b.show();
        b.display();
    }

}