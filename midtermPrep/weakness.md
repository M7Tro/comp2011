file for writing down topics where I feel fear:


File IO

String class

type casting 

enum 

Reference variables.

Using/passing const references


cin.getline, cin.gcount()

    While we specify the max amount of characters for cin.getline() as a second argument, I do not understand how they are counted.
    Similarly, I do not understand how cin.gcount() counts the characters.


I don't understand how the tower of Hanoi recursive solution was derived. I don't think I would be able to solve this problem if it was given on the exam. 

binary search funciton. Can't quite figure out how to make it work in all cases. I also don't undertand the base case from the solution where function quites at last first. I should also check out the non-recursive solution.




Lecture 10: Scope

    Scope - region of code where an identifier declaration is active. 

    Global scope (also file scope) - declaration outside of any function.

    Local scope (function or block) - identifier declared inside a function/block(for, while, if)

    Unlike local variables, global variables are given default value of 0 if not initialized.

    In C++, all functions are global. All function identifiers have file scope. 

    Function scope is local. Includes identifiers from formal list and body. Short-lived. Created when function is entered, destroyed when function is returns.

    Block scope is also local. For, while, do-while, if, else, switch, etc. Also short-lived: created when the block is entered, deleted when lock is finished. 

    There are also namespace scope and class scope that are not discussed in the course. 

    The scope has two implications: an idenfitier can only be used once in the same scope (even if data types are different) and same identifiers can be used several times if each has a different scope. In th latter case, the innermost scope will be used to associate identifier with its value. 