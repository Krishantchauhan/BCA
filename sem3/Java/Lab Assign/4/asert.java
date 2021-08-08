class asert {
    public static void  main(String[] args){
        int a=2;
        a++;
        a++;
        assert(a==4);
        a=100;
        assert(a==4);
        System.out.println(a);
    }
}
