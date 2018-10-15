cmake_minimum_required(VERSION 3.12)
project(parser C)
find_library(MLX mlx)
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${MLX} -framework OpenGL -framework AppKit")
include_directories(libft)
add_executable(parser main.c wolf3d.h get_next_line.c libft/ft_strdup.c libft/ft_strjoin.c libft/ft_strlen.c libft/ft_strncpy.c libft/ft_strcpy.c libft/ft_strcat.c
        libft/ft_atoi.c libft/ft_isspace.c libft/ft_isdigit.c libft/ft_putchar.c libft/ft_putstr.c)
