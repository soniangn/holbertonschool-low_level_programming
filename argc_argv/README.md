# C - argc, argv

## Learning Objectives
- How to use arguments passed to your program
- What are two prototypes of main that you know of, and in which case do you use one or the other
- How to use __attribute__((unused)) or (void) to compile functions with unused variables or parameters

## Requirements ##
* Allowed editors: `vi`, `vim`, `emacs`
* All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
* All your files should end with a new line
* A README.md file, at the root of the folder of the project
* Your code should use the Betty style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
* You are allowed to use the standard library
* The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called `main.h`

## Tasks

### 0. It ain't what they call you, it's what you answer to

Write a program that prints its name, followed by a new line.
* If you rename the program, it will print the new name, without having to compile it again
* You should not remove the path before the name of the program

[0-whatsmyname.c](https://github.com/soniangn/holbertonschool-low_level_programming/blob/main/argc_argv/0-whatsmyname.c)
```sh
julien@ubuntu:~/argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-whatsmyname.c -o mynameis
julien@ubuntu:~/argc, argv$ ./mynameis 
./mynameis
julien@ubuntu:~/argc, argv$ mv mynameis mynewnameis
julien@ubuntu:~/argc, argv$ ./mynewnameis 
./mynewnameis
julien@ubuntu:~/argc, argv$ 
```

### 1. Silence is argument carried out by other means

Write a program that prints the number of arguments passed into it.
* Your program should print a number, followed by a new line

[1-args.c](https://github.com/soniangn/holbertonschool-low_level_programming/blob/main/argc_argv/1-args.c)

```sh
julien@ubuntu:~/argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-args.c -o nargs
julien@ubuntu:~/argc, argv$ ./nargs 
0
julien@ubuntu:~/argc, argv$ ./nargs hello
1
julien@ubuntu:~/argc, argv$ ./nargs "hello, world"
1
julien@ubuntu:~/argc, argv$ ./nargs hello, world
2
julien@ubuntu:~/argc, argv$ 
```

### 2. The best argument against democracy is a five-minute conversation with the average voter

Write a program that prints all arguments it receives.
* All arguments should be printed, including the first one
* Only print one argument per line, ending with a new line

[2-args.c](https://github.com/soniangn/holbertonschool-low_level_programming/blob/main/argc_argv/2-args.c)
```sh
julien@ubuntu:~/argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-args.c -o args
julien@ubuntu:~/argc, argv$ ./args 
./args
julien@ubuntu:~/argc, argv$ ./args You can do anything, but not everything.
./args
You
can
do
anything,
but
not
everything.
julien@ubuntu:~/argc, argv$ 
```

### 3. Neither irony nor sarcasm is argument
Write a program that multiplies two numbers.
* Your program should print the result of the multiplication, followed by a new line
* You can assume that the two numbers and result of the multiplication can be stored in an integer
* If the program does not receive two arguments, your program should print `Error`, followed by a new line, and return `1`

[3-mul.c](https://github.com/soniangn/holbertonschool-low_level_programming/blob/main/argc_argv/3-mul.c)
```sh
julien@ubuntu:~/argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-mul.c -o mul
julien@ubuntu:~/argc, argv$ ./mul 2 3
6
julien@ubuntu:~/argc, argv$ ./mul 2 -3
-6
julien@ubuntu:~/argc, argv$ ./mul 2 0
0
julien@ubuntu:~/argc, argv$ ./mul 245 3245342
795108790
julien@ubuntu:~/argc, argv$ ./mul
Error
julien@ubuntu:~/argc, argv$ 
```

### 4. To infinity and beyond
Write a program that adds positive numbers.
* Print the result, followed by a new line
* If no number is passed to the program, print `0`, followed by a new line
* If one of the number contains symbols that are not digits, print `Error`, followed by a new line, and return `1`
* You can assume that numbers and the addition of all the numbers can be stored in an `int`

[4-add.c](https://github.com/soniangn/holbertonschool-low_level_programming/blob/main/argc_argv/4-add.c)
```sh
julien@ubuntu:~/argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-add.c -o add
julien@ubuntu:~/argc, argv$ ./add 1 1
2
julien@ubuntu:~/argc, argv$ ./add 1 10 100 1000
1111
julien@ubuntu:~/argc, argv$ ./add 1 2 3 e 4 5
Error
julien@ubuntu:~/argc, argv$ ./add
0
julien@ubuntu:~/argc, argv$ 
```

