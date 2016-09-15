//
// Created by tom on 09/09/16.
//

#include "asm.h"

static int      find_char(char c, char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == c)
            return (i);
        i++;
    }
    return (-1);
}

void        ft_hex(t_data *data)
{
    data->i = find_char('\n', data->cor);
    ft_strncpy(data->prog_name, data->cor, (size_t)data->i - 1);
    data->i += find_char('\n', data->cor + data->i);
    ft_strncpy(data->comment, data->cor + data->i, (size_t)data->i);
}