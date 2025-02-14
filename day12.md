# Day 12: Garden Groups
Problem URL:
https://adventofcode.com/2024/day/12

Problem Statement: Calculate the fencing perimeter around each of the individual garden fence regions.

Limitations: None Really

Language: Pseudocode, Python, C       

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

1. It is a square. what assumptions can we make about squares? Height = Width. Meaning once I have the width, then I have the height. Were this a stream of data, let's say I counted the number of characters until the newline character.

1.1 C .. count until newline character. Store this integer as width.
1.2 that same integer can be set to the height of the field in the text character. 































.
