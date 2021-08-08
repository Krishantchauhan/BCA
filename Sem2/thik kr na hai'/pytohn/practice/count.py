a=print("enter a data")
a=input()
c,d,e=0,0,0
for i in a :
	if (i<=0 or i<=a):
		c=c+1
	elif ((i>="a" and i<="z")or (i>="A" and i<=Z)):
		d=d+1
	else:
		e=e+1
