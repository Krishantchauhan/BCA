class MainOverloading{
    public static void main(String[] args) {
        System.out.println("Hello World");
        main(96);
    }
    public static void main(int args) {
        System.out.println("Hello Everyone");
    }
}
