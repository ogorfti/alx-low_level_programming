#!/bin/sh -e
gcc -c *.c
ar cr libmy.a *.o
