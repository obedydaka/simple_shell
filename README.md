# Simple Shell Project

## Table of Contents

- [Description](#description)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Command Examples](#command-examples)
- [Authors](#authors)
- [License](#license)

## Description

The Simple Shell Project is a command-line shell program written in C that provides a basic command-line interface for users to interact with their operating system. It allows users to execute commands, manage environment variables, and perform other common shell operations.

The main goal of this project is to implement a simple Unix shell with a subset of functionalities similar to the popular `sh` shell.

## Features

- Executes external commands available in the system.
- Implements built-in shell commands like `exit`, `cd`, `env`, `setenv`, `unsetenv`, etc.
- Supports variable substitution for environment variables using the `$` symbol.
- Allows command chaining using `;`, `&&`, and `||` operators.
- Handles signal handling and process execution using `fork`, `execve`, and `wait`.
- Supports command history using the `history` command.

## Installation

1. Clone the repository to your local machine.
2. Compile the shell program using a C compiler (e.g., `gcc`).
3. The resulting executable will be generated in the project directory.

```bash
$ git clone https://github.com/obedydaka/simple_shell.git
$ cd simple-shell
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o simpsh
```

## Usage

1. To start the shell, run the compiled executable:

```bash
./simpsh
```

* The shell will display a prompt and wait for your input. You can enter various commands and execute them.

2. Type any command you want to execute and press Enter.

* The shell will execute the command and display the output.
* You can use built-in commands like exit, `cd`, `env`, `etc`., to perform specific shell operations.
* To exit the shell, type `exit` and press Enter.

## Command Examples

Here are some examples of using the shell:

* Execute an external command:

```shell
simple_shell$ ls
file1.txt  file2.txt  folder1  folder2
```

* Change the current working directory:

```shell
simple_shell$ cd folder1
simple_shell$ pwd
/home/user/simple-shell/folder1
```

* Use command chaining:

```sql
simple_shell$ ls -l ; echo "Hello, World!" ; pwd
total 8
-rw-r--r-- 1 user user    0 Jul 29 10:00 file1.txt
-rw-r--r-- 1 user user    0 Jul 29 10:00 file2.txt
drwxr-xr-x 2 user user 4096 Jul 29 10:00 folder1
drwxr-xr-x 2 user user 4096 Jul 29 10:00 folder2
Hello, World!
/home/user/simple-shell
```

* Print the current environment variables:

```shell
simple_shell:$ env
...
MY_VAR=value
...
```

* Set an environment variable:

```shell
simple_shell:$ setenv MY_VAR value
```

* Unset an environment variable:

```shell
simple_shell:$ unsetenv MY_VAR
```

* Exit the shell:

```shell
simple_shell:$ exit
```

#### Exiting the Shell with a Specific Status

You can exit the shell with a specific integer status by providing an argument to the exit command. If an argument is given, the shell will interpret it as the exit status and terminate with that status. The status must be a valid integer.

```shell
simple_shell:$ exit 98
```

## Authors

Please see **AUTHORS** file for a list of the contributors to this project.


## License

This project is licensed under the MIT License
