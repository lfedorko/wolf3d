#include "wolf3d.h"

int main(int argc, char *argv[])
{
    if (argc != 2)
        return (write(1, "Invalid numbers of params\n", 25));
    else
        {
         if (validation(argv[1]))
             return (0);
         else
             printf("Ok!");
        }
    return (0);
}

int    validation(char *map)
{
    int fd;
//change for terminal
    if ((fd = open("/Users/lfedorko/CLionProjects/parser/map.txt", O_RDONLY)) < 0)
        return ((write(1, "File is not existing\n", 21)));
    return (valid_size(fd));
}

int valid_size(int fd)
{
    char *line;
    int i;
    int size[2];

    i = -1;
    if (get_next_line(fd, &line) <= 0)
        return (write(1, "No data find\n", 13));
    else
    {
        size[0] = ft_atoi(line);
        if (!(size[0] > 3 && size[0] < 101))
            return (write(1, "Error of size (from 3 to 100)\n", 31));
        while (line[++i])
        {
            if (ft_isspace(line[i]))
            {
                i++;
                size[1] = ft_atoi(line + i);
                if (!(size[1] > 3 && size[1] < 101))
                   break ;
                return (valid_map(size, fd));
            }
        }
        free(line);
        return (write(1, "Error of size2 (from 3 to 100)\n", 31));
    }
}

int valid_map(int *size, int fd)
{
    char *line;
    int i;

    i = 0;

    while (get_next_line(fd, &line) > 0)
    {

        i++;
    }
    if (i != size[1])
        ft_putstr("Incorrect size of map!");
    return (0);

}