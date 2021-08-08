class Student{
    int Rollno;
    String Name;
    float Marks;

    Student(int R,float M,String N){
         Rollno=R;
         Marks=M;
         Name=N;
    }
    Student(String N,int R,float M){
        Rollno=R;
        Marks=M;
        Name=N;
    }
    void show(){
        System.out.println("\n\t"+Rollno+"\t"+Name+"\t"+Marks);
    }
}
public class Overloding {
    public static void main(String[] args){
    Student s1=new Student(29,85,"Krishant");
    Student s2=new Student("abcd",20,100);
        System.out.println("\n\tRoll\tName\tMarks\n");
    s1.show();
    s2.show();
    }
}
