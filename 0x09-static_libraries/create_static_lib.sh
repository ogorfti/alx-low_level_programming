#!/bin/sh -e
gcc -c *.c
ar cr libwork.a *.o
