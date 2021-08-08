public class anonymous_array {
    public static void main(String[] args){
        sum(new int[]{1,2,4,3,5,6,5,6});
    }
    public static void sum(int[] a){
        int total=0;

        for (int i=0;i<9;i++){
            total+=i;
        }
        System.out.println("The sum of elements is ="+total);
    }
}
