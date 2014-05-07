#ifndef NETWORK_LOCATION_XML_TAG_9E8WRH9HEWRG98HWE9R8GH
#define NETWORK_LOCATION_XML_TAG_9E8WRH9HEWRG98HWE9R8GH

#include "RecEntityCode_XmlTag.hpp"
#include "CallReference_XmlTag.hpp"
#include "LocationArea_XmlTag.hpp"
#include "CellId_XmlTag.hpp"

#include "tinyxml2.h"

class NetworkLocation_XmlTag{
    public:
        void create_networkLocation_XMLTAG(tinyxml2::XMLDocument& doc, tinyxml2::XMLElement* const locationInformation);

    private:
        RecEntityCode_XmlTag recEntityCode;
        CallReference_XmlTag callReference;
        LocationArea_XmlTag locationArea;
        CellId_XmlTag cellId;
};

#endif //NETWORK_LOCATION_XML_TAG_9E8WRH9HEWRG98HWE9R8GH
