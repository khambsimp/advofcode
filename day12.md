# Day 12: Garden Groups
Problem URL:
https://adventofcode.com/2024/day/12

Problem Statement: Calculate the fencing perimeter around each of the individual garden fence regions.

Limitations: None Really

Language: Pseudocode, C      

Input: Ascii valued or char valued data, dictating the area covered by a specific plot of plant. Data is given as a rectangle, meaning the length and with of the plots available are fixed.

Output: A Natural Number, or unsigned integer giving the cost of the entire plot. Note that the cost is the area of the particular plot multiplied by the perimeter around it.

Problem reminds me of the 4-color Theorem. An argument that on a 2-D map to distinguish between individual features requires at most 4 different indicators for different features. It says that any 2-D field requires at least 4 different produce grown.

Solution:

Step 1:
Define a suitable algorithm for a much smaller subset of the larger problem that gives the correct value. Then scale this to the more varied geometry within my test file.

What do we know about the input file?
Example 1
AAAA
BBCD
BBCC
EEEC

1. It is a square. What assumptions can we make about squares? Height = Width. Meaning once I have the width, then I have the height. Were this a stream of data, let's say I counted the number of characters until the newline character.

2. Count until newline character. Store this integer as width.
Done!

3. That same integer can be set to the height of the field in the text character.
Done!

4. Now lets characterize each different char as representing a different crop.
This could be done with getchar()! The stdin receives a file as stream of data.
It is easier to perceive the program in this way, and use memory to save the data the program is iterating through. Try structuring the Software this way.

5. When a char is first encountered it should be stored. When a new char is encountered it should be stored as well. Note the occurrence of a particular crop is also equal to its area. This value should also be stored as an integer. <- here!
5.1 the first char encountered is stored, if in a row the perimeter is calculated. if different chars are on the same line can they be counted and stored?

6. Now assume we are traversing the data like a stream. We know which row and column we are at. And we know if we have touched a different crop or not. Assuming we are moving right to left, and top to down to calculate contiguous areas we must do what?

7. We must designate all the plots that are "single plots" with their own perimeter this is easiest.

8. We must traverse the entire area at least once again. We must designate each "row plot" its own entity and perimeter, this one is medium.

9. Next we must designate the plots which are contiguous by continuing on another row.

# Test Solution
To test my solution simply:
Command Line Interface Instructions:
Mac OS Terminal:
1. Fork this repository to your own computer using git.
2. Then make sure to install your favorite C compiler. I recommend gcc or clang.
3. Compile this program within the advofcode directory.
4. Pipe the testplot.txt testfile into the day12 executable and check the resulting value of the testplot.txt calculated cost. Is it correct?






























.
