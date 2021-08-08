//Class And Object
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


//Hello

 class hello{
	public static void main(String[] args) {
		System.out.println("Hello World");
	}
}


//MainOverloading


class MainOverloading{
    public static void main(String[] args) {
        System.out.println("Hello World");
        main(96);
    }
    public static void main(int args) {
        System.out.println("Hello Everyone");
    }
}


//Method Overloading

class method_overloading{
	public static void main(final String[] args) {
		add(5,2);
		add(5,2,6);
	}

	public static void add(final int a,final int b)
	{
	int c;
	c=a+b;
	System.out.println("The First Sum is "+c);
	}
	public static void add(final int a,final int b,final int d)
	{
		int c;
		c=a+b+d;
		System.out.println("The Second Sum is "+c);
	}
}

