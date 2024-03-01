echo "Enter the limit"
read limit
echo "THe Fibanocci series is"
echo 0
echo 1
num1=0
num2=1
for((i=0;i<limit-2;i++));
do
num3=$(($num1+$num2))
echo $num3
num1=$num2
num2=$num3
done
