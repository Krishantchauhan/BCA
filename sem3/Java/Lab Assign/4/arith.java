class arith{
    public static void main(String[] args) {
        System.out.println(99/3);
        System.out.println(36/3);
        try {
            System.out.println(77/0);
        }
        catch (ArithmeticException e)
        {
            System.out.println("Please Use a valid Calculation");
        }

        System.out.println(27/3);
        System.out.println(51/3);
        System.out.println(90/5);


    }
}