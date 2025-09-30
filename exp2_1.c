# include <stdio.h>

int main()

{
    float Length, Breadth, Area, Perimeter;

    printf("Enter the length: ");

    scanf("%f", &Length);

    printf("Enter the breadth: ");

    scanf("%f", &Breadth);

    Perimeter=2*(Length+Breadth);

    printf("The perimeter of rectangle is: %.2f\n", Perimeter);

    Area=Length*Breadth;

    printf("The area of rectange is: %.2f", Area);

    return 0;

}