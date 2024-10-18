#!/bin/bash
echo "Enter the first number: "
read a
echo "Enter the second number: "
read b
sum=$((a+b))
echo "The addition is = " $sum
sub=$((a-b))
echo "The subtraction is = " $sub
mul=((a*b))
echo "The multiplication is = " $mul
div=((a/b))
echo "The division is = " $div

#output
#Enter the first number: 10
#Enter the second number: 2
#The addition is = 12
#The subtraction is = 8
#The multiplication is = 20
#The division is = 5
