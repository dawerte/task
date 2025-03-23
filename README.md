# task

Task 1 
Coefficients are calculated and approximated using the Taylor Series, where

a = value of the function at certain point from (0:2)
b = value of the first derivative at certain point from (0:2)
divided by 1!
c = value of the second derivative at certain point from (0:2)
divided by 2!

Task 2 

After reading and studying the the article I modified the length of coefficients bits:

a - 3 integer bits, 24 fractional bits
b - 3 integer bits, 11 fractional bits
c - 3 integer bits, 10 fractional bits

This gave me an error around 5.7e-06 which meets the expectations
(error < 5.25e-06)

Task 3
After studying the C++ model The design was implemented in SystemVerilog. I tried to implement everything according to the article and also C++ model. I think I assigned and truncated bits correctly but despite of that my RTL model gave me error only at the level e-03, e-04.

Task 4
I used Verilator and GTKWave to simulate my design.

Task 5

I've only read about using cyclic heuristic direct search algorithm to optimize coefficients more. I was focused more on mandatory part but with some time it could be implemented in MATLAB (Octave) using some numerical methods.


