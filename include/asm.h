//
// Created by Tom BILLARD on 9/9/16.
//

#ifndef COREWAR_ASM_H
#define COREWAR_ASM_H

#include <sys/types.h>
#include <unistd.h>

#include "libft.h"

typedef struct      s_line
{
    char                   *line;
    char                   *hex;
    char                    **inst;
    struct s_line          *next;
}                           t_line;

typedef struct      s_data
{
    t_line          *file;
    t_line          *ff;
}                   t_data;

void     ft_error(char *str);
void	*pmalloc(size_t size);
void     ft_pars(char **argv, t_data *data);
void    ft_hex(t_data *data);

#endif //COREWAR_ASM_H
