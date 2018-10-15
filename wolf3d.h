

//#ifndef PARSER_WOLF3D_H
//#define PARSER_WOLF3D_H

#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "libft/libft.h"
# define BUFF_SIZE 100

typedef struct	s_map
{
    char **map;
    int h;
    int w;
}				t_map;


int    validation(char *map);
int   valid_size(int fd);
int     valid_map(int *size, int fd);





int					get_next_line(const int fd, char **line);
//#endif //PARSER_WOLF3D_H
