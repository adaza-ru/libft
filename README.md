<div align="center">

# libft — A Custom C Standard Library

**A from-scratch reimplementation of core C standard library functions, plus string, memory, and linked-list utilities — organized by category and built as a static library.**

![C](https://img.shields.io/badge/language-C-00599C?logo=c&logoColor=white)
![Make](https://img.shields.io/badge/build-Make-red)
![Static Library](https://img.shields.io/badge/output-static_library-blue)

*This project has been created as part of the 42 curriculum by adaza-ru.*

</div>

---

## Table of Contents

- [Overview](#overview)
- [Project Structure](#project-structure)
- [Function Reference](#function-reference)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Notes](#notes)

---

## Overview

libft is a personal reimplementation of core C standard library functions, prefixed `ft_` and matching the behavior of their libc counterparts, extended with a set of additional string, conversion, and output utilities, plus a small linked-list toolkit.

It was the first project of 42's common core curriculum and is reused as the foundation for most of the C projects that follow it — every function here gets linked into later, larger projects rather than reimplemented from scratch each time.

The library compiles to a single static archive, `libft.a`, and is organized by function category rather than as one flat folder of source files.

## Project Structure

```
libft/
├── Makefile
├── include/
│   └── libft.h
└── src/
    ├── ctype/      # character classification & case conversion
    ├── memory/     # memory operations
    ├── string/     # string manipulation
    ├── convert/    # number <-> string conversion
    ├── output/     # fd-based output functions
    └── list/       # singly linked list utilities
```

## Function Reference

| Category | Folder | Functions |
|---|---|---|
| Character handling | `ctype/` | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower` |
| Memory | `memory/` | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc` |
| Strings | `string/` | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`, `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strmapi`, `ft_striteri` |
| Conversion | `convert/` | `ft_atoi`, `ft_itoa` |
| Output | `output/` | `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd` |
| Linked lists | `list/` | `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap` |

## Getting Started

### Requirements

- A C compiler
- `make`

### Build

```bash
git clone https://github.com/adaza-ru/libft.git
cd libft
make
```

This produces `libft.a` at the root of the repository.

## Usage

Link the static library and its header into another project:

```bash
cc your_program.c -I/path/to/libft/include -L/path/to/libft -lft -o your_program
```

```c
#include "libft.h"
```

## Notes

Originally built as the first project of the 42 curriculum, at 42 Málaga — the starting point for learning C memory management, string handling, and linked lists, and reused throughout the rest of the core curriculum.
