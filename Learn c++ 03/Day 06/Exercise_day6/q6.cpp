//Write a program to print all permutations of a given string using pointers.
//Sample Output :
//The permutations of the string are :
//abcd  abdc  acbd  acdb  adcb  adbc  bacd  badc  bcad  bcda  bdca  bdac  cbad  cbda  cabd  cadb  cdab  cdba  dbca  dbac  dcba  dcab  dacb  dabc



#include <stdio.h>
#include <string.h>

void changePosition(char* ch1, char* ch2)
{
    char tmp = *ch1;
    *ch1 = *ch2;
    *ch2 = tmp;
}
void cermu(char* cht, int stno, int endno)
{
    int i;
    if (stno == endno)
        printf("%s  ", cht);
    else
    {
        for (i = stno; i <= endno; i++)
        {
            changePosition((cht + stno), (cht + i));
            charPermu(cht, stno + 1, endno);
            changePosition((cht + stno), (cht + i));
        }
    }
}

int main()
{
    char str[] = "abcd";
    int n = strlen(str);
    printf(" The permutations of the string are : \n");
    charPermu(str, 0, n - 1);
    printf("\n\n");
    return 0;
}