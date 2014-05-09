
#include "LocationAreaGenerator.hpp"

#include <chrono>
#include <random>

using namespace std;

const char* const LocationAreaGenerator::locationArea(){
    const unsigned int seed = std::chrono::system_clock::now().time_since_epoch().count();
    default_random_engine random_generator(seed);
    std::uniform_int_distribution<unsigned int> distribution(0, locationAreas.size()-1);
    const unsigned int random_index = distribution(random_generator);
    return locationAreas[random_index].c_str();
}
