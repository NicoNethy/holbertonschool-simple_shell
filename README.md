# Proyect Shell

### Description
The SimpleShell is a command processor which is typically run in a text window, allowing the user to type and execute commands. The SimpleShell can also read commands from a file, called a script.

### Commands

| Name | Function |
| --- | --- |
| pwd | Print working directory. |
| ls | List files and directory. |
| hostname | Is used to obtain the DNS (Domain Name System) name. |
| exit | The command causes the shell or program to terminate. |

### Requirements
Allowed editors: vi, vim, emacs

All the files are compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

All the files end with a new line

No more than 5 functions per file

### Functions used
- ``execve`` Executes the program referred to by pathname.
- ``fork`` System call is used for creating a new process, which is called child process, which runs concurrently with the process that makes the fork call. 
- ``wait`` Blocks the calling process until one of its child processes exits or a signal is received.
- ``getline`` The getline function takes three arguments and returns the number of characters we entered.
- ``stat`` Function gets status information about a specified file and places it in the area of memory pointed to by the buf argument.
- ``isatty`` Takes a file descriptor as a parameter and returns 1 if that file descriptor is associated with a terminal.

### Files that make up our Shell and the functions inside
- **SimpleShell:** Program to be run to start the shell
- **aux_function.c:** Functions executed by the shell for its operation
- ``_getenv`` Returns a null-terminated string with the value of the requested environment variable, or NULL if that environment variable does not exist.
- **forbidden_functions.c:** Duplication of str functions
- ``_strcat:`` The function concatenates string2 to string1 and ends the resulting string with the null character.
- ``_strcmp:`` Compares two strings character by character.
- ``_strdup:`` Function returns a pointer to a new string which is a duplicate of the string.
- **main.h:** Contains function libraries and prototypes
- **man_1_simple_shell:** ``shell`` manual.

### Flowchart
![flowchart__1_](https://user-images.githubusercontent.com/113934944/207389689-e35d03ef-78fd-45c0-b93a-031a293d4876.jpg)
