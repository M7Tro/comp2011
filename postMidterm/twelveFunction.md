Midterm analysis:

    My weakness is understanding the way types are mutated. How does const int& work? 

    I also tried to mutate a const int [] array and lost 5 points.

    For some of  the tasks, I did not consider certain logical aspects:

        Both for Caesar's and Vignette cipher, I did not consider adding whitespace. On whitespace, I simply skipped. A mistake.
        
        For Vignette cipher, I did not consider overflow of the key and did not use modulo operator %26 to account for letters like z. 

        For recursion problem that counts the blobs, I did not consider that the white blocks that were already counted would count again. 



Function delcaration and function definition:

    Function prototype example: int max(int, int);

    Function prototyepe constists of function name, return data type, number of formal paramters, data type of  the formal parameters. 

    Identifier names of the formal parameters are not part of the signature as the names are immaterial.

    A function prototype describes the interface of the function: what parameters it takes in and what value it returns. 

    A function prototype is also called the application programming interface (API).

    A function is declared by writing down its interface - its function prototype. 

    A function is defined by writing down its function header plus its function body. 

    A function definition asks the compiler to generate machine codes. 

    A function declaration just inorms the compiler about the function's inteface without generating any machine codes. 

    A function may be declared many times, but a function can be defined only once. 

    When a function is defined, it is also declared. But simply declaring function does not define it. 

    In C++, all functions must be declared before they can be used so that the compiler can make sure the exact number of arguments are passed and do type checking on the arguments passed to the function. 

    Consider this: if unction A wants to call function B, function B must be declared/defined before OR declared inside function A before calling function B.

    Note that the function need not be defined before it can be used, although it must be defined eventually somewhere. 

Function Overloading:

    In C++, all functiona are global (exception is Class functions). That means that in general all functions can see each other.

    A function is identified by its signature. 

    A sunfction's signature includes its name and the list of formal parameters without their identifier names.

    No two C++ functions can have the same signature even if they have different return type.

    BUT two C++ functions can have the same name while having different signatures. 

    When there are two identical names for a function with different signatures, it is called function overloading.

    Function prototypes can not different only in return type. If they have the same name, they must also have different types of the former parameter list. 

    REMEMBER: return type is not part of the function signature. 

    When an overloaded function is called, C++ will determine exactly which function among those with the same name should be called - this is called function resolution.

    Function resolution is done by comparing the types of the actual parameters passed in a function call with the types of the formal parameters in the function definition to find the best match.

    The best match is found in the following order:

        exact match 

        match after some type promotion (char to int, float to double)

        match after some standard type conversion (between integral types, between floating types, between integral and floating  types)

        match after some user-defined type conversion (???)

    For successfuly function resolution, there must be a preferred option. If there isn't a best match, there will be compilation error.

Default function argument:

    sometimes you want to give a function soem default behavior, while also having option to modify/change it. 

    C++ allows the user to call a function with fewer arguments if all he wants is its default behaviour, and with more arguments if he wants some particular behaviour of the function. 

    A function may have more than 1 default argument.

    All default arguments must be specified at the end of the formal parameter list. 

    Example of a function prototype with default values: void func(int x, float& y, char gender = 'M', bool alive = true);

    Default arguments may be specified ian a function declaration or function definition, but noth both. Usually we put it in the functin declaration. Why????

    A function with default arguments looks like several overloaded functions, but it is not.

    Example of a useful function with default value is cin.getline: 

        cin.getline(char s[], int max-num-char, char terminator = '\n') 

        cin.getline(char s[], int max-num-char)

        Here, the default terminator is the newline character 

        