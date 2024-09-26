The next topic is recursion. 

I have studied it before for my Java sourse in spring of 2024. It was quite bad. 

The course was deliverd online. We weren't really explained anything. On the final exam, I couldn't solve the recursion problem.

The lectures for this COMP 2011 course seem to include some good advice on the approach you should have when solving something with recursion.

First of all, what kind of problems are good for recursion? Examples given from the lecture notes are: calculating the moves to finish the Hanoi towers for n discs, calculating factorial of n, calculating nth Fibonacci number, drawing a polyline of n segments. What is common among them? Each problem is relatively simple to solve for small value of n. For each problem, there is a small enough value of n at which the solution is obvious, and if you increase the value of n, you can find the solution quite fast given that you have the solution for n-1. 

Essentially, a problem that could be solved recursively is one that gets easier as a certain parameter decreases until it reaches a terminating, non-recursive value of this parameter that has a given solution. Factorial of 1 is 1. Tower of one Hanoi disc could be solve in one move. The first two Fibonacci numbers are 0 and 1, while the rest are the sum of the previous two. 