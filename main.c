// if-else ladder
#include <stdio.h>
int main()
{
    int num,a,b;
    printf ("Enter a positive integer: ");
    scanf ("%d",&num);
    printf ("Enter two divisible numbers: ");
    scanf ("%d %d",&a,&b);
    if (num%a==0 && num%b==0)
        printf ("%d is Divisible by both %d and %d.",num,a,b);
    else if (num%a==0)
        printf ("%d is Divisible by %d.",num,a);
    else if (num%b==0)
        printf ("%d is Divisible by %d.",num,b);
    else
        printf ("%d is not Divisible.",num);
    return 0;
}
// Mixed if-else
#include <stdio.h>
int main()
{
    int num,a,b;
    printf ("Enter a positive integer: ");
    scanf ("%d",&num);
    printf ("Enter two divisible numbers: ");
    scanf ("%d %d",&a,&b);
    if (num%a==0)
        {
            if (num%b==0)
                printf ("%d is Divisible by both %d and %d.",num,a,b);
            else
                printf ("%d is Divisible by %d.",num,a);
        }
    else if (num%b==0)
        printf ("%d is Divisible by %d.",num,b);
    else
        printf ("%d is not Divisible.",num);
    return 0;
}
// Ternary operator
#include <stdio.h>
int main()
{
    int num,a,b;
    printf ("Enter a positive integer: ");
    scanf ("%d",&num);
    printf ("Enter two divisible numbers: ");
    scanf ("%d %d",&a,&b);
    (num%a==0)?((num%b==0)?(printf ("%d is Divisible by both %d and %d.",num,a,b)):(printf ("%d is Divisible by %d.",num,a))):((num%b==0)?(printf ("%d is Divisible by %d.",num,b)):(printf ("%d is not Divisible.",num)));
    return 0;
}
// switch
#include <stdio.h>
int main()
{
    int num,a,b;
    printf ("Enter a positive integer: ");
    scanf ("%d",&num);
    printf ("Enter two divisible numbers: ");
    scanf ("%d %d",&a,&b);
    switch (num%a==0)
    {
    case 1:
        switch (num%b==0)
        {
        case 1:
            printf ("%d is Divisible by both %d and %d.",num,a,b);
            break;
        default:
            printf ("%d is Divisible by %d.",num,a);
        }
        break;
    default:
        switch (num%b==0)
        {
        case 1:
            printf ("%d is Divisible by %d.",num,b);
            break;
        default:
            printf ("%d is not Divisible.",num);
        }
    }
    return 0;
}
// Function
#include <stdio.h>
void divisible (int n, int a, int b)
{
    if (n%a==0 && n%b==0)
        printf ("%d is Divisible by both %d and %d.\n",n,a,b);
    else if (n%a==0)
        printf ("%d is Divisible by %d.\n",n,a);
    else if (n%b==0)
        printf ("%d is Divisible by %d.\n",n,b);
    else
        printf ("%d is not Divisible.\n",n);
}
int main()
{
    int num,a,b;
    printf ("Enter a positive integer: ");
    scanf ("%d",&num);
    printf ("Enter two divisible numbers: ");
    scanf ("%d %d",&a,&b);
    divisible(num,a,b);
    return 0;
}
