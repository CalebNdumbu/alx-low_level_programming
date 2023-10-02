## File I/O and ELF Header Reader

This repository contains C programs and a utility for handling file input/output and reading ELF headers.

### Program Descriptions

1. **read_textfile**:
   - Prototype: `ssize_t read_textfile(const char *filename, size_t letters);`
   - Reads a text file and prints it to the POSIX standard output.
   - Returns the actual number of letters it could read and print.
   - Handles errors and returns 0 if the file cannot be opened, if `filename` is NULL, or if there's a write error.

2. **create_file**:
   - Prototype: `int create_file(const char *filename, char *text_content);`
   - Creates a file with specified permissions (`rw-------`) and writes content to it.
   - Returns 1 on success, -1 on failure.
   - Handles errors, including if `filename` is NULL or `text_content` is NULL (creating an empty file).

3. **append_text_to_file**:
   - Prototype: `int append_text_to_file(const char *filename, char *text_content);`
   - Appends text to the end of a file without overwriting its contents.
   - Returns 1 on success, -1 on failure.
   - Handles errors, including if `filename` is NULL or if you don't have permission to write to the file.

4. **cp**:
   - Usage: `cp file_from file_to`
   - Copies the content of one file to another file.
   - Provides error handling for various scenarios, including incorrect arguments, file not found, and permission issues.

5. **elf_header** (Advanced):
   - Usage: `elf_header elf_filename`
   - Displays information from the ELF header of an ELF file.
   - Provides error handling and formatting similar to `readelf -h`.
   - Allows you to explore ELF file headers and attributes.

### Usage

Each program comes with usage instructions, and you can find detailed information in their respective directories.

Feel free to explore, use, and contribute to this repository to enhance your knowledge of file I/O and ELF file formats.

