This is from the biggest lecture file so far: 107 pages.

Ivalue(Address) and rvalue(Content):

    A variable is a symbolic name assigned to some memory stotage. The size of the storage depends on the type of  the variable (char is 1-byte long and int is 4-byte long)

    The difference between a variable and a literal constant is that a variable is addressable. 
    
    For example, in x = 100, x is a variable and 100 is a literal constant.

    A variable has dual roles. Dpending on where it appears in the program, it can represent an:

        LValue - location of the memory storage (read-write)

        Rvalue - value in the storage (read-only)

    Lvalue - left value - can be used on the left side of assignment statement 

    Rvalue - right value - appear on the  right-hand side of assignment operation 

    ++x pre-increment operator receives x by referens and returns x by reference.

    x++ requires x by reference but returns by value.

You can get the address of a varialbe using the reference operator &

    cout << x << '\t' << &x << endl;

When you pass a variable by reference into a function, the function formal parameter variable has the same address as the original paramater(actual variable passed in the function call).


What is a Pointer?

    Syntax: <type>* <variable>;

    A pointer variable stores the addres of another variable. 

    If variable y stores the address of variable x, we say that "y points to x".

    Why do we need pointers if we have reference variables:

        Dynamic memory allocation: pointers let you manage memory during runtime. References are bound to an existing object. 

        Null representation: pointers can be assigned a speciall NULL value which represents that absence of a valid memory address. This is useful for error handling. 

        Pointer arithmetic: pointers can be manipulated using arithmetic operations allowing you to move through memory in a controlled manner. 

        Compatibility with legacy code and code written in C. 

    Note that a pointer variable is just a variable which has its own address in memory. 

    Example: int x = 10; int* y = &x; 

    You can get the content of a variable that the pointer poitns to using the dereference operator *:
        int x = 10; int* y = &x; z = *y; 