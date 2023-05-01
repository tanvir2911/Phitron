// Document link: https://docs.google.com/document/d/15yw1B-S63VL3LqQP86bCc4guX5BRW2J5Pktas_Bg7JE/edit

Note: WAP = Write a program

WAP that takes n integer numbers, and sum up all the integers in that array.

Sample input
Sample output
5
1  2  3  4  5
15
6
5 6 7 8 0 1
27

WAP that takes n integer numbers, and multiply all the numbers in the odd indexed position. Indexing starts from 0.

Sample input
Sample output
5
1  2  3  4  5
8
6
5 6 7 8 0 1
48

WAP that takes a string as input, and shifts all the characters in the even indexed position by the following rule.
‘a’ becomes ‘b’
‘b’ becomes  ‘c’
…
‘z’ becomes  ‘a’

Sample input
Sample output
abcdefg
bbddffh
zfth
afuh

WAP that takes 2 integer arrays as input, then computes the intersection of the two arrays.

Sample input
Sample output
4
1 2 3 5
5
1 6 2 7 3
1 2 3
5
1 2 3 4 5
3
6 7 8



WAP that takes 2 integer arrays as input, then computes the union of the two arrays.

Sample input
Sample output
4
1 2 3 5
5
1 6 2 7 3
1 2 3 5 6 7
5
1 2 3 4 5
3
6 7 8
1 2 3 4 5 6 7 8


Write a class named ‘Cuboid’.
Create 3 private variables in the class. length, width and height.
Create 2 constructor. One is an empty constructor that takes nothing as input and initializes length, width and height as 0. Another constructor takes 3 values as input and initializes length, width and height as the given values.
Write a public function named ‘getVolume’ that calculates the volume of the Cuboid and returns the desired Volume.
Write a public function named ‘getSurfaceArea’ that calculates the surface area of the Cuboid and returns the desired value.
Create an array of ‘Cuboid’ objects(like 4 or 5 objects) and initialize length, width and height with any value you like. But make sure to give different length, width, height to different objects.
Sort the ‘Cuboid’ objects in the increasing order of Volume by writing a custom comparator.
Sort the ‘Cuboid’ objects in the increasing order of surface area by writing a custom comparator.

	Note: Volume = l*w*h
	          Surface Area = 2*l*w+2*l*h+2*h*w
	          l = length, w = width , h = height
