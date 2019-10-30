# printf

This printf function is a reimagining of the standard printf version. Our printf
produce an output according to a format for project. when used, you will be able
print using the Sentences, Length, Negative, Unsigned, Character, String,
Address, Percent, Len and Unknown. By following the framework, every mandatory
project and working with our peers, we were able to combine our efforts to
create our own working verison.

## Getting Started

These instructions will get you a copy of the project up and running on your
local machine for development and testing purposes. See deployment for notes on
how to deploy the project on a live system.

### Prerequisites

The prerequisites to create this printf project would either be 1 year of
college/HS C programming course or two months at Holberton School.

## Deployment

Since Trevor and I had proir obligations, we keep in contact every step of the way.
We worked towards our strengths because we had limited time but keep each other
informed and what a code is doing. This is not my first time on a team. When i
was lacking understanding in a certain area, Trevor was more than welcome to break it down for me.
We made a small plan then adjusted as we went along. We decided on going with
switch cases because it cut down on time.

## Built With

* Ubuntu
* github

## Requirements
* Allowed editors: vi, vim, emacs
* All files are compiled on Ubuntu 14.04 LTS
* Programs and functions are compiled with gcc 4.8.4 using the flags
-Wall -Werror -Wextra and -pedantic
* All files should end with a new line
* Code should use the Betty style. It is checked using betty-style.pl and betty-doc.pl
* The use of global variables is prohibited
* No more than 5 functions per file
* The prototypes of all functions should be included in a header file called holberton.h

## Prototype

```bash
int _printf(const char *format, ...);
```

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic *.c
```

## Format Specifiers

### Supported Types

| Type  | Output |
|:-----:|:------:|
| c | Single character |
| s | String |
| d | Integer in decimal |
| i | Integer |
| % | Percent sign |

### Return Value

* The number of characters printed

## Examples

```c
$ cat main.c
#include "holberton.h"

/**
*main - Entry point
*
*Return: Always 0
*/
int main(void)
{
	int len;
	int len2;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	return (0);
}
$ gcc -Wall -Wextra -Werror -pedantic *.c -o printf
$ ./printf
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
$
```

## Authors

* [**Trevor Stevenson**](https://github.com/Tr3v1n4t0r) - [*@Tr3v1n4t0r*](https://www.https://twitter.com/tr3v1nat0r)
* [**Kenneth Fernandez**](https://github.com/Kenfernandezjr) - [*@Kenfernandezjr*]( https://www.https://twitter.com/DrKenLove)

## License

This project is licensed under the Holberton School coding 2 year program

## Acknowledgments

* Kristen loyd
* Cohort 10
* and previous Holberton students
