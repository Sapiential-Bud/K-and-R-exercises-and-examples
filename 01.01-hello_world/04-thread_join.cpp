//
// Created by WinterRain_Bud on 5/16/2025.
//
#include <iostream>
#include <thread>

void hello() {
    std::cout << "Hello from thread!\n";
}
void stress() {
    while (true) {} // busy loop
}

int main() {
    hello();
    std::thread t1(hello);  // starts new thread immediately
    //t1.join();              // wait for t1 to finish
    t1.detach();
    std::thread t2(stress);
    t2.join();
    std::cout << "Back in main\n";
    return 0;
}
