//
// Created by tom on 09/09/16.
//

#include <stdlib.h>
#include <unistd.h>

void	*pmalloc(size_t size)
{
    void	*data;

    if (!(data = malloc(sizeof(void) * (size))))
    {
        write(2, "Malloc error\n", 13);
        exit (0);
    }
    return (data);
}