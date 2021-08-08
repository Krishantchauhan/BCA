class child extends Thread
{
    public void run(){
        for (int i=10;i<=15;i++){
            System.out.println("Child thread"+i);
        }
    }
}


class threat {
    public static void  main(String[] args){
        child c1=new child();
        c1.start();
        for (int i=100;i<=105;i++){
            System.out.println("Main thread"+i);
        }
    }
}