#include <iostream>

//Number Systems
//	- The most commonly used number sytem used today is the decimal system or as it also
//	  refered to as base ten number system
//	- Other number sytems
//		- Base 2: binary
//		- Base 8: Octal
//		- Base 16 Hexadecimal
//	- Computer memory is made up of bits or BInary digiTS
//	- Binary can be hard for a human to understand so we convert the binary into other
//	  number systems

//Common Theme
//	- Numerals in the number systems covered are organized into column, where each
//	  column is the base number raised to a power.
//	- The farthest right column represnet base^0
//	| Thousands | Hundreds | Tens | Ones |
//	|    10^3   |   10^2   | 10^1 | 10^0 |
//	|     1     |     2    |   3  |  4   |

//Decimal - Base 10
//	- Uses the numbers 0-0
//	- If a number exceeds 9 in a given column that value will roll over to a zero and one
//	is added to teh column to the imediate left

//Binary - Base 2
//	- Numbers 0 and 1
//	- If a Numbers exceeds one in a given column that value rolls over to a zero and one
//	is added to the column to the left

//Hexadecimal - Base 16
//	- Numbers 0 - 9 then A - F
//	- If 9 is exceeeded then letters are used
//	- If the value exceeds F then value rolls over to a 0 and is added to the column to
//	  the left

//Base 8
//	- Numbers 0 - 8
//	- If the value exceeds 8 then it rolls over to a zero and is added to the coumn to the
//	  left.

//Conversion Between Bases
//	- Decimal -> Binary
//	- Binary -> Decimal
//	- Binary -> Hex

//Decimal -> Binary
//	 - 2 main ways to convert from decimal to binary
//		- Short division by two with remainder
//		- Comparing powers of two and subtraction
//	- Divided by two method
//		- Take the number we need to convert
//		- Divide by two
//		- Note the remainder (0 or 1)
//			- If it does not divided evenly it has a remainder of 1
//		- Take the result from 2 and repeat steps 2 and 3 until the result is 1 or 0
//			- If the value is not zero go one more step.
//		- The remainders when read backwards form the binary number

//Different Base, Same Math
//	- Just like we can add decimal numbers we can do the same with binary numbers
//	- It follows the same rules except when we add 1 and 1 we get a 10. We move the one to
//	  the comlumn to the left.
//	| 170 |   | 1 | 0 | 1 | 0 | 1 | 0 | 1 | 0 |
//  |  85 | + | 0 | 1 | 0 | 1 | 0 | 1 | 0 | 1 |
//  | 255 |   | 1 | 1 | 1 | 1 | 1 | 1 | 1 | 1 |

//Negative Binary Numbers
//	- Sign and Magnitude
//		- the most significatn bit (left-most) represents the sign on the number, leaving
//		15 bits (in an integer, for example) to store the magnitude; 1 for negative, and 0
//		for positive;

//One's complement
//	- A simple way to represent a negative binary numbers is to flip all the bits in a
//	  a binary number.
//	| 10  | 0 | 0 | 0 | 0 | 1 | 0 | 1 | 0 |
//  | -10 | 1 | 1 | 1 | 1 | 0 | 1 | 0 | 1 |

//Two's Complement
//	- How computers represent negative numbers today
//	- Invert the values 
//	- add binary 1
//	| 5  |		   | 0 | 0 | 0 | 0 | 0 | 1 | 0 | 1 |
//  |    | invert  | 1 | 1 | 1 | 1 | 1 | 0 | 1 | 0 |
//	|    |  add 1  | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 1 |
//	| -5 |         | 1 | 1 | 1 | 1 | 1 | 0 | 1 | 1 |
//
//  | -5 |         | 1 | 1 | 1 | 1 | 1 | 0 | 1 | 1 |
//  |    | invert  | 0 | 0 | 0 | 0 | 0 | 1 | 0 | 0 |
//	|    |  add 1  | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 1 |
//  | 5  |		   | 0 | 0 | 0 | 0 | 0 | 1 | 0 | 1 |

//Bitwise Operators
//	- Bitwise operators operate on intergral types, treating them as a collection of bits
//	- & (bitwise AND)
//		- operand & operand
//	- | (bitwiase Or)
//		- operand | operand
//	- ~ (bitwise NOT)
//		- ~operand
//	- ^ (bitwise XOR)
//		- operand ^ operand
//	- << (left shift)
//		- operand << operand
//	- >> (right shift)
//		- operand >> operand

//Bitwise AND(&)
//	- compares two bits
//	- returns a value of 1 if both bits are set, 0 if they or not.
//	| 255 |   | 1 | 1 | 1 | 1 | 1 | 1 | 1 | 1 |
//  | 170 | & | 1 | 0 | 1 | 0 | 1 | 0 | 1 | 0 |
//  | 170 | = | 1 | 0 | 1 | 0 | 1 | 0 | 1 | 0 |
int BitwiseAND(int lhs, int rhs)
{
	int result = lhs & rhs;
	return result;
}

//Bitwise OR(|)
//	- compares two bits
//	- returns a value of 1 if either bit is set, 0 if they are not
//	| 204 |   | 1 | 1 | 0 | 0 | 1 | 1 | 0 | 0 |
//  | 170 | | | 1 | 0 | 1 | 0 | 1 | 0 | 1 | 0 |
//  | 238 | = | 1 | 1 | 1 | 0 | 1 | 0 | 1 | 0 |
int BitwiseOR(int lhs, int rhs)
{
	return lhs | rhs;
}

//Bitwise NOT(~)
//	- flips each bit
//	- If bit's value is 1 it becomes 0 and if it's value was 0 it becomes 1
//	| 204 |   | 1 | 1 | 0 | 0 | 1 | 1 | 0 | 0 |
//  | 51  | ~ | 0 | 0 | 1 | 1 | 0 | 0 | 1 | 1 |
int BitwiseNOT(int lhs)
{
	return ~lhs;
}

//Bitwise XOR(^)
//	- exculisive or, compares two bits
//	- returns 1 if both bits are different, 0 if they are the same
//	| 204 |   | 1 | 1 | 0 | 0 | 1 | 1 | 0 | 0 |
//  | 170 | ^ | 1 | 0 | 1 | 0 | 1 | 0 | 1 | 0 |
//  | 102 | = | 0 | 1 | 1 | 0 | 0 | 1 | 1 | 0 |
int BitwiseXOR(int lhs, int rhs)
{
	return (lhs ^ rhs);
}

//Bitmasks
//	- used to perform a single bitwise operation on a set of bits
//		- often used for multiple boolean values
//	- can be used to turn on and off various bits within a set
//		- also to check the state of a bit within a set

//Bit Shifting
// - The << and  >> operators shift bits to the left of right, by a value
int BitshiftLeft(int val, int shift)
{
	return val << shift;
}

int BitshiftRight(int val, int shift)
{
	return val >> shift;
}
void main()
{
	int a = BitwiseAND(5, 6); //4
	int b = BitwiseOR(5, 6); //7
	int c = BitwiseNOT(6); //-7
	int d = BitwiseXOR(5, 6); //
	int e = BitshiftLeft(5, 2);
	system("pause");
}