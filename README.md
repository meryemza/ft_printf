# ft_printf

*This project has been created as part of the 42 curriculum .*

## 1. Description:

`ft_printf` is a C project that consists of recreating the behavior of the standard `printf` function.

The goal of the project is to build a custom formatted-output function capable of handling different conversion specifiers while working with variadic arguments.

The project provides a deeper understanding of formatted output, variadic functions, argument handling, and C programming fundamentals.

## 2. Instructions:

### - Compilation :

Build the library:

```bash
make
```

This generates the static library:

```text
libftprintf.a
```

Remove object files:

```bash
make clean
```

Remove object files and the library:

```bash
make fclean
```

Rebuild everything:

```bash
make re
```

## 3. Supported conversions:

The implementation supports the following conversion specifiers:

| Specifier | Description              |
| --------- | ------------------------ |
| `%c`      | Character                |
| `%s`      | String                   |
| `%p`      | Pointer address          |
| `%d`      | Signed decimal integer   |
| `%i`      | Signed decimal integer   |
| `%u`      | Unsigned decimal integer |
| `%x`      | Lowercase hexadecimal    |
| `%X`      | Uppercase hexadecimal    |


### **Key concepts:**

This project strengthened my understanding of:

* Variadic functions
* `va_list`, `va_start`, `va_arg`, and `va_end`
* Format strings
* Type handling in C
* Integer and hexadecimal conversions
* Makefiles
