//Input and output in C Language
/*WAP to find the area of the circle. Take radius of circle from user as input and print the
result in below given format.
Expected output format � �Area of circle is A having the radius R�. Replace A with area
& R with radius.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int r;
    printf("Enter a radius:\t");
    scanf("%d",&r);
    printf("Area of circle is %.2f having the radius %d",3.14*r*r,r);
    getch();
    return 0;
}
