# C Lab 2: Managing Memory with Pointers

This lab practiced the different ways C lets you work with memory directly, using pointers, the stack, and the heap.

## What I Did

- **Pointers to the stack and heap:** created one variable with `malloc` and used `&` to get the address of another on the stack, then changed both values through pointers with `*`.
- **Arrays:** created an array of 10 ints on the stack and an array of 12 ints on the heap with `malloc`. I filled each with `[]` notation, changed a value with `*` notation, and printed them with a `for` loop.
- **`print_all`:** a function that takes an int array and its size and prints every value using a `while` loop, called on both arrays.
- **`increase` vs. `alt_increase`:** both add 10, but because C is pass by value, `increase` only changes its own copy and the original variable stays the same. `alt_increase` takes a pointer, so it changes the original. I printed the values before and after each call to show the difference.
- **`make_array`:** a function that creates an int array of any size, sets every value to zero, and returns it. I then set a few values myself and printed it with `print_all`. It has to use `malloc` so the array lives on the heap. An array made on the stack could get overwritten once the function returns.
