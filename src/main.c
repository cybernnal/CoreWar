//
// Created by Tom BILLARD on 9/9/16.
//

#include "asm.h"

static void ft_init(t_data *data)
{
    ft_bzero(data->cor, CHAMP_MAX_SIZE + 1);
    ft_bzero(data->prog_name, PROG_NAME_LENGTH);
    ft_bzero(data->comment, COMMENT_LENGTH);
    data->magic = COREWAR_EXEC_MAGIC;
}

int     main(int argc, char **argv)
{
    t_data data;

 //   if (argc != 2 || ft_strcmp(argv[1] + (ft_strlen(argv[1]) - 2), ".s") != 0)
   //     ft_error("Not good file");
    ft_init(&data);
    ft_pars(argv, &data);
    ft_hex(&data);
    ft_putstr(data.prog_name);
    ft_putstr(data.comment);
    return (0);
}