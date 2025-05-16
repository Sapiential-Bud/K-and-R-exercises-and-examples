//
// Created by WinterRain_Bud on 5/16/2025.
//

#include <iostream>
#include <thread>
#include <chrono>

void background_task() {
    for (int i = 0; i < 20; ++i) {
        std::cout << "Detached thread running... " << i << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    std::cout << "Detached thread finished." << std::endl;
}

int main() {
    std::thread t(background_task);
    t.detach();

    std::cout << "Main thread sleeping for 5 seconds...";
    std::this_thread::sleep_for(std::chrono::seconds(5));
    std::cout << "Main exiting now.";

    return 0;
}
