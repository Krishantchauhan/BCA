public class second_highest_ele {
    public static int checknum(int[] a,int size){
        int temp;
        for (int i=0;i<size;i++)
        {
            for (int j=i+1;j<size;j++)
            {
                if (a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        return a[size-2];
    }
    public static void main(String [] args){
        int a[]={9,5,6,8,2,5};
        System.out.println("Second Highest element is ="+checknum(a,6));
    }
}
