//
// Created by Tom BILLARD on 9/9/16.
//

#include "asm.h"

void     ft_error(char *str)
{
    ft_putendl_fd(str, 2);
    exit (-1);
}