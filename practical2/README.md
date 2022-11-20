Codes for practical2

### Folder structure
1. The *Conversion* c file is the code for Conversion question
2. THe *Sum* c file is th code for Sum question

## Conversion

For this exercise you need to have Conversion.c or Conversion. f 90.
1. Compile and the program.
2. Notice that as we explained in the lectures the floating point and integer presentations do
not give the correct result.
3. How many binary digits are there in the number and how many can a float/real represent.
4. Let’s say we want to check the number of binary digits. Construct an expression in the code
that will do this.
5. For C use the function log f , which is part of the maths library.
6. For FORTRAN use the intrinsic function log

**Result:**
- When inum=5544321, fnum=5544321.000000, inum in binary=10000001100110010010101
- The number of digits is 23



## Sum

For this exercise use Sum.c or Sum. f 90.
1. Complete the code to make the sum
1 + 1
2 + 1
3 + 1
4 + · · · + 1
1000
2. Print out the difference between the two sums.
3. Is there a difference between sum1 and sum2 and are the two sums mathematically the same
or not?

**Answer:**
 Sum1=7.484478
 Sum2=7.485472
The difference between the two sum functions (sum1-sum2) is -0.000993.
The difference between the two sum functions (sum2-sum1) is 0.000993.
So there is a little difference between sum1 and sum2, the gap is `0.000993`.



