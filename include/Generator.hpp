#ifndef GENERATOR_RGNLKERGOIWHERGOH
#define GENERATOR_RGNLKERGOIWHERGOH

#include <chrono>
#include <random>

template<typename T>
class Generator{
    public:
        const char* const go() const;

    private:
        T t;
};

template<typename T>
const char* const Generator<T>::go() const{
    const unsigned int seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine random_generator(seed);
    std::uniform_int_distribution<unsigned int> distribution(0, t.size()-1);
    const unsigned int random_index = distribution(random_generator);
    return t[random_index].c_str();
}

#endif //GENERATOR_RGNLKERGOIWHERGOH
