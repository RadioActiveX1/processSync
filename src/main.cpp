#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

mutex mtx;  // Mutex for synchronization

void printNumber(int num) {
    mtx.lock();  // Lock the mutex before accessing the critical section
    cout << "Thread " << num << " is printing." << endl;  // Critical section
    mtx.unlock();  // Unlock the mutex after accessing the critical section
}

int main() {
    const int numThreads = 3;
    thread threads[numThreads];

    // Creating threads
    for (int i = 0; i < numThreads; ++i) {
        threads[i] = thread(printNumber, i + 1);
    }

    // Waiting for threads to finish
    for (int i = 0; i < numThreads; ++i) {
        threads[i].join();
    }

    return 0;
}