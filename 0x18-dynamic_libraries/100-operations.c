#include <stdio.h>
/*
 * add - a function that returns sum.
 * @a: first number
 * @b: second number
 *
 * Return : sum
 */

int add(int a, int b) {
    return a + b;
}
/*
 * sub - a function that returns the difference
 * @a: the first one
 * @b: the second one
 *
 * Return : fifference of a and b
 */

int sub(int a, int b) {
    return a - b;
}
/*
 * mult - a function that returns a product of 2 number
 * @a: first number
 * @b: second number
 *
 * Return : product
 */

int mul(int a, int b) {
    return a * b;
}
/*
 * div - a function that returns a quatient
 * @a: divisor
 * @b: dividend
 *
 * Return : a quatient of a over b
 */

int div(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        fprintf(stderr, "Error: Division by zero\n");
        return 0;
    }
}
/*
 * mul - a function that returns aremainder of a over b
 * @a: first number
 * @b: second number
 *
 * Return : remainder of a over b
 */

int mod(int a, int b) {
    if (b != 0) {
        return a % b;
    } else {
        fprintf(stderr, "Error: Modulo by zero\n");
        return 0;
    }
}
