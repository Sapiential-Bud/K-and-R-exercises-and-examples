//
// Created by WinterRain_Bud on 5/16/2025.
//
#include <thread>
#include <vector>
#include <unistd.h>

#include <thread>
#include <vector>
#include <iostream>
#include <atomic>
#include <chrono>

std::atomic<bool> keep_running(true);

void stress() {
    while (keep_running);
}

int main() {
    int cores = std::thread::hardware_concurrency();
    std::cout << "Using " << cores << " threads\n";

    std::vector<std::thread> threads;
    for (int i = 0; i < cores; ++i)
        threads.emplace_back(stress);

    std::this_thread::sleep_for(std::chrono::seconds(10));
    keep_running = false;

    for (auto& t : threads)
        t.join();
}
