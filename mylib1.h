#ifndef __MYLIB1__
#define __MYLIB1__

int fact(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * fact(n - 1);
}

#endif /* __MYLIB1__ */
