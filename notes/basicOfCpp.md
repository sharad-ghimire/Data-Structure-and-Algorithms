# C++

### Basic
* OOP, Functional, Procedural, Generic (Templates)
* C with Classes - 1970 - Bjarne Stroustrup

### Syntax
```cpp
#include <cstudio>
using namespace std;

int main (int argc, char ** argv) {   //char * argv[]
	puts("loop test");
	for(int i = 0; argv[i]; i++) {
		printf("%d: %s\n", i, argv[i];
	}
	return 0;  //sucess
}
```
* statement &rightarrow; terminate with ; [unit of code]
* function &rightarrow; reuse, called by other function
* main() &rightarrow; main function
* const char * str = "Hello World"
* //comment
* cstudio &rightarrow; puts, printf
* iostream &rightarrow; cout, cin
* %d &rightarrow; token for printf to know it is int
* Identifers &rightarrow; tokens for identifying the name for variables, function, and defined types
* _private_identifier
* __system_use_only

### String
* Strings in C are just null terminated char arrays.
* Null &rightarrow; mostly 0, since C++11 an actual null_ptr type exists so that we can have proper zero.
* C++ has a proper string class (`std::string`) that conceptually wraps a `char[]` and fixes problems like:
	* What if we forget the null?
	* What if we want to know the length?
* \0 &rightarrow; ASCII character for null <br>
* `char name[6] = "Hello";` 
![alt text](images\1array.png "Null terminated char array")

### Arrays
`int number[5];` 
* Syntax -`type Array-name[size]`







