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