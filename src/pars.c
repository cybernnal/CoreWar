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

    fd = 0;
    if ((fd = open(argv[1], fd, O_RDONLY)) == -1)
        ft_error("Open Error, bad fd");
    data->file = (t_line*)pmalloc(sizeof(t_line));
    data->ff = data->file;
    data->file->next = NULL;
    while ((get_next_line(fd, &data->file->line)))
    {
        if (data->file->line[0] != '\n')
        {
            data->file->next = (t_line *) pmalloc(sizeof(t_line));
            data->file = data->file->next;
            data->file->next = NULL;
            data->file->line = NULL;
        }
        else
            free (data->file->line);
    }
    data->file = data->ff;
    if (close(fd) == -1)
        ft_error("closing fd failure");
}
