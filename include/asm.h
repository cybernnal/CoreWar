//
// Created by Tom BILLARD on 9/9/16.
//

#ifndef COREWAR_ASM_H
#define COREWAR_ASM_H

#include <sys/types.h>
#include <unistd.h>

#include "libft.h"
#include "op.h"

typedef struct      s_line
{
    char                   line[20];
    char                   hex[20];
    struct s_line          *next;
}                           t_line;

typedef struct      s_data
{
    unsigned int		magic;
    char				prog_name[PROG_NAME_LENGTH + 1];
    unsigned int		prog_size;
    char				comment[COMMENT_LENGTH + 1];
    char            cor[CHAMP_MAX_SIZE + 1];
    t_line          *file;
    t_line          *ff;
    int             i;
}                   t_data;

void     ft_error(char *str);
void	*pmalloc(size_t size);
void     ft_pars(char **argv, t_data *data);
void    ft_hex(t_data *data);

#endif //COREWAR_ASM_H
