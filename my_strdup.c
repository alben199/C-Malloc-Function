/*
** EPITECH PROJECT, 2022
** my_strcat.c
** File description:
** EPITECH Day 07 Task02 project
*/
int my_strlen(char const *str);

char *my_strdup (char const *src)
{
    char *str;
    int i = 0;
    str = malloc(sizeof(char) * (my_strlen(src) + 1));
    i = 0;
    while (src[i] != '\0') {
        str[i] = src[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}
