
#include "ImsiGenerator.hpp"

#include <chrono>
#include <random>

using namespace std;

const char* const ImsiGenerator::imsi(){
    const unsigned int seed = chrono::system_clock::now().time_since_epoch().count();
    default_random_engine random_generator(seed);
    uniform_int_distribution<unsigned int> distribution_imsi(0, imsis.size()-1);
    const unsigned int random_imsi_index = distribution_imsi(random_generator);
    return imsis[random_imsi_index].c_str();
}
