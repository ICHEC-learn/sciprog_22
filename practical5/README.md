### Folder structure
1. The *Fibonacci.c* file is the code for the Fibonacci question
2. The *Arctanh.c* file is the code for the question 2
### Some code define descrption:
- int i declares an int.
- int *p declares a pointer to an int.
- int &r = i declares a reference to an int, and initializes it to refer to i.

### Exercise 1 Create a Fibonacci function and calculate the fabonacci series

**Answer:**

- Enter a positive integer n
20
- The fibonacci sequence is: 
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 
55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 
6765, % 

### Exercise 2 The Inverse Hyperbolic Tangent function can be calculated on a computer in several ways. Different methods behave differently and therefore differ in terms of speed, accuracy, precision and range of input accepted. Assume that both methods accept only real values whose absolute value is less than 1
1. Get the user in enter a real positive number delta.
2. Implement a function artanh1(x) as an approximation to this Maclaurin series. As the series is infinite, we will set the function to stop when the element in the series is smaller than a given precision, delta.

**Answer:**
Enter the precision for Maclaurin series
4
The difference at x=-0.900000 between them is 1.7235120361
The difference at x=-0.800000 between them is 1.1033312449
The difference at x=-0.700000 between them is 0.7692869299
The difference at x=-0.600000 between them is 0.5512925465
The difference at x=-0.500000 between them is 0.3958797346
The difference at x=-0.400000 between them is 0.2790617421
The difference at x=-0.300000 between them is 0.1878570762
The difference at x=-0.200000 between them is 0.1143043297
The difference at x=-0.100000 between them is 0.0530156056
The difference at x=-0.000000 between them is 0.0000000000
The difference at x=0.100000 between them is 0.0479904376
The difference at x=0.200000 between them is 0.0938933325
The difference at x=0.300000 between them is 0.1407017364
The difference at x=0.400000 between them is 0.1918850485
The difference at x=0.500000 between them is 0.2520386984
The difference at x=0.600000 between them is 0.3281489952
The difference at x=0.700000 between them is 0.4326146532
The difference at x=0.800000 between them is 0.5925056211
The difference at x=0.900000 between them is 0.8931464327
