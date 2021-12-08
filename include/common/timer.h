#ifndef TIMER_H
#define TIMER_H
#include <chrono>
#include <thread>
#define AGE_DEFAULT_FPS  2
#define AGE_ENHANCED_FPS 60
namespace AGE{
    template<std::intmax_t FPS>
    class Timer{
       private:
            bool _first;
            std::chrono::duration<double, std::ratio<1, FPS>> _duration;
    // time point on the last frame
            std::chrono::time_point<std::chrono::steady_clock, decltype(_duration)> _prev;
        public:
            Timer(): _first {false}, _duration {1} {}
            ~Timer() = default;
             void tick()
            {   
                    if (!_first) {
                        _first = true;
                        _prev = std::chrono::steady_clock::now();
                        return;
                    }

                    _prev += _duration;
                    std::this_thread::sleep_until(_prev);
                }


    };
}
#endif