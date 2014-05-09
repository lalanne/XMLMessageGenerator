
#include "ImsiGenerator.hpp"

#include <chrono>
#include <random>
#include <iostream>

using namespace std;

const char* const ImsiGenerator::imsi(){
    const unsigned int seed = std::chrono::system_clock::now().time_since_epoch().count();
    default_random_engine random_generator(seed);
    std::uniform_int_distribution<unsigned int> distribution_imsi(0, imsis.size()-1);
    const unsigned int random_imsi_index = distribution_imsi(random_generator);
    cout<<imsis[random_imsi_index].c_str()<<endl;
    return imsis[random_imsi_index].c_str();
}
