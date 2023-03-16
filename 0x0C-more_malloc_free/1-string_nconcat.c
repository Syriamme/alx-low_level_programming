#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
        unsigned int len1 = 0, len2 = 0, i, j;
        char *ptr;

        if (s1 == NULL)
                s1 = "";

        if (s2 == NULL)
                s2 = "";

        while (s1[len1] != '\0')
                len1++;

        while (s2[len2] != '\0' && len2 < n)
                len2++;

        ptr = malloc(sizeof(*ptr) * (len1 + len2 + 1));

        if (ptr == NULL)
                return (NULL);

        for (i = 0; i < len1; i++)
                ptr[i] = s1[i];

        for (j = 0; j < len2; j++)
                ptr[i + j] = s2[j];

        ptr[i + j] = '\0';

        return (ptr);
}
