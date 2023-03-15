#include<stdio.h>

int main()
{
    int a, b, c;
    printf("sides of the triangle:");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c) {
        printf("Type = Equilateral Triangle\n");
    }
    else if (a == b|| b == c|| c == a) {
        printf("Type = Isosceles Triangle\n");
    }
    else {
        printf("Type = Scalene Triangle\n");
    }

    if (a + b + c == 180) {
        if (a == 90 || b == 90 || c == 90) {
            printf("Type = Right Triangle\n");
        }
        else if (a > 90|| b > 90|| c > 90) {
            printf("tpye =Obtuse Triangle\n");
        }
        else {
            printf("Type =Acute Triangle\n");
        }
    }
    if(a+b==c || a+b <c ){

    
        printf("Triangle cannot be formed \n");
    }

    return 0;
}
