//
// Created by WinterRain_Bud on 5/16/2025.
//
#include <thread>
void stress() {
    while (true) {} // busy loop
}
int main() {
    std::thread t1(stress), t2(stress), t3(stress), t4(stress),t5(stress),t6(stress);

    t1.join(); t2.join(); t3.join(); t4.join();
}
