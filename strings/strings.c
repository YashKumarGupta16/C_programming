#include <stdio.h>
int main()
{
    char arr[]="college wallah is bests"; //char arr[]={'c','o',.....'s','\0'};
    int i=0;
    while(arr[i]!='\0')
    {
        printf("%c",arr[i]);
        i++;
    }
    return 0;
}
// an array of characters is known as strings
//if we define a character array in first form then '\0' is by default added as an element of that string
//the size of above string is 24.