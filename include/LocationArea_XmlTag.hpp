#ifndef LOCATION_AREA_XML_TAG_W98HFG9WHEG98HWGE
#define LOCATION_AREA_XML_TAG_W98HFG9WHEG98HWGE

#include "Generator.hpp"
#include "LocationAreaGenerator.hpp"

#include "tinyxml2.h"

class LocationArea_XmlTag{
    public:
        void create(tinyxml2::XMLDocument& doc, tinyxml2::XMLElement* const networkLocation);

    private:
        Generator<LocationAreaGenerator> locationAreaGenerator;
};

#endif //LOCATION_AREA_XML_TAG_W98HFG9WHEG98HWGE
