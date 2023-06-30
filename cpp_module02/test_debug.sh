#!/bin/bash
c++ -Wall -Wextra -Werror -g3 -fsanitize=address *.cpp -o main
./main | cat -e
# rm main
