all: testproj.cpp
	clang++ testproj.cpp -O2 -static -std=c++11 -Wall -Wextra -Werror -pedantic -pedantic-errors -o testproj
	
run: testproj.cpp
	clang++ testproj.cpp -O2 -static -std=c++11 -Wall -Wextra -Werror -pedantic -pedantic-errors -o testproj
	./testproj