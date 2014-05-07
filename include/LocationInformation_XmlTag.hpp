#ifndef LOCATION_INFORMATION_XML_TAG_W9E9FHWE98FHW98FH
#define LOCATION_INFORMATION_XML_TAG_W9E9FHWE98FHW98FH

#include "NetworkLocation_XmlTag.hpp"

#include "tinyxml2.h"

class LocationInformation_XmlTag{
    public:
        void create_locationInformation_XMLTAG(tinyxml2::XMLDocument& doc, tinyxml2::XMLElement* const mobileOriginatedCall);

    private:
        NetworkLocation_XmlTag networkLocation;
};

#endif //LOCATION_INFORMATION_XML_TAG_W9E9FHWE98FHW98FH
