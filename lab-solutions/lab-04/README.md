# Lab 04: Solution Set

## Table of Contents

- [Lab 04: Solution Set](#lab-04-solution-set)
  - [Table of Contents](#table-of-contents)
  - [Questions](#questions)
  - [Programs](#programs)

## Questions

1. What is the output of the above code? Explain why the values of a and ref are the same.

    ```c++
        #include <iostream>

        int main() {
            int a = 5;
            int& ref = a;  // ref is a reference to a
            std::cout << "a: " << a << ", ref: " << ref << std::endl;

            ref = 10;  // changing ref changes a
            std::cout << "a: " << a << ", ref: " << ref << std::endl;

            return 0;
        }
    ```
    - The first print statement is `a: 5, ref: 5` and the second is `a: 10, ref: 10`. The values of `a` and `ref` are the same because `ref` is a reference variable to `a` and they both get updated if one of them is modified.

2. How does the swap function modify the values of a and b? What would happen if the parameters were not references?

    ```c++
    #include <iostream>

    void swap(int& x, int& y) {
        int temp = x;
        x = y;
        y = temp;
    }

    int main() {
        int a = 5;
        int b = 10;
        swap(a, b);
        std::cout << "a: " << a << ", b: " << b << std::endl;

        return 0;
    }
    ```
    - The swap function takes in the arguments `a` and `b` as parameters `x` and `y` both by reference. If the paramaeters were not references, `a` and `b` won't get modified in the main function 

3. What is the value of num after the addOne function is called? Why?

    ```c++
        #include <iostream>

        void addOne(int& ref) {
            ref += 1;
        }

        int main() {
            int num = 5;
            addOne(num);
            std::cout << "num: " << num << std::endl;

            return 0;
        }
    ```
    - `num: 6` is the output. `num` is passed into the addOne function by reference and is getting incremented.

4. Can a reference be null? Explain why or why not.

    - A reference cannot be null because reference variable refer to existing variables only.

5. Why might you use a reference parameter instead of a pointer parameter in a function?

    - A reference parameter is cleaner to use, such that you don't have to de-reference the variable to get the value stored at that memory address.

6. What are the advantages and disadvantages of using references over pointers?

    - Advantages: 
    1. Automatically de-references variables
    2. Don't have to worry about null
    3. Used to pass large objects efficiently to functions without copying

    - Disadvantages:
    1. Once initialized, cannot be reassigned to refer to another variable
    2. This can be a limitation when you need to handle null or optional objects when object being referenced goes out of scope

7. Examine what was printed out to the console. Where did this value come from?

    ```c++
        #include <iostream>
        int plus_one(int x) {
            return x + 1;
        }
        int plus_two(int x) {
            return plus_one(x + 1);
        }
        int main() {
            int result = 0;
            result = plus_one(0);
            result = plus_two(result);
            std::cout << result;
        }
    ```
    - `result` is 3. `result` first initialized to 0, was updated by each function call until it became 3.

8. Were you surprised by the activity in the stack on pythonTutor? What was different from your original guess?

    - Not suprised! Same output.

9. What is the return type of the main function?

    ```cpp
    #include <iostream>

    int main() {
        std::cout << "Hello World!" << std::endl;
        return 0;
    }
    ```

    - `int`

10. What are the parameters to the main function?

    - No parameters.

11. What do you think it means for a fuction to return void?

    - It means the function does not have a return value.

12. Do you think that void functions can use return statements?

    - Absolutely! as long as there is no return value. So, something like `return;` in a void function is perfectly fine.

13.  Copy the following code into your IDE, it should throw a syntax error at compile time. What does this error mean to you?

      ```c++
          #include <iostream>
          int main() {
              run();
              return 0;
          }
  
          bool is_even(int n) {
              if (!(n % 2)) return true;
              else return false;
          }
  
          void run() {
              int input;
              while (1) {
                  std::cout << "Enter a number: " << std::endl;
                  std::cin >> input;
  
                  if (!input) break;
                  else {
                      if (is_even(input)) std::cout << "Even" << std::endl;
                      else std::cout << "Odd" << std::endl;
                  }
              }
          }
      ```
      - This error means that the functions `is_even` and `run` are not declared before the main so they cannot be called.

14. What is the output of the below code?

    ```c++
        #include <iostream>
        void mystery(int& b, int c, int& a) {
        a ++;
        b --;
        c += a;
        }

        int main() {
        int a = 5;
        int b = 10;
        int c = 15;
        mystery(c, a, b);
        std::cout << a << ' ' << b << ' ' << c << '\n';
        return 0;
        }
    ```
    - `5 11 14`


## Programs

1. [`program1.cpp`] Write a function that takes two references to integers and returns their product. The result should be stored in a third reference parameter.

    - Solution: [program1.cpp](src/program1.cpp)

2. [`program2.cpp`] Write a function that takes a reference to an integer and a reference to a string. If the integer is even, set the string to "Even". If the integer is odd, set the string to "Odd".

    - Solution: [program2.cpp](src/program2.cpp)

3. [`program3.cpp`] Write a function that swaps the values of two double variables using references. Test your function with different values.

    - Solution: [program3.cpp](src/program3.cpp)

4. [`program4.cpp`] Write a program that uses a reference to modify the value of a variable declared in the main function. Ensure that the changes are reflected in the main function.

    - Solution: [program4.cpp](src/program4.cpp)

5. [`program5.cpp`] Write three functions in C++ to implement simple addition, multiplication, and exponentiation as with the function headers seen above and test them. Each function should use your base math functions (that is to say that mult() should us add(), exp() should use mult(), etc.)

    - Solution: [program5.cpp](src/program5.cpp)

6. [`program6.cpp`] Write a function that accepts 3 integers: a, b, and c. If a is even, return the sum of all ints between b and c. Otherwise, return the product of all ints between b and c.

    - Solution: [program6.cpp](src/program6.cpp)

7. [`program7.cpp`] Write a function that accepts a decimal number and returns that number in Binary.

   - Solution: [program7.cpp](src/program7.cpp)

8. [`program8.cpp`] Write a function that accepts an integer n and returns the # of digits. Ex. 1234 returns 4.

   - Solution: [program8.cpp](src/program8.cpp)

9. [`program9.cpp`] Write a function that accepts an integer n and returns the reverse of the integer. Ex. 1234 returns 4321.

   - Solution: [program9.cpp](src/program9.cpp)


