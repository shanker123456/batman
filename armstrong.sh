echo "Enter a number : "
read n 
temp=$n 
sum=0 
x=0 
r=0 
while [ $temp -gt 0 ] 
do 
r=$(($temp % 10)) 
x=$(($r * $r * $r)) 
sum=$(($sum + $x)) 
temp=$(($temp / 10)) 
done 
if [ $sum -eq $n ] 
then 
echo "$n is armstrong"
else 
echo "$n is not armstrong"
fi 
