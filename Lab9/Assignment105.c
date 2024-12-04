//WRITE A PROGRAM IN C TO PRINT ALL PERMUTATIONS OF A GIVEN STRING USING POINTERS. 

#include<stdio.h>
#include<string.h>

void swap(char *x, char *y) 
{
    char temp = *x;
    *x = *y;
    *y = temp;
}

void generatePermutations(char *str, int start, int end, char *prevFirst) 
{
    if (start == end) 
    {
        // If first character is different from previous, print newline
        if (*str != *prevFirst) 
        {
            printf("\n");
            *prevFirst = *str;  // Update previous first character
        }
        printf("%s ", str);
        return;
    }
    
    for (int i = start; i <= end; i++) 
    {
        swap((str + start), (str + i));
        generatePermutations(str, start + 1, end, prevFirst);
        swap((str + start), (str + i));
    }
}

int main() 
{
    char str[100];
    printf("Enter the string: ");
    scanf("%s", str);
    
    int n = strlen(str);
    char prevFirst = '\0';  // Initialize previous first character
    
    printf("All permutations of the string are:");
    generatePermutations(str, 0, n-1, &prevFirst);
    
    return 0;
}
