//AN ENUMERATION WITH COLOR NAMES CAN BE USED IN A SWITCH STATEMENT TO DISPLAY THE HEXADECIMAL COLOR CODE

#include<stdio.h>

int main()
{
    enum Colors {RED = 0xFF0000, BLACK = 0x000000, WHITE = 0xFFFFFF, GREEN = 0x008000, BLUE = 0x0000FF};

    int n;
    input: printf("1.RED 2.BLACK 3.WHITE 4.GREEN 5.BLUE\nSelect the color: ");
    scanf("%d",&n);
    printf("\nColor Code: ");
    
    switch (n)
    {
        case 1: printf("%X",RED);
            break;
        case 2: printf("%X",BLACK);
            break;
        case 3: printf("%X",WHITE);
            break;
        case 4: printf("%X",GREEN);
            break;
        case 5: printf("%X",BLUE);
            break;
        default: printf("Wrong input! Select from the 5 colors.\n\n");
            goto input;
    }
    return 0;
}