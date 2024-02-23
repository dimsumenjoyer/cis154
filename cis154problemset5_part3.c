/*
Victor Van
00319912
Problem Set 5.3
C - Professor Penta
2/22/2024, Due: 3/1/2024
*/

// Sum.c

int functionOne(int m, int n);
int functionTwo(int m, int n);

int main(void)
{
    functionOne(1, 1); // returns n
    functionOne(2, 3); // returns m + functionOne(m + 1, n)
    functionTwo(1, 1); // returns n
    functionTwo(2, 3); // return n * functionTwo(m, n - 1)
    return 0;
}

int functionOne(int m, int n)
{
    if (m == n)
    {
        return n;
    }
    else
    {
        return m + functionOne(m + 1, n);
    }
}

int functionTwo(int m, int n)
{
    if (m == n)
    {
        return n;
    }
    else
    {
        return n * functionTwo(m, n - 1);
    }
}