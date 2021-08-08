class add{
    public int add( int a, final int b) {
        return (a + b);

    }

    public static void main( String[] Args) {
        int num1;
        int num2;
        num1 = 5;
        num2 = 6;
        final add s1 = new add();
        int s;
        s=s1.add(num1,num2);
        System.out.println("The Sum is "+s);
    }
}