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


On Stackoverflow, people actually say to not use pointers unless  there is nothing else you can use. 

You can also use pointers with instead of arrays in a strange way like this: char* = "Hello world"; It is a pointer that points to a string literal. 

From a YouTube video on the importance of learnign pointers: 

    Pointers are one of the most difficult subjects in programming. 

    Why would you need to see what is located at the memory address of a variable, if you already have the variable at this address? Can't you just look at the variable? 

    Think about the binary number system. You need to understand it to know how ASCII encoding works. 

    Same with pointers. If you know pointers, you would be able to create programs that you otherwise would not be able to write. 

    If you are reading this on a monitor, it updates itself probably 60 times per second. 

    Every time the monitor redraws itself, a pointer it scannign through the video memory and replaces it with video data. This is what makes the screen change. Pointers are almost always involved in software that requries change/refresh/redraw of a screen. 

    Some data structures require a pointer. Pointers are the only way to see and understand data that is greater than a few bytes in size. 

    Pointers let you read and manipulate data in memory which is larger and more complex than a simple data type. 

    When should you NOT use pointers? 


A pointer can point to objects of basic types, objects of user-defined types, another pointer or even a funciton. 

Again, what is the difference between the pointer and a reference variable? 

To print the address of a variable use the ampersand & symbol. 

Of course, it is also possible to define a constant pointer. When defined, it must be initialized. Once initialized, a const pointer cannot be changed to point to something else. However, you can change the content in the address it points to.

A type* const pointer lets you change the content of a variable it points to, but not the address. 

A const type* pointer lets you change address the pointer is pointing to but not the content of a variable. 

int* const x = constant address

const int* x = constant value for a given address. A pointer to a const object does not have to be initialized when defined. 

You can combine inchangeable address and inability to change value with: const int* const p; 

What is interesting is that in C, the only way to pass arguments to a function is through PBV (pass by value). To implement passing by reference, without using reference variables like in C++, one may pass the address of an object to a function. Inside the function, the object is represented by a pointer. Then one may change the object's value by dereferencing the object's pointer inside the function. 

Common Uses of Pointer: 

    Indirect addressing (anchor text)

    Dynamic object creation/deletion

    Advanced uses that are not covered in the course: writing generic functions that can work on any data type, implementation of object-oriented technologies such as inheritance nad polymorphism 

Part 3: Pointer to Structure 

    You can pass a pointer to a structure like this: &studentRecord.

    And then you can use it with an arrow operator: studentRecord -> nameOfStudent or cooridnate -> x 

Part 4: Dynamic Memory/Objects Allocation and Deallocation 

    Normally, you create static objects. Their memory is allocated by the compiler during compilation. 

    What if you have an object whose memory is unknown until a user specifies it during runtime? 

    C++ allows you to create dynamic objects - on-the-fly at runtime. 

    The memory of dynamic objects has to be allocated at runtime explicitly by you using the operator new

    The memory of dynamic objects will persist even after the object goes out of scope???

    Memory of a dynamic object must be deallocated at runtime explicitly by you using the operator delete

    Static objects are manaded using a data structure called stack.

    Dynamic objects are managed using a data structure called heap. 
    dsfsdf