//
// Created by Tom BILLARD on 9/9/16.
//

#include "asm.h"

int     main(int argc, char **argv)
{
    if (argc != 2 || ft_strcmp(argv[1] + (ft_strlen(argv[1]) - 2), ".s") != 0)
        ft_error("Not good file");
    return (0);
}