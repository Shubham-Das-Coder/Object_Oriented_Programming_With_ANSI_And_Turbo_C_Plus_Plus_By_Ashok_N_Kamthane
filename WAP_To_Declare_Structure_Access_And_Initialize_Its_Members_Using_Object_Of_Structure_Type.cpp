#include <stdio.h>
#include <conio.h>

struct item // struct declaration
{
    int codeno;
    float prize;
    int qty;
};

main()
{
    struct item a, *b; // object declaration
    a.codeno = 123;    // direct access & initialization of member variables
    a.prize = 150.75;
    a.qty = 150;

    printf("\nWith simple variable");
    printf("\nCodeno : %d", a.codeno);
    printf("\nPrize : %f", a.prize);
    printf("\nQty : %d", a.qty);

    b->codeno = 124; // direct access & initialization of member variables
    b->prize = 200.75;
    b->qty = 75;

    printf("\n\nWith pointer variable");
    printf("\nCodeno : %d", b->codeno);
    printf("\nPrize : %f", b->prize);
    printf("\nQty : %d", b->qty);
}