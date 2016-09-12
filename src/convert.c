//
// Created by tom on 09/09/16.
//

#include "asm.h"

static char     *ft_name(char *str)
{
    int i;
    int j;

    i = 0;
    if (!match(str, ".name \"*") || str[ft_strlen(str) - 2] != '\"')
        ft_error("No or Bad Name");
    while (str[i] != '\"')
        i++;
    i++;
    j = i;
    while (str[i] != '\"')
        i++;
    str[i] = '\0';
    return (ft_strdup(str + j));
}

static char     *get_com(char *str)
{
    int i;
    int j;

    i = 0;
    if (!match(str, ".comment \"*") || str[ft_strlen(str) - 2] != '\"')
        ft_error("No or Bad Comment");
    while (str[i] != '\"')
        i++;
    i++;
    j = i;
    while (str[i] != '\"')
        i++;
    str[i] = '\0';
    return (ft_strdup(str + j));
}

char        *dispatch(char *str)
{
    if (ft_strncmp(str, "lfork", 5) == 0)
        return (lfork(str));
    else if (ft_strncmp(str, "sti", 3))
        return (sti(str));
    else if (ft_strncmp(str, "fork", 4))
        return (fork(str));
    else if (ft_strncmp(str, "lld", 3))
        return (lld(str));
    else if (ft_strncmp(str, "ld", 2))
        return (ld(str));
    else if (ft_strncmp(str, "add", 3))
        return (add(str));
    else if (ft_strncmp(str, "zjump", 5)
        return (lfork(str));
    else if (ft_strncmp(str, "sub", 3))
        return (lfork(str));
    else if (ft_strncmp(str, "ldi", 3) == 0)
        return (lfork(str));
    else if (ft_strncmp(str, "or", 2) == 0)
        return (lfork(str));
    else if (ft_strncmp(str, "st", 2) == 0)
        return (lfork(str));
    else if (ft_strncmp(str, "aff", 3) == 0)
        return (lfork(str));
    else if (ft_strncmp(str, "live", 4) == 0)
        return (lfork(str));
    else if (ft_strncmp(str, "xor", 3) == 0)
        return (lfork(str));
    else if (ft_strncmp(str, "lldi", 4) == 0)
        return (lfork(str));
    else if (ft_strncmp(str, "and", 3) == 0)
        return (lfork(str));
}

void        ft_hex(t_data *data)
{
    data->file->hex = ft_name(data->file->line);
    ft_putendl(data->file->hex);
    data->file = data->file->next;
    data->file->hex = get_com(data->file->line);
    ft_putendl(data->file->hex);
    data->file = data->file->next;

}