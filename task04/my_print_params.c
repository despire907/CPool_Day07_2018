/*
** EPITECH PROJECT, 2018
** task04
** File description:
** task04
*/

int main (int ac, char **av)
{
    int i = 0;

    while (i < ac) {
        my_putstr(av[i]);
        my_putchar('\n');
        ++i;
    }
    return (0);
}
