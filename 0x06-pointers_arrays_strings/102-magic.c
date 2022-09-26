#include <stdio.h>

int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;
/**
* write your line of code here...
* Remember:
* - you are not allowed to use a
* - you are not allowed to modify p
* - only one statement
* - you are not allowed to code anything else than this line of code
*/
<<<<<<< HEAD
*(p+5) = 98;
/** ...so that this prints 98\n */
=======
*p[5] = 98;
/* ...so that this prints 98\n */
>>>>>>> 98f36442f12da449c6b5d30a7e00d239f0d762c3
printf("a[2] = %d\n", a[2]);
return (0);
}
