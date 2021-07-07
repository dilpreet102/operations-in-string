#include <stdio.h>
int main()
{
    char str[] = "Dilpreet Singh";
    int i;
    for (i = 0; str[i] != '\0'; i++);
    printf("%d", i);
    return 0;
}
// =====================================================================
#include <stdio.h>
int main()
{
    char s1[] = "Hello", s2[] = "World";
    int i;
    for (i = 0; s1[i] != '\0'; i++)
    {
        s2[i] = s1[i];
    }
    printf("String s2: %s", s2);
    return 0;
}
// =====================================================================
#include <stdio.h>
int main()
{
    char s[] = "Dilpreet";
    int len = 0;
    char temp;
    while (s[len] != '\0')
    {
        len++;
    }
    for (int i = 0; i < (len - 1) / 2; i++)
    {
        temp = s[i];
        s[i] = s[len - 1 - i];
        s[len - 1 - i] = temp;
    }
    printf("Reversed string : %s", s);
    return 0;
}
// =====================================================================
#include <stdio.h>
int main()
{
    char s1[100] = "Dilpreet", s2[] = "Singh";
    int length, j;
    length = 0;
    while (s1[length] != '\0')
    {
        length++;
    }
    for (j = 0; s2[j] != '\0'; j++, length++)
    {
        s1[length] = s2[j];
    }
    printf("After concatenation: %s", s1);
    return 0;
}