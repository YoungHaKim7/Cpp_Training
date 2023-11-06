# Cpp Makefile(macOS)

```bash
echo "# Result\xa\xa\x60\x60\x60\xa\xa\x60\x60\x60" >> README.md &&

echo "# A collection of useful .gitignore templates " >> .gitignore &&
echo "# https://github.com/github/gitignore\xa" >> .gitignore &&
echo "# General" >> .gitignore &&
echo ".DS_Store" >> .gitignore &&
echo "dir/otherdir/.DS_Store\xa" >> .gitignore &&
echo "out/" >> .gitignore &&

echo "r:\xa\x09\x09rm -rf out\xa\x09\x09mkdir out\xa\x09\x09g++ -pthread -lm -Wall -Wextra -ggdb -o out/main src/main.cpp" >> Makefile &&
echo "\x09\x09./out/main\xa" >> Makefile &&
echo "b:\xa\x09\x09g++ -c -pthread -lm -Wall -Wextra -ggdb src/main.cpp -o out/main" >> Makefile &&

echo "l:\xa\x09\x09g++ -S -emit-llvm src/main.cpp -o out/" >> Makefile &&

echo "clean:" >> Makefile &&
echo "\x09\x09rm -rf ./out\xa" >> Makefile &&
echo "init:\xa\x09\x09mkdir src" >> Makefile &&
echo "\x09\x09echo \x22#include <iostream>\xa\x22 >> src/main.cpp" >> Makefile &&
echo "\x09\x09echo \x22int main(int argc, char **argv) {\x22 >> src/main.cpp" >> Makefile &&
echo "\x09\x09echo \x22\x09std::cout<< \\\"Hello C++ \\\" << std::endl;\x22 >> src/main.cpp" >> Makefile &&
echo "\x09\x09echo \x22\x09return 0;\x22 >> src/main.cpp" >> Makefile &&
echo "\x09\x09echo \x22\x09}\x22 >> src/main.cpp" >> Makefile
```

https://github.com/cpp-best-practices/cppbestpractices/blob/master/02-Use_the_Tools_Available.md