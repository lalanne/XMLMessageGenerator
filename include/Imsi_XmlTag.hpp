#ifndef IMSI_XML_TAG_9Q8RHG98HWEG9HWEG
#define IMSI_XML_TAG_9Q8RHG98HWEG9HWEG

#include "Generator.hpp"
#include "ImsiContainer.hpp"

#include "tinyxml2.h"

class Imsi_XmlTag{
    public:
        void create(tinyxml2::XMLDocument& doc, tinyxml2::XMLElement* const simChargeableSubscriber);

    private:
        Generator<ImsiContainer> imsiGenerator;
};

#endif //IMSI_XML_TAG_9Q8RHG98HWEG9HWEG
