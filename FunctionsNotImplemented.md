Some functions require some support to work, like printf, fopen, etc.
In a real C standard library, these functions would use O/S-specific system calls. Since we are in a freestanding environnement, this is not possible.

**Headers not listed here are fully implemented.**

### assert.h ###
  * assert


### locale.h ###
  * struct lconv
  * setlocale
  * localeconv


### signal.h ###
  * sig\_atomic\_t
  * signal
  * raise


### stdio.h ###
  * FILE
  * fpos\_t
  * FILENAME\_MAX
  * TMP\_MAX
  * stderr
  * stdin
  * stdout
  * remove
  * rename
  * tmpfile
  * tmpnam
  * fclose
  * fflush
  * fopen
  * freopen
  * setbuf
  * setvbuf
  * fprintf
  * fscanf
  * printf
  * scanf
  * vfprintf
  * vfscanf
  * vprintf
  * fgetc
  * fgets
  * fputc
  * fputs
  * getc
  * getchar
  * gets
  * putc
  * putchar
  * puts
  * ungetc
  * fread
  * fwrite
  * fgetpos
  * fseek
  * fsetpos
  * ftell
  * rewind
  * clearerr
  * feof
  * ferror
  * perror


### stdlib.h ###
  * calloc
  * free
  * malloc
  * realloc
  * abort
  * atexit
  * exit
  * Exit
  * getenv
  * system


### string.h ###
  * strcoll
  * strxfrm
  * strerror


### time.h ###

_Nothing will be implemented_