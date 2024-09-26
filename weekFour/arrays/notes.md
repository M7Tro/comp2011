Part 1:

Array is a collectino of homogenous objects of the same type. 

Note that you can't have an array of reference variables. 

Array cannot be initialized with negative dimensions: int numbers [-4] gives complation error. 

It must be initialized with a constant number: int n = 3; int numbers [n]; gives error. 

Successive elements are stored in contiguous memory: their memory locations/addresses are successive without gaps.

To access an element, use the subscript [] operator. 

Each element of an array is treated like a normal variable. You can pass it to a function by reference or by value. 

You can do cool stuff like x[3] *= 2; as if x[3] is a normal variable. 

Note that the C++ compiler does not automatically check that the index passed to the subscript [] operator is within the bounds. There would be no compilation error for writing x[-2] = 5 for a defined array x. Writing this will put the value of 5 to the memory space which is 2 * 4 = 8 bytes (syze of two ints) before the array x. This is a common cause of the run-time error called segmentation fault - when the program trespasses into memory locations that may not belong to it. 

If there are fewer values than the dimensions inside array, uninitialized positions will be assigned value 0. int x [3] = {1, 2}; The last element is 0. It is a compilation error if more values than the size is given. 

Once array is defined, you can't assign values using the initialization syntax: x = {1, 2, 3} would give error. 

You can't declare an array of references: int& x [] = {x, y, z} would give error. 

While elements of an array can be treated as normal variables, the array itself cannot: given int x [] = {1, 2, 3}
    x = 8 or x += 2 or x = y would give error. 


A function that works with an array usually should also be given both the identifier and the array's size.

An interesting way of checking if the input operation is successful: if (!(cin >> numbers [j])){ return -1 }

You can also dfine an array of constant variables: const int x [] = {1, 2, 3}; It must be initialized when defined. 

Arrays of constant variables are useful for defining formal parameter lists of functions: that way they become immutable inside the function, while the array passed by the caller is writeable. 

Part 2:

You can also define a multi-dimensional array. 

int a[2][3] = {1, 2, 3,   4, 5, 6};

You can initialize an array row by row or linearly (all the array cells are stored lineary in the memory anyway).

Row by row: int array [2][3] = {
    {2, 3},
    {3, 4}
}


Don't forget that arrays in C++ are homogenous. 

sizeof() operator can determine the size of the data type and the size of a variable. 

It can return the total size of an array in bytes. 

Don't understand fully what it means, but C++ stores multi-dimensional arrays in row-major order: row by row. In row-major order, the last dimension index runs slowest.

Part 3

A sequence of chars can be interpreted as a word/sentence/paragraph. 

To represent a character string by a 1D character array use end-marker '\0'

A null character '\0' denotes an end of a char array. 

If you have a function that accepts a char sequence string as a paremeter, you do not have to pass the length of the string. 

An interesting way to count the length of a char string:
    int i; for(i = 0; sequence[i] != '\0'; i++); cout << i;



Reading C strings with cin: 

cin will skip all the white  spaces before reading data of the required type until the next white space. 

White spaces are ' ', '\t', '\n'. 

For char x; cin >>x; and input like "   http ", the x value will be 'h'

For char x [20]; cin >> x; "   http  " will result in x == "http" 

cin is not good for multiple words or lines with newline. Instead, use cin.getline(char s[], int max-num-char, char terminator);

cin.getline() will stop when either max-num-char-1 characters are read or the terminating character is seen. The terminating character is not read into the string. 

The C-string terminating null character is automatically inserted at the end of the read string. 





Default cin terminates the input once it sees a whitespace character. If you try to initialize a string with input and write 'My name is Sultan' only 'My' will be stored. 




I still can't quite wrap my head around the C strings and the null character \0.

I will do some more research on this. 

There are two ways of working with strings in C++. The C-style and the string class. 

Essentially, there are a few main things I need to understand. A character array can be initialized with "" and a '\0' character will be assigned in the end automatically. You can also explicitly define it with {} and add a '\0' in the end. When calculating the length of a char array with strlen(), it will not count '\0' as a character. So "hkust" initialized char array has the '\0' symbol at index 5 and the strlen is 5. 