echo "Enter a number : "
read n 
i=2 
if [ $n -lt 2 ] 
then 
echo "$n is not a prime number"
else  
while [ $i -lt $n ] 
do 
if [ $(($n % $i)) -eq 0 ] 
then 
echo "$n is not a prime number" 
exit 
fi
i=$(($i + 1)) 
done 
echo "$n is a prime number"
fi
