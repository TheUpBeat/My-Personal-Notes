# Preprocessing and Compilation

* Preprocessing

	- It is not a part of compilation.

	- It instructs the C compiler to do pre-processing before compiling the code.

	- The preprocessor start with a '#' symbol. Examples like #define, #ifdef, #ifndef, etc.

* Preprocessors help in compiling the code that is required i.e., a condition can applied and the desired statement will only execute if it satisfies the condition.

* There are many preprocessors that can be used to collect statements into blocks that a user wants to get compiled when the specified condition is `True`. For example, `#if`, `#ifdef`, `#elif`, `#endif`.

* Some advantages of using macros:

	- The time involving to call a function for a variable can be minimized by defining a macro and using it.
	- The length of the program can be decreased.

* As the macros are substituted with their respective code after the compilation, the size of the file will increase.

* Assertions are a validation check for critical statements in the program.

* If the validation doesn't validate and returns false, this would result in an error and the program gets aborted.

* The difference between error handling and assertions is that assertions can be disabled at run-time.

NOTE: if `#define NDEBUG` is defined near `#include<assert.h>` directive, it will disable the assert function.

* There are also static or compile-time asserts that are used to catch the errors while compiling. Useful for compilation validation.

* The covered topics are:

	- Conditional compilation with the help of derivatives
	- Applying assertions for validation
	- Using assertions to ensure that the pointer is not pointing to NULL.
	- Catching errors early with compile-time assertions.
	- Applying stringize and token pasting operators.
