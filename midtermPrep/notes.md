Started this folder to prepare for C++ midterm. I need to go through a lot of chapters.

I still struggle with meaninglesness of life. And there are also people all around me that piss me off. I think I can live in this world. I just don't know why I would want that. 



Lecture 1: Introduction to C++ 

Machine(binary) language is unintelligible. Assembly language is low level. Uses mnemonic names ofr machine operations. Explicit manipulation of memory addresses/contents. Machine-dependent (the code you write on assembly for a same task will be different on different machines).

The essence of a high level language is that it is machine-independent/portable and readable. 

The flow of compilation is: Source Code => Machine's compiler => Machine code => + executable code from linker => output. 

A compiler translates source code into machine codes that run directly on the target computer.




Lacture 2:

A program consists of a sequence of statements. Some parts of a statement are called expressions. Statements are like stencens while expressions are like phrases within a sentence. Exaples of an expression are logical expression x  > y or arithmetic expresssion 5 + 4.

To compile a program using g++ compiler, use g++ -o programName programName.cpp  

By default, the name of the outputted executable code is a.out

Every program must have exactly one and only one main() function. 

Each simply C++ statement ends in a semicoln ";"

Comments /* */, // 

#include will include infomration of a libary - a collectoin of sub-programs e.g. #include <iostream> gets the information of the standard C+ library called iostream that deals with I/O. 

Library information files that we include at the top are called header files. 

Note that the Standard C++ library header files have no file suffix .h 

Also, header files created by users are delimited by double-quotes "" instead of < >.

C++ does not have strict formatting rules. Blanks, tabs, lines are ignored.

A character is represented with single quotes ''. 

An escape charecter \ is used for special characters: '\t', '\n', '\b', '\0'. 

You can create character strings with "". Character strings are not a basic data type in C++. They are sequences of basic char data. 

Note that there is also a standard C++ library for creating strings using a string class.

bit stands for binary digit.

Names that you associate a certain value/variable with are called identifiers.

C++ identifiers are case-sensitive. 

Usually, identifiers starting with '_' are used for system variables.

A variable is a named memory location. 

A variable can be declared (you notify compiler about existence) and defined (you give a variable its value).

When a variable is defined, the compiler allocated memory for it. 

The amount of memory is equal to the size of its data type. 

If a variable is declared but not initialized, it might contain a garbage value (global variables, defined outside of any function or block, are an exception; global variables have a default value dependent on the data type).

Assignment operator, unary increment/decrement operator. Pre-increment and post-increment.

Operators have different associatibity: right to left or left to right. Unary minus, increment/decrement, unary !, and assignment operators have right-to-left associativity.

Associativity decides the grouping of operands with operators of the same level of precedence.

You can assign save value to multiple variable at once like: int x, y, z; x = y = z = 0;

An expresssion hasa value which is the result of some operation(s) on its(theirs) operands.

For some statements, lke cin >> x; or x  = 6;, taking out the ; character turns them into expressions. Works for input, output, assignment, definition (int x).





Lecture 3: Program Flow Control 1

The essence of a program flow control is in using selection and iteration.

If statements. Relational operators (==). The result of a relational operation is a boolean value.

Logical operators modify/combinee boolean values.

&& takes precedence over ||. 

C++ also interprets integrers as boolean. If you use if(x = 0){smth} then the codeblock in curly braces {} will not be executed.

Ternary if-else operator: ?: us used like (bool) ? intValueOne : intValueTwo

Dangling else is grouped with the most recent if.

A convenient way to input from console is: while(cin >> x){...}

Sometimes, you can compact your for loop iteration like this:
    for(int j = 1; j <= number; factorial *= j++);
    
    Note how in this code we use the value of j while also incrementing it.









Lecture 4: C++ basics 2

    Interestingly, size of bool in C++ is 1 byte. 

    Size of char is 1 byte, short is 2, int is 4, float is 4, double is 8. 

    ANSI C++ is the international standard for C++. 

    ANSI C++ requires that size of short <= int <= long <= long long

    Each integral data type has 2 versions: signed version or unsinged version. signed short, signed long, unsigned short, unsighed int, unsighed long.

    Signed versions are the default.

    float values are for single-precision numbers, while double are for double-precision. Practically, it means that floats can represent numbers with up to about 7 significant figures. Double values can do it until 15-17 significant figures. 

    In scientific notation, a number has 2 components: a mantissa and an exponent. 5.16E-02 is like 5.16 multiplied by 0.01

    More mantissa bits = higher precision. More exponent bits = higher value large number.


    Arithmetic expressions with only integers use integer arithmetic. 

    Arithmetic expressions involving only floating-point numbers use floating-point arithmetic.

    For integer division and floatin-point division, results are different: 5 / 2 is 2 while 5.0/2 is 2.5

    Following C's convention, in C++ zero may be interpreted as false while non-zero values may be interpreted as true. 

    Even if you put other values to a bool variable, its internal value always is changed back to either 1 or 0.

    You can output the boolean value in English using cout << boolalpha; Or to reverse use cout << noboolalpha;




    For most languages, data types have to be matched during an operation. It is called type checking. 

    However, sometimes different data types are made compatible with each other using coercion.

    Coercion is the automatic conversion of the data type of operands durinng an operation. 

    3 + 2.5 = int + double will be changed to 3.0 + 2.5 = double + double 

    You can use character literals like 'A' with arithmetic operands like + or -. Those character literals would be converted to intebers: big_char = smal_char + 'A' - 'a';

    In this example, char literals are coerced by "promoting" them to a larger data type int. 

    Automatic type conversion can also happend during assignment, if a float/double is assigned to short/int.

    Narrowing conversion changes a value to a data type that might not be able to hold some of he possible values. 

    Widening conversion changes a smaller type into bigger one that can accomodate the original range.  

    C++ uses trunction rather than rounding in converting float/double to short/int/long. That is, 3.7 => 3 or 2.1 => 2. 

    You can do manual type casting with statict_cast<data-type>(value)  For example:

        float x = static_cast<double>(n) / k; 
        float y = n/static_cast<double>(k);
        float z =static_cast<double>(n)/static_cast<double>(k);


    In C++, there are constants: values that don't change. Some constants are literals: 'a', or 123, or 12.23, -2.90E+11, "hello"

    Yeah, by the way, you can represent floating-point numbers in scientific notation like 3.4E-1; Note that 3.4E-1 is same as 3.4E-01; or 3.4E-001;

    Another type of a constant value is a symbolic constant. A named constant with an identifier. 

    By convention, named constants are named with all letters being capitalized.

    A symbolic constant must be defined and/or declared before it can be used. const int x = 3;

    Unlike variable definitions, memory is not allocated for constant definitions with onl few exceptions.

    Using <cmath>, you can round values up: ceil(3.2) => 4

    You can output value of data used by variable/data-type with sizeof(). It returns the size measured in bytes. 

    Note that the figures returned by sizeof might be different between 32-bit and 64-bit machines.

    Floating point dat is represented with a sign bit, exponent bit and mantissa bit. All floating-point data types in C++ are signed (range includes both positive and negative values).


    Overflow occurs when a data type is used to represent a number larger than what it can hold. Underflow is when number is smaller than lowest bound of the range: happens if you assign a negative number to an unsigned integer. 

    Module arithmetic is supported by the % operator. It allows a -ve (negative) divisor. (-17)%5 = -2. 17%(-5) = 2. 17%5 = 2.

    If either of operands is long double/double/float, convert other to long double/double/float. 

    Otherwise, integral promotions shall be performed.




Lecture 5: Program Flow Control II 

    You can next loops within each other. 
    
    A break causes the innermost encolsing loop to exit immediately.

    A continue causes the next iteration of the enclosing loop to begin.

    A switch statement is a variant of the if-else-if statement, that allows multiple choices based on the value of an integral expression. 

    A switch statement is also compatible with characters as they can be evaluated into integers.

    The expressino for a switch must evaluate to an integral value (inteer, char, book in C++). Two cases cannot have the same value.

    But several cases can share the same action statement. 

    When a case constant is matched, the statements associated with the case are executed until break, return or a switch statement. 

    Difference between switch and if-else is that switch checks equality of a value, while if-else allows for more complex logic.

    You can define a new data type using enum:

        enum weekDay {MONDAY, TUESDAY, CRAZYDAY = 88}; 

        An enumeration is a type that can hold a finite set of symbolic(meaningful) objects. 

        Internally, those objects are integers. But enums can make it easier to understand the code.

        Symbolic objects are given increasing integer values from 0 by default. You can speficy it if you want. 

        enum objects are basically named integer constants. 

        You define a variable using enum type like: weekDay closestBirthday = WEDNESDAY;


    You can use a do-while loop to execute some code with iterative potential at least once:
        do {...} while (<bool>);



Chapter 6 is problems for basics and control. Just solve some tasks ater.


Chapter 7: function

    A function is a named piece of code. The syntax is:
    <return-type> <function-name> (<former-parameter-list>){<function-body>}
    
    When a program is run, the shell - command interpreter of the operating system - looks for the main() function and starts execution from there. 

    Formal parameter list & Actual parameter list:
        formal parameter lsit appears in the function definition. It is a list of variable declarations. 

        Actual parameter list appears in a function call. it is a list of objects passed to the called function. 

        There is a one-to-one correspondence between the actual parameters and the formal parameters. 

        During the function call, initializations are performed using formal and acutal lists: 
            type1 var1 = object1, type2 var2 = object2, etc.

    As C++ is a strongly type programming language, the data type of an actual parameter and its corresponding formal parameter must be the same or "matched". 

    The function will not break if automatic type conversion - corcion - is possible. 

    The first line in function syntax is calle functio header: int main()

    Rest is the body: {}

    It is legal to have an empty function body. But the {} braces must always be present.

    The return statement returns some expression value and also affects control/flow of the program.

    "void" is nothing. empty type. 

    You cain input the formal parameter list as "void" for better readability.

    Binary libraries are sets of compiled functions.

    You can pass an expression to as an actual parameter that will be executed first before function is called.


    Parameter passing methods: pass by value and pass by reference

        Passing by value, the value of an actual parameter is copied into the ofrmal parameters of the function. 

        If a variable is passed, its value can not be changed inside the function: only the copie value.

        Passing by reference is another option. 

        You can define a reference to a variable like this: int& x = y or int &x = y;

        A reference variable must always be bound to an object, so it is initialized when defined.

        Once a reference variable is defined, it cannot be 're-bound' to a different object. 

        You can declare reference variables as formal parameters to a function: 
            void swap (int& a, int& b)

        If you pass by reference, changes made to formal parameters will also apply to the actual parameters.

    Function all has higher precedence than other operators. 

    Before C++11, you could not define a function inside another function: almost all functions were global. 

    After C++ 11, you can define local functions inside another function by the lambda expression. 

    Some of the formal parameters can use reference while other can use value if you want. 

    All the local variables defined inside a function, including the formal parameters, are destroyed on return of the function call. 

        These local variables are created every time the function is claled 

        These local variables created on the current call are different from those crated in the previous calls. 

        If a formal parameter is a reference variable, only itself is destroyed: the referenced variable persists. 

    Pass by reference is more efficient when a large objet has to be passed to a function as no copying takes place. But there is a risk that you might modify the object.

    Is there a way to pass a large object to a function such that the function cannot modify its value? 

    Yes. You can, and encouraged to, const references.

    You may pass both const and non-const arguments to a function that requires a const reference parameter.

    But you may only pass non-const arguments to a function that requires a non-const reference parameter. 

    You can also return values from your function by value or by reference. 

    To initialize a random number generator, use <cstdlib> library, initialize int seed from user input, initialize random number generator with srand(seed) and retrieve the values with rand().

    == is higher precedence thatn &&.




Lecture 8: Array - a collection of homogenous objects

    Array is a collection of homogenous objects (objects of the same type)

    Array elements cannot be reference variables.

    1D array: int number[1000];

    If you specify size of an array with an identifier, the identifier must correspond to a constant value: const int n = 3; int x [n];

    Defining an array with -ve values results in compulation error.

    Successive elements are stored in contiguous memory. 

    An element is accessed with a subscript oeprator []

    Each array element is treated lke a regular variable. You can pass it by value or reference, assign value to it, etc.


    You can manipulate array element like this too: x[j] *= 2;

    C++ compiler does not automatically check that an array index is out of bound.

    There is no compulation error for the code: int x[10]; x[-2] = 5; x[100] = 9;

    Assigning x[-2] = 5 will put value of 5 2 * 4 bytes before the array x. 

    This is a common cause of the run-time error called segmentation fault: program trespassing into memory locations that may not belong to it. 

    Like any local variable, when array is defined, its elements are not initialized automatically. 

    You can write: int x [3] = {1, 2, 3};

    If number of values provided for initialization is less than dimension size of the array, the uninitialized variables will be assigned a default value of 0.

    It is a compilation error if there are more values than the array size. 

    Once defined, you cannot assign values to an array using the initialization syntax. 

    int b[5] = {1, 2} //-> 1, 2, 0, 0, 0
    int c[5] = {} //-> 0, 0, 0, 0, 0
    int d[] = {1, 2, 3} //-> compiler determines size automatically

    While an array element can be treated like a normal variable, the array itself cannot. 

    Array passsed to a function: someFunction(int score[], int size)

    When passing an array with n dimensions, size of those dimensions must be specified. 

    Interesting way to initialize stuff if(!cin >> score[j]) return -1;

    When an array is passed into a function by value, although array itself is passed by value, its elements are practically passed by reference. 

    Changes done on array elements will be refleced on the original array. 

    When a function returns a reference variable: int& someFunction(), the return statement just contains a normal expression. like return x. And either value or reference is returned depending on the specified return type. 

    You can initialize a random number generator using srand(time(0)) (include <ctime>)

    An array of constants can be made using const int x [] = {1, 2, 3, 4};

    Must be initialized when defined. Once defined, elements cannot be changed. 

    A useful case for array of constants is in a formal list of a function to make the values passed into function immutable. The actual array passed can be a normal writable array. 

    liek function(const float array []) and then pass a mutable array float numbers = ...



    The array elements are variables. But the array itself is a constant that represents a memory addresss. 

    When a function reeives an array, it gets its address passed by value. When accessing its elements, the elements are accesed by reference since the adress corresponds to the original array. 

    You can define a multidimensional array int a[2][3] = {1, 2, 3,  4, 5, 6};

    A 2D array can be initialized row by row like array int a[2][3] = { {1, 2, 3}, {4, 5, 6} }

    Or you can pass it a 1D array since elements are stored linearly in the memory anyway. 

    When specifying an array in the formal list of a function, you must make sure that a function can understand what to expect. For a 2D array, you can't pass int array [][]. You must specify the second dimension size: int array [][3]; 

    in C++, elements of a multi-dimensional array are stored in row-major order. Row by row. 

    That is why last dimension index runs fastest, hwile the first dimension index runs slowest.

    This is due to how close memory locations are to each other depending on how array is stored and which element you access. 

    