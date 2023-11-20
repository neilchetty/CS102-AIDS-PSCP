/*


Write a C program to delete all vowels from a sentence. Assume that the sentence

is not more than 50 characters long.


input= Hello World

output=Hll Wrld


input= Programming is Fun

output= Prgrmmng s Fn
*/

#include <stdio.h>
#include <string.h>

void removeVowel(char arr[], int len, int pos)
{
    for (int i = pos; i < len; i++)
    {
        arr[i] = arr[i + 1];
    }
}

int main()
{
    char arr[51];
    scanf("%[^\n]s", arr);
    int len = strlen(arr);
    int i = 0;
    while (i < len)
    {
        if (arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U' || arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u')
        {
            removeVowel(arr, len--, i);
        }
        else
            i++;
    }
    printf("%s", arr);
    return 0;
}
