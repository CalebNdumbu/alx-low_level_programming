#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read text file and print to STDOUT.
 * @filename: The name of the text file to read from
 * @max_bytes: The maximum number of bytes to read and print
 *
 * Return: The actual number of bytes read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t max_bytes)
{
    char *content_buffer;
    ssize_t file_descriptor;
    ssize_t bytes_written;
    ssize_t bytes_read;

    file_descriptor = open(filename, O_RDONLY);
    if (file_descriptor == -1)
        return (0);

    content_buffer = malloc(sizeof(char) * max_bytes);
    bytes_read = read(file_descriptor, content_buffer, max_bytes);
    bytes_written = write(STDOUT_FILENO, content_buffer, bytes_read);

    free(content_buffer);
    close(file_descriptor);

    return (bytes_written);
}

