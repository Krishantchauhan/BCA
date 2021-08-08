abstract class test{
     abstract  void eat();
 }

class Anonymous_class {
public static void main(String[] args){
    test s=new test()
    {
        void eat()
        {
            System.out.println("This is test");
        }
    };
    s.eat();
}
}
