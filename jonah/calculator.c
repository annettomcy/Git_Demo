#!/bin/bash
s=0
c="Y"
while [ $c = "Y" ]
do
	echo "Menu"
	echo "1.Addition"
	echo "2.Subtraction"
	echo "3.Multiplication"
	echo "4.Division"
	echo "5.Modulus"
	echo "Enter your choice: "
	read ch
	case $ch in
		1) 
			echo "Enter the two numbers: "
			read a
		   	read b
		   	s=$(($a + $b))
		   	echo "The sum is: $s"
			;;
		2) 
			echo "Enter the two numbers: "
		   	read a
		   	read b
		   	s=$(( $a - $b ))
		   	echo "The difference is: $s"
			;;
		3) 
			echo "Enter the two numbers: "
			read a
		   	read b
		   	s=$(( $a * $b ))
		   	echo "The product is: $s"
			;;
		4) 
			echo "Enter the two numbers: "
		   	read a
		   	read b
		   	s=$(( $a / $b ))
		   	echo "The quotient is: $s"
			;;
		5) 
			echo "Enter the two numbers: "
			read a
		   	read b
		   	s=$(( $a % $b ))
		   	echo "The modulus is: $s"
			;;
		*) 
			echo "Invalid Option! "
			;;		   	

	esac
	echo "Do you want to continue? Press Y if yes, or any other key if no"
	read c
done
