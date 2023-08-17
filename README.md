# Process Synchronization using Mutex in C++

This code example demonstrates how to use a mutex to achieve process synchronization in C++. A mutex (short for mutual exclusion) is a synchronization primitive that ensures only one thread can access a critical section of code at a time.

## Overview

In this example, we have a set of threads that need to print messages concurrently. To prevent the messages from overlapping or getting mixed up, a mutex is used to protect the console output. Each thread acquires the mutex before printing and releases it afterward, ensuring that the output is controlled and synchronized.

## How to Run

1. Compile the code using a C++ compiler:
   ```sh
   g++ -std=c++11 -o sync_example sync_example.cpp -lpthread
2. Run the compiled executable:
   ```sh
   ./sync_example

## Code Explanation
mutex mtx;: A mutex object for synchronization.

void printNumber(int num): Function to print a message with the thread number.

int main(): Main function where threads are created and joined

The code demonstrates how to use mutexes for protecting critical sections to ensure proper synchronization among threads.

## Additional Notes
This example showcases a simplified scenario for educational purposes. In real-world applications, more complex synchronization mechanisms might be needed to handle different scenarios and challenges.

Feel free to experiment with the code and explore further synchronization concepts using mutexes.
