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
