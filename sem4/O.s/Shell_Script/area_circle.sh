echo "Enter Radius"
read r
pi=3.14
area=0

area=$(echo "$pi*($r^2)"|bc)

echo  $area
