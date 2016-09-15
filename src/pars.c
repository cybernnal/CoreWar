//
// Created by Tom BILLARD on 9/9/16.
//
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "asm.h"

void     ft_pars(char **argv, t_data *data)
{
    int          fd;
    int          i;

    fd = 0;
    if ((fd = open(argv[1], fd, O_RDONLY)) == -1)
        ft_error("Open Error, bad fd");
    if ((i = (int)lseek(fd, 0, SEEK_END) + 1) == -1)
        ft_error("lseek failure");
    data->prog_size = (unsigned int)i;
    if ((lseek(fd, 0, SEEK_SET)) == -1)
        ft_error("lseek failure");
    if (read(fd, data->cor, data->prog_size) == -1)
        ft_error("read failure");
    if (close(fd) == -1)
        ft_error("closing fd failure");
}