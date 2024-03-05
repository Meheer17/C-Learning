#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// 1.
char *Even_Odd()
{
    printf("1. Check Whether a Given Number is Even or Odd\n");
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    return (n % 2 == 0 ? "Even" : "Odd");
}

// 2.
void SumEvenOdd()
{
    printf("2. Sum of Odd and Even Numbers\n");
    int esum, osum, x, num;
    printf("Enter the number of Items: ");
    scanf("%d", &x);
    for (int i = 0; i < x; i++)
    {
        num = 0;
        printf("Enter the number: ");
        scanf("%d", &num);
        esum += num % 2 == 0 ? num : 0;
        osum += num % 2 == 1 ? num : 0;
    }
    printf("EVEN : %d, ODD : %d\n\n", esum, osum);
    return;
}

// 3.
char *PosNeg()
{
    printf("3. Check Whether a Given Number is Positive or Negative \n");
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    return (n > 0 ? "Positive" : "Negative");
}

// 4.
void Largest3()
{
    printf("The largest number among the Given 3 number\n");
    int a = 10, b = 20, c = 15;
    printf("%d is the Largest Num \n\n", (a > b ? (a > c ? a : c) : (b > c ? b : c)));
}

// 5.
void swap()
{
    printf("Swapping 2 numbers with extra memory\n");
    int x = 12, y = 20, c;
    printf("%d %d\n", x, y);
    c = x;
    x = y;
    y = c;
    printf("%d %d\n\n", x, y);
}

// 6.
void Div5()
{
    printf("Find the number of integers divisible by 5 in Range\n");
    int s, e, sum = 0, i;
    printf("Enter the Start num: ");
    scanf("%d", &s);
    printf("Enter the End number: ");
    scanf("%d", &e);
    for (i = s; i < e + 1; i++)
    {
        if (i % 5 == 0)
            sum += i;
    }
    printf("The sum of the numbers that can be divisible is : %d\n\n", sum);
}

// 7.
void CheckEqual()
{
    printf("Checks if the numbers are equal");
    int a = 10, b = 8;
    printf((a == b ? "Equal" : "Not Equal"));
}

// 8.
void SumOfDigits()
{
    printf("8. Sum Of Digits\n");
    int x, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &x);
    while (x != 0)
    {
        sum += x % 10;
        x /= 10;
    }
    printf("The sum of Digits is %d\n\n", sum);
}

// 9.
void inc1()
{
    printf("9. Inc the number 1\n");
    int x, new = 0, sum = 0, c = 1;
    printf("Enter the number: ");
    scanf("%d", &x);
    new = x;
    while (x != 0)
    {
        new += c;
        c *= 10;
        x /= 10;
    }
    x = new;
    while (x != 0)
    {
        sum += x % 10;
        x /= 10;
    }
    printf("Sum: %d, new_num: %d\n\n", sum, new);
}

// 10.
void multable()
{
    printf("Multiplication Table\n");
    int x;
    printf("Enter the num: ");
    scanf("%d", &x);
    for (int i = 1; i < 11; i++)
        printf("%d X %d = %d\n", x, i, x * i);
    printf("\n");
}

// 11.
void CountVow()
{
    printf("To count the vowels and consonants in a word\n");
    int c = 0, v = 0;
    char s[1000], vo[] = "aeiou";

    printf("Enter the String: ");
    scanf("%s", &s);

    for (int i = 0; i < strlen(s); i++)
    {
        s[i] = tolower(s[i]);
        for (int j = 0; j < 5; j++)
        {
            if (s[i] == vo[j])
            {
                v += 1;
                break;
            }
        }
        c = i + 1 - v;
    }

    printf("Vowels: %d, Consonants: %d\n\n", v, c);
}

// 12.
void height()
{
    printf("Height checking");
    int h;
    printf("Enter your height: ");
    scanf("%d", &h);
    printf((h > 100 ? (h < 150 ? "Avg\n\n" : "Tall\n\n") : "Short\n\n"));
}

// 13.
void Prime()
{
    printf("To find if its a Prime Num\n");
    int x = 11, f = 0;
    for (int i = 2; i < x / 2 + 1; i++)
        if (x % i == 0)
            f = 1;
    printf(!f ? "Prime\n\n" : "Not Prime\n\n");
}

// 14.
void PerfectNum()
{
    printf("To check if its a perfect number\n");
    int x, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &x);
    for (int i = 1; i < x / 2 + 1; i++)
        if (x % i == 0)
            sum += i;
    printf(sum == x ? "Is a perfect number\n\n" : "Isn't a perfect number\n\n");
}

// 15.
void ArmstrongNum()
{
    printf("Check if the number is armstrong or not\n");
    int x = 153, sum = 0, n = 3;
    int c = x;
    while (c != 0)
    {
        static int count = 1;
        for (int i = 0; i < n; i++)
        {
            count *= c % 10;
        }
        sum += count;
        count = 1;
        c /= 10;
    }
    printf(sum == x ? "Is an Armstong Number\n\n" : "Not an Armstrong Number\n\n");
}

// 16. and 17.
void ReverseAndPalindrome()
{
    printf("Reverse a number and check if tis palindrome\n");
    int x = 151, c = x, n = 0;
    while (c != 0)
    {
        n = (n * 10) + (c % 10);
        c /= 10;
    }
    printf("The reverse of %d is %d and It is %s", x, n, (n == x ? "A PALINDROME NUMBER\n\n" : "NOT A PALINDROME NUMBER\n\n"));
}

// 18.
void BinAdd() // to do
{
    printf("To add 2 binary numbers\n");
}

// 19.
void PrimeRange()
{
    printf("Print all the prime numbers in a given range\n");
    int s, e, prime;
    printf("Enter the start and end num: ");
    scanf("%d %d", &s, &e);
    printf("Prime Number Are: ");
    for (int i = s; i < e + 1; i++)
    {
        prime = 1;
        for (int j = 2; j < ((e / 2) + 1); j++)
            if (i % j == 0)
                prime = 0;
        if (prime)
            printf("%d\n", i);
    }
    printf("\n");
}

// 20.
void LeapYear()
{
    printf("To check if an year is a leap year or not\n");
    int x;
    printf("Enter the Year: ");
    scanf("%d", &x);
    printf("The year %d is %s", x, ((x % 400 == 0 || (x % 4 == 0 && x % 100 != 0)) ? "A LEAP YEAR\n\n" : "NOT A LEAP YEAR\n\n"));
}

// 21.
void Fibonacci()
{
    printf("To print the fibonacci series\n");
    int x, pv = 1, pvv = 0;
    printf("Enter upto how many values: ");
    scanf("%d", &x);
    printf("%d %d ", pvv, pv);
    for (int i = 2; i <= x; i++)
    {
        printf("%d ", pv + pvv);
        pv = pv + pvv;
        pvv = pv - pvv;
    }
    printf("\n\n");
}

// 22.
void Factorial()
{
    printf("Factorial of a number\n");
    int x, fac = 1;
    printf("The number to find the Factorial of: ");
    scanf("%d", &x);
    printf("The factorial of %d ", x);
    while (x != 0)
    {
        fac *= x;
        x--;
    }
    printf("is %d\n\n", fac);
}

void FloydTri()
{
    printf("Floyd's Triangle\n");
    int x, c = 1;
    printf("Enter the num of row: ");
    scanf("%d", &x);
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("%d ", c);
            c++;
        }
        printf("\n");
    }
    printf("\n");
}

// 24.
void PascalsTri() // TO PRACTISE
{
    printf("The Pascals Triangle\n");
    int rows, coef = 1, space, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 0; i < rows; i++)
    {
        for (space = 1; space <= rows - i; space++)
            printf("  ");
        for (j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;
            printf(" %4d", coef);
        }
        printf("\n");
    }
    printf("\n");
}

// 25.
void Tri()
{
    printf("Triangle\n");
    int x;
    printf("Enter the num of row: ");
    scanf("%d", &x);
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j <= i; j++)
            printf("* ");
        printf("\n");
    }
    printf("\n");
}

// 26.
void RTri() // TO PRACTISE
{
    printf("Rhombus\n");
    int num;
    printf("Enter the number to define the columns: ");
    scanf("%d", &num);
    for (int i = 1; i <= num / 2 + 1; i++)
    {
        for (int j = 1; j <= i && i % 2 != 0; j++)
        {
            printf("*");
        }
        printf(i % 2 == 0 ? "" : "\n");
    }

    for (int i = 1; i <= num; i++)
        printf("*");

    printf("\n");
    for (int i = num / 2 + 1; i > 0; i--)
    {
        for (int j = 1; j <= i && i % 2 != 0; j++)
        {
            printf("*");
        }
        printf(i % 2 == 0 ? "" : "\n");
    }
    printf("\n");
}

// 27.
int Diamond()
{
    int x;
    printf("\nEnter the number of rows: ");
    scanf("%d", &x);

    for (int i = 0; i <= x / 2; i++)
    {
        for (int j = 0; j < x - i - 1; j++)
            printf(" ");
        for (int j = 0; j <= i * 2; j++)
            printf("*");
        printf("\n");
    }
    for (int i = x / 2 - 1; i >= 0; i--)
    {
        for (int j = x - i - 1; j > 0; j--)
            printf(" ");
        for (int j = i * 2; j >= 0; j--)
            printf("*");
        printf("\n");
    }
    printf("\n\n");
    return 0;
}

// 28.
void AreaCircle()
{
    printf("Area of a circle\n");
    int x = 10;
    printf("Area of a circle of radius %d is %.2f \n\n", x, 3.14 * x * x);
}

// 29.
void AreaTriangle()
{
    printf("Area of a Triangle\n");
    int b = 10, h = 10;
    printf("Area of a Triangle of base: %d and height: %d is %.2f \n\n", b, h, 0.5 * b * h);
}

// 30.
void GCDLCM()
{
    printf("GCD and LCM of 2 numbers\n");
    int num1, num2, gcd, lcm, remainder, numerator, denominator;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    numerator = (num1 > num2) ? num1 : num2;
    denominator = (num1 < num2) ? num1 : num2;
    remainder = numerator % denominator;

    while (remainder != 0)
    {
        numerator = denominator;
        denominator = remainder;
        remainder = numerator % denominator;
    }
    gcd = denominator;
    lcm = num1 * num2 / gcd;
    printf("GCD of %d and %d = %d\n", num1, num2, gcd);
    printf("LCM of %d and %d = %d\n\n", num1, num2, lcm);
}

// 31.
void HCF()
{
    printf("To find the HCF of 2 numbers\n");
    int a, b, h = 1;
    printf("The numbers are: ");
    scanf("%d %d", &a, &b);
    for (int i = 2; i < a / 2 + 1 || i < b / 2 + 1; i++)
        if (a % i == 0 && b % i == 0)
            h = i;
    printf("The HCF of %d and %d is %d\n\n", a, b, h);
}

// 32.
void CmpStr()
{
    printf("To compare the strings\n");
    char str1[50]; // declaration of char array
    char str2[50]; // declaration of char array

    printf("Enter the first string : ");
    scanf("%s", str1);

    printf("Enter the second string : ");
    scanf("%s", str2);
    printf(strcmp(str1, str2) == 0 ? "Both string are equal\n\n" : (strcmp(str1, str2) > 0 ? "String1 is Greater\n\n" : "String2 is Greater\n\n"));
}

// 33.
void Palindrome()
{
    printf("To check if the numbers given are palindrome or not\n");
    int x, p = 0, c;
    printf("Enter the number: ");
    scanf("%d", &x);
    c = x;
    while (c != 0)
    {
        p = p * 10 + c % 10;
        c /= 10;
    }
    printf("%d, %d (It is %s)\n\n", x, p, (p == x ? "Palindrome" : "Not Palindrome"));
}

// 34.
int StringPalindrome()
{
    printf("To check if the string given is palindrome or not\n");
    char x[100];
    printf("Enter the string: ");
    scanf("%s", &x);
    int z = 0, y = strlen(x) - 1;
    while (y > z)
    {
        if (x[z++] != x[y--])
        {
            printf("%s is Not a palindrome\n\n", x);
            return 0;
        }
    }
    printf("%s is a palindrome\n\n", x);
    return 0;
}

// 35.
int Anagram()
{
    printf("Anagram\n");
    char s1[10], s2[10];
    printf("Enter both the strings with a space: ");
    scanf("%s %s", &s1, &s2);
    if (strlen(s1) == strlen(s2))
    {
        for (int i = 0; i < strlen(s1); i++)
        {
            char c = s1[i];
            int count = 0, secount = 0;
            for (int j = 0; j < strlen(s1); j++)
                if (c == s1[j])
                    count += 1;
            for (int j = 0; j < strlen(s1); j++)
                if (c == s2[j])
                    secount += 1;
            if (secount == count)
                continue;
            else
            {
                printf("Not Anagram\n\n");
                return 0;
            }
        }
        printf("Is Anagram\n\n");
        return 0;
    }
    else
    {
        printf("Not Anagram\n\n");
        return 0;
    }
}

// 36.
void MathPow()
{
    printf("To print the power of a number\n");
    int b, e;
    printf("Enter the base number: ");
    scanf("%d", &b);
    printf("Enter the exponent value: ");
    scanf("%d", &e);
    printf("The %d ^ %d = %.0f\n\n", b, e, pow(b, e));
}

// 37.
void OddEvenSum()
{
    printf("To print the sum of a even numbers in range\n");
    int b, e, es, os;
    printf("Enter the start number: ");
    scanf("%d", &b);
    printf("Enter the end value: ");
    scanf("%d", &e);
    while (b <= e)
    {
        es += b % 2 == 0 ? b : 0;
        os += b % 2 == 1 ? b : 0;
        b++;
    }
    printf("The sum of Even is %d and Odd is %d between the range %d and %d\n\n", es, os, b, e);
}

// 38.
void PerfectSquare()
{
    printf("To check if a given number is a perfect square or not\n");
    int x = 25;
    printf("Enter the number to check: ");
    scanf("%d", &x);
    int y = sqrt(x);
    printf("The number %d is %s \n\n", x, (x == pow(y, 2) ? "a PERFECT NUMBER" : "NOT A PERFECT SQUARE"));
}

// 39.
void SumOfEvenDigits()
{
    printf("Sum Of Even Digits\n");
    int x, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &x);
    while (x != 0)
    {
        sum += ((x % 10) % 2 == 0 ? x % 10 : 0);
        x /= 10;
    }
    printf("The sum of Even Digits is %d\n\n", sum);
}

// 40.
void swapWithNoExtraMemory()
{
    printf("Swapping 2 numbers without extra memory\n");
    int x = 12, y = 20;
    printf("%d %d\n", x, y);
    x += y;
    y = x - y;
    x = x - y;
    printf("%d %d\n\n", x, y);
}

// 41.
void numOfElements()
{
    printf("To get the Size of Array [1,2,3,4,5,6]\n");
    int arr[] = {1, 2, 3, 4, 5};
    printf("The size is %d\n\n", sizeof(arr) / sizeof(arr[0]));
}

// 42.
void DeleteElement()
{
    printf("To delete an element from array\n");
    int array[6] = {12, 65, 32, 75, 48, 11};
    printf("[ ");
    for (int i = 0; i < 6; i++)
        printf("%d ", array[i]);
    printf("]\n");
    printf("We will delete 75\n");
    int flag = 0;
    for (int j = 0; j < 6; j++)
    {
        if (array[j] == 75)
        {
            array[j] == 0;
            flag = 1;
        }
        if (flag)
        {
            array[j] = array[j + 1];
        }
    }
    printf("[ ");
    for (int i = 0; i < 5; i++)
        printf("%d ", array[i]);
    printf("]\n\n");
}

// 43.
void SumOfElements()
{
    printf("To get the Sum of elements of Array [4, 9, 10, 56, 100] with pointer\n");
    int arr[] = {4, 9, 10, 56, 100};
    int *ptr = &arr[0];
    int sum = 0;
    for (int i = 0; i < 5; ptr++, i++)
    {
        sum += *ptr;
    }
    printf("%d Is the sum of elements\n\n", sum);
}

// 44.
void nonRep()
{
    printf("To print the elements of a list without Repaeting\n");
    printf("Enter the number of elements: ");
    int x;
    scanf("%d", &x);
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        printf("Enter the %i value: ", i);
        scanf("%d", &arr[i]);
    }

    printf("[ ");
    for (int i = 0; i < x; i++)
        printf("%d ", arr[i]);
    printf("]\n");
    
    int newa[x] = {};
    int count = 0;

    for (int i = 0; i < x; i++)
    {
        int flag = 0;
        for (int j = 0; j < x; j++)
            if (arr[i] == newa[j])
                flag = 1;
        if (!flag)
        {
            newa[count] = arr[i];
            count += 1;
        }
    }

    printf("[ ");
    for (int i = 0; i < count; i++)
        printf("%d ", newa[i]);
    printf("]\n\n");
}

// 45.
void Cycle()
{
    printf("To cycle once in an array\n");
    int arr[4] = {3, 40, 100, 6};
    int len = sizeof(arr) / sizeof(arr[0]), temp = arr[0];

    printf("[ ");
    for (int i = 0; i < len; i++)
        printf("%d ", arr[i]);
    printf("]\n");

    for (int i = 0; i < len - 1; i++)
        arr[i] = arr[i + 1];
    arr[len - 1] = temp;

    printf("[ ");
    for (int i = 0; i < len; i++)
        printf("%d ", arr[i]);
    printf("]\n\n");
}

// 46.
void MissingNum()
{
    printf("To Find the missing number\n");
    int size, i;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter elements into array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int total;
    total = (size + 1) * (size + 2) / 2; // Calculate sum of numbers from 1 to n+1

    // Subtract each element of the array from total
    for (i = 0; i < size; i++)
    {
        total -= arr[i];
    }

    printf("The missing number is %d\n\n", total);
}

// 47.
void UnionIntersection()
{
    printf("To find the union and intersection\n");
    printf("Enter the number elements: ");
    int x;
    scanf("%d", &x);
    int arr1[x], arr2[x], uni[x], inter[2 * x], unic = 0, interc = 0;
    printf("First List\n");
    for (int i = 0; i < x; i++)
    {
        printf("Enter the %d number: ", i);
        scanf("%d", &arr1[i]);
    }

    printf("[ ");
    for (int i = 0; i < x; i++)
        printf("%d ", arr1[i]);
    printf("]\n");

    printf("Second List\n");
    for (int i = 0; i < x; i++)
    {
        printf("Enter the %d number: ", i);
        scanf("%d", &arr2[i]);
    }

    printf("[ ");
    for (int i = 0; i < x; i++)
        printf("%d ", arr2[i]);
    printf("]\n");

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
            if (arr1[i] == arr2[j])
            {
                uni[unic++] = arr1[i];
                break;
            }

        int flag = 0;
        for (int j = 0; j < interc; j++)
            if (arr1[i] == inter[j])
                flag = 1;
        // printf("%d-%d-%d\n", arr1[i], arr2[j],flag);
        if (!flag)
            inter[interc++] = arr1[i];

        flag = 0;
        int j;
        for (j = 0; j < interc; j++)
            if (arr2[i] == inter[j])
                flag = 1;

        if (!flag)
        {
            inter[interc] = arr2[i];
            interc++;
        }
    }

    printf("Union: [ ");
    for (int i = 0; i < unic; i++)
        printf("%d ", uni[i]);
    printf("]\n");

    printf("Intersection: [ ");
    for (int i = 0; i < interc; i++)
        printf("%d ", inter[i]);
    printf("]\n\n");
}

// 48.
// 49.
void MatrixMul()
{
    printf("To multiply the matrix [1 4 3 2] * [1 2 2 1] \n");
    // int n = 2;
    // int arr1[n][n] = {{1, 4}, {3, 2}}, arr2[n][n] = {{1, 2}, {2, 1}}, sum = 0;

    // for (int j = 0; j < n; j++)
    // {
    //     sum += arr1[j][j] * arr2[j][j];
    // }

    // for (int i = 0; i < n; i++)
    // {

    // }
    {
        int a[10][10], b[10][10], mul[10][10], r, c, i, j, k;
        printf("enter the number of row: ");
        scanf("%d", &r);
        printf("enter the number of column: ");
        scanf("%d", &c);
        printf("enter the first matrix element: \n");
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("enter the second matrix element: \n");
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }

        printf("multiply of the matrix: \n");
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                mul[i][j] = 0;
                for (k = 0; k < c; k++)
                {
                    mul[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        // for printing result
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                printf("%d ", mul[i][j]);
            }
            printf("\n");
        }
    }
    printf("\n");
}

// 50.
void Perimeter()
{
    printf("To print the perimeter of circle, rectangle and triangle\n");
    printf("Enter the values in order: (Radius of circle, rectangle width, rectangle breadth, Eqi Triangle side, General triangle (3 values), right angled tri height, right angled tri width)");
    int r, rw, rb, eqs, gt1, gt2, gt3, rth, rtw;
    scanf("%d %d %d %d %d %d %d %d %d", &r, &rw, &rb, &eqs, &gt1, &gt2, &gt3, &rth, &rtw);
    printf("Perimeter of Rect: %d\nPerimeter of General Triangle: %d\nPerimeter of Eqilateral Triangle: %d\nPerimeter of Right Angle Triangle: %d\nPerimeter of Circle: %d\n\n", 2 * (rw + rb), gt1 + gt2 + gt3, 3 * eqs, rtw + rth + sqrt(rtw * rtw + rth * rth), 2 * 3.14 * r);
}

// Main Loop
int main()
{
    int n;

    while (n > 0)
    {
        printf("Questions from 1-50 (Choose the question number): ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("%s\n\n", Even_Odd());
            break;
        case 2:
            SumEvenOdd();
            break;
        case 3:
            printf("%s\n\n", PosNeg());
            break;
        case 4:
            Largest3();
            break;
        case 5:
            swap();
            break;
        case 6:
            Div5();
            break;
        case 7:
            CheckEqual();
            break;
        case 8:
            SumOfDigits();
            break;
        case 9:
            inc1();
            break;
        case 10:
            multable();
            break;
        case 11:
            CountVow();
            break;
        case 12:
            height();
            break;
        case 13:
            Prime();
            break;
        case 14:
            PerfectNum();
            break;
        case 15:
            ArmstrongNum();
            break;
        case 16:
            ReverseAndPalindrome();
            break;
        case 17:
            ReverseAndPalindrome();
            break;
        case 18: // TO DOOOO
            printf("TO DO STILL\n\n");
            break;
        case 19:
            PrimeRange();
            break;
        case 20:
            LeapYear();
            break;
        case 21:
            Fibonacci();
            break;
        case 22:
            Factorial();
            break;
        case 23:
            FloydTri();
            break;
        case 24:
            PascalsTri();
            break;
        case 25:
            Tri();
            break;
        case 26:
            RTri();
            break;
        case 27:
            Diamond();
            break;
        case 28:
            AreaCircle();
            break;
        case 29:
            AreaTriangle();
            break;
        case 30:
            GCDLCM();
            break;
        case 31:
            HCF();
            break;
        case 32:
            CmpStr();
            break;
        case 33:
            Palindrome();
            break;
        case 34:
            StringPalindrome();
            break;
        case 35:
            Anagram();
            break;
        case 36:
            MathPow();
            break;
        case 37:
            OddEvenSum();
            break;
        case 38:
            PerfectSquare();
            break;
        case 39:
            SumOfEvenDigits();
            break;
        case 40:
            swapWithNoExtraMemory();
            break;
        case 41:
            numOfElements();
            break;
        case 42:
            DeleteElement();
            break;
        case 43:
            SumOfElements();
            break;
        case 44:
            nonRep();
            break;
        case 45:
            Cycle();
            break;
        case 46:
            MissingNum();
            break;
        case 47:
            UnionIntersection();
            break;
        case 48:
            printf("TO DO STILL\n\n");
            break;
        case 49:
            MatrixMul();
            break;
        case 50:
            Perimeter();
            break;
        default:
            break;
        }
    }

    return 0;
}