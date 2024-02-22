# Modifiers

## Long and Short

These are the modifiers These are the modifiers used to make it possible for a data type to take either less or more memory. <br>

Suppose if size of integer is of 4 bytes in your computer,then using short in front of integer makes it of 2 bytes. <br>
<code> sizeof(short) <= sizeof(int) <= sizeof(long) </code>

Typically signed range is from -32768 to +32767 and the unsigned range is from 0 to 65535 for 2 bytes integer.

1. sizeof(short) is less than or equal to sizeof(int) and is less than or equal to sizeof(long) 
2. Writing signed int some_variable_name; is equivalent to writing int some_variable_name;
3. %d is used to print "signed integer"
4. %u is used to print "unsigned integer"
5. %ld is used to print "long integer" which is actually equivalent to signed long integer.
6. %lu is used to print "unsigned long integer"
7. %lld is used to print "long long integer" 
8. %llu is used to print "unsigned long long integer"

## Exceeding The Valid Range of Data Types 
for a 32-bit representation if we try to exceed the range then you have toconsider one extra bit that is 33rd bit but as we are available with only 32 bits therefore there is no way we would be able to represent higher value than the maximum value and we come back again to 0.

 <code> For 32 bit unsigned integer -> Mod 2<sup>32 </sup> </code><br>
  <code> For n bit unsigned integer -> Mod 2<sup>n </sup> </code>


## Characters 
1. Size of character is equal to 1 byte,
2. Signed character range is from -128 to +127
3. Unsigned character range is from 0 to 255
4. Negative values won't buy you any additional powers.
5. In traditional ASCII table, each character requires 7 bits.
6. In Extended ASCII table, each character utilize all 8 bits.


Extern variable simply says
to the compiler,
go outside from my scope
and you will find the definition
of the variable that I declared.