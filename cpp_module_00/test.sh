#!/bin/bash
c++ -Wall -Wextra -Werror *.cpp -o main
./main | cat -e