# Dynamic Libraries

## Tasks

### Task 0: Create a Dynamic Library
- **Description:** Create the dynamic library libdynamic.so containing all the functions listed below:
- **Files:**
  - `libdynamic.so`: Dynamic library containing various functions.
  - `main.h`: Header file containing prototypes of functions.
- **Functions:**
  - `int _putchar(char c);`
  - `int _islower(int c);`
  - `int _isalpha(int c);`
  - `int _abs(int n);`
  - `int _isupper(int c);`
  - `int _isdigit(int c);`
  - `int _strlen(char *s);`
  - `void _puts(char *s);`
  - `char *_strcpy(char *dest, char *src);`
  - `int _atoi(char *s);`
  - `char *_strcat(char *dest, char *src);`
  - `char *_strncat(char *dest, char *src, int n);`
  - `char *_strncpy(char *dest, char *src, int n);`
  - `int _strcmp(char *s1, char *s2);`
  - `char *_memset(char *s, char b, unsigned int n);`
  - `char *_memcpy(char *dest, char *src, unsigned int n);`
  - `char *_strchr(char *s, char c);`
  - `unsigned int _strspn(char *s, char *accept);`
  - `char *_strpbrk(char *s, char *accept);`
  - `char *_strstr(char *haystack, char *needle);`

### Task 1: Create a Dynamic Library from all .c Files
- **Description:** Create a script that creates a dynamic library called liball.so from all the .c files that are in the current directory.
- **Files:**
  - `liball.so`: Dynamic library created from all .c files in the current directory.
- **Functions:** Same as Task 0.

### Task 2: Call C Functions from Python
- **Description:** Create a dynamic library that contains C functions that can be called from Python. See example for more detail.
- **File:**
  - `100-operations.so`: Dynamic library containing C functions callable from Python.
- **Python Script:** 
  ```python
  import random
  import ctypes
  
  cops = ctypes.CDLL('./100-operations.so')
  a = random.randint(-111, 111)
  b = random.randint(-111, 111)
  print("{} + {} = {}".format(a, b, cops.add(a, b)))
  print("{} - {} = {}".format(a, b, cops.sub(a, b)))
  print("{} x {} = {}".format(a, b, cops.mul(a, b)))
  print("{} / {} = {}".format(a, b, cops.div(a, b)))
  print("{} % {} = {}".format(a, b, cops.mod(a, b)))

### Task 3: Code Injection for Winning Giga Millions
- **Description:**  Code injection to win the Giga Millions
- **File:**
101-make_me_win.sh: Shell script to run on the server.
- **Instructions:**
The script should be run by the mole on the server 98 seconds before gm runs.
The script will delete itself after execution.