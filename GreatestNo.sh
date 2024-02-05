echo "Enter two numbers"
read a
read b
if (( $a == $b ));
then
echo "a and b are equal"
elif (( $a > $b ));
then
echo "$a is greater than $b"
else
echo "$b is greater than $a"
fi

