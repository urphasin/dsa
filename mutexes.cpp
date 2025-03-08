#include<iostream>
#include<mutex>
#include<shared_mutex>
#include <thread>
#include <chrono>
#include <vector>

std::mutex g_mutex;

void thread_func()
{
    using namespace std::chrono_literals;
    {
        std::lock_guard<std::mutex> lock(g_mutex);
        std::cout << "running thread "
                  << std::this_thread::get_id() << '\n';
    }

    std::this_thread::yield();
    std::this_thread::sleep_for(2s);

    {
        std::lock_guard<std::mutex> lock(g_mutex);
        std::cout << "done in thread "
                  << std::this_thread::get_id() << '\n';
    }
}

int main(void) {

    std::vector<std::thread> threads;
    for (int i = 0; i < 5; ++i)
        threads.emplace_back(thread_func);
    
    for (auto & t : threads)
        t.join();

    return 0;
}