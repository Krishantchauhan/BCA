a=[1,2,3,4,5]
b=['a','b','c','d']
c=[1,'abc',7.7]
print(a[2])
print(b[2])
print(c[2])

print(a[-2])
print(b[-1])
print(c[-3])


#slicing of lists

print(a[:2]) #8619538198
print(b[:2]) #0120
print(c[:2])

#Giving new value to the list

a[3]=69
print(a)


#use of pop remove del

a.remove(69)#69 removed from List a
print(a)

a.pop(2)
print(a)

del a[1]
print(a)


a.append(11)
a.append("krishant")
print(a)


print("Length is ",len(a))

k=[1,2,3,4,5,6,7,1232,-1]
k1=max(k)
k2=min(k)
print(k1)
print(k2)

z=[1,2,3,4,5]
print("sum of the list is ",sum(z))


z.reverse()
print(z)

#sort
z.sort()
print(z)

#sort in reverse
sni
