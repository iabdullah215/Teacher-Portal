# Cpp Separation Of Interface

The practice of organizing `C++` code into separate header files, implementation files, and main files is commonly referred to as separation of interface and implementation. This concept is a fundamental aspect of modular programming and software engineering, aiming to improve code maintainability, readability, and reusability.

## Key Terminology

**Header File (.h or .hpp):** Contains declarations of functions, classes, and variables. It defines the interface that other parts of the program can use.

**Source File (.cpp):** Contains definitions of the functions and classes declared in the header files. This is where the actual implementation of the declared functionalities is written.

**Main File (main.cpp):** Contains the main function, which is the entry point of the program. It typically uses the functions and classes defined in other source files.

## Specific Names and Concepts

**Declaration:** The process of specifying the interface of functions and classes. Declarations are typically placed in header files.

```cpp
// header.h
void sayHello();
class Greeter {
public:
    void greet();
};
```

**Definition:** The process of providing the actual implementation of the declared functions and classes. Definitions are placed in source files.

```cpp
// implementation.cpp
#include "header.h"
#include <iostream>

void sayHello() {
    std::cout << "Hello, World!" << std::endl;
}

void Greeter::greet() {
    std::cout << "Greetings!" << std::endl;
}
```

**Include Guards:** Preprocessor directives used in header files to prevent multiple inclusions of the same file, which can cause compilation errors.

```cpp
// header.h
#ifndef HEADER_H
#define HEADER_H

// Declarations

#endif // HEADER_H
```

**Compilation:** The process of converting source code into object code. Each source file is compiled separately into an object file (.o or .obj).

```console
g++ -c main.cpp
g++ -c implementation.cpp
```

**Linking:** The process of combining object files into a single executable. The linker resolves references between the object files.

```console
g++ -o myprogram main.o implementation.o
```

**Makefile:** A file used by the make build automation tool to compile and link programs. It defines rules for building targets.

```jsx
# Makefile

CXX = g++
CXXFLAGS = -Wall -std=c++11
TARGET = myprogram
SRCS = main.cpp implementation.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
```

By following this methodology, you ensure a clear separation between the interface and implementation, which enhances the modularity and maintainability of your code.
