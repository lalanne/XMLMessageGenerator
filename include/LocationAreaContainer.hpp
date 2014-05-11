#ifndef LOCATION_AREA_GENERATOR_A98WEHFP9HWEF
#define LOCATION_AREA_GENERATOR_A98WEHFP9HWEF

#include <string>
#include <vector>

struct LocationAreaGenerator{
        unsigned int size() const {return locationAreas.size();}
         const std::string& operator[](const unsigned int i) const{return locationAreas[i];}
        std::vector<std::string> locationAreas{"6710",
                                            "3960",
                                            "4561",
                                            "9090",
                                            "6666"};
};

#endif //LOCATION_AREA_GENERATOR_A98WEHFP9HWEF
