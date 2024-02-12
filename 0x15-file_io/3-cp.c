#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buf(char *file);
void close_fd(int fd);

/**
 * create_buf - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buf(char *file)
{
    char *buf;

    buf = malloc(sizeof(char) * 1024);

    if (buf == NULL)
    {
        dprintf(STDERR_FILENO,
                "Error: Can't write to %s\n", file);
        exit(99);
    }

    return (buf);
}

/**
 * close_fd - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_fd(int fd)
{
    int c;

    c = close(fd);

    if (c == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
        exit(100);
    }
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
    int fd_from, fd_to, read_bytes, written_bytes;
    char *buffer;

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    buffer = create_buf(argv[2]);
    fd_from = open(argv[1], O_RDONLY);
    read_bytes = read(fd_from, buffer, 1024);
    fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

    do {
        if (fd_from == -1 || read_bytes == -1)
        {
            dprintf(STDERR_FILENO,
                    "Error: Can't read from file %s\n", argv[1]);
            free(buffer);
            exit(98);
        }

        written_bytes = write(fd_to, buffer, read_bytes);
        if (fd_to == -1 || written_bytes == -1)
        {
            dprintf(STDERR_FILENO,
                    "Error: Can't write to %s\n", argv[2]);
            free(buffer);
            exit(99);
        }

        read_bytes = read(fd_from, buffer, 1024);
        fd_to = open(argv[2], O_WRONLY | O_APPEND);

    } while (read_bytes > 0);

    free(buffer);
    close_fd(fd_from);
    close_fd(fd_to);

    return (0);
}

