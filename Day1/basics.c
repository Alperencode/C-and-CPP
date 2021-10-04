#include <stdio.h>

int main()
{
    /*  [Data Types]                                           |    /* [Variable Types]
    Basic Datatype       : int, char, float, double            |    - local variable       = Inside of a code block { }
    Derived Datatype     : array, pointer, structure, union    |    - global variable      = Can use outside of code block 
    Enumeration Datatype : enum                                |    - static variable      = Description is down there  
    Void Datatype : void                                       |    - automatic variable   = Its basically default variable
    .                                                          |

    static variable = when used for functions it makes the function private for other files,
    if its used in fucntion it makes the variable only visible for that function


*/
    const int x = 5;                // 'const' once declared, they cannot be changed 
    char hw[11]= "Hello World!";
    int local = 10;
    static int statik = 10;
    auto int automatic;

    local = local + 1;
    statik = statik + 1;

    printf("%s",hw);
    printf("\n");

    printf("local: %d",local);
    printf("\n");

    printf("static: %d",statik);
    printf("\n");

    printf("auto: %d",automatic);

} 
