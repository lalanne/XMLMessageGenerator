
#include "LocationInformation_XmlTag.hpp"

using namespace tinyxml2;

void LocationInformation_XmlTag::create_locationInformation_XMLTAG(XMLDocument& doc, XMLElement* const mobileOriginatedCall){
    XMLElement* locationInformation = doc.NewElement("locationInformation");
    networkLocation.create_networkLocation_XMLTAG(doc, locationInformation);
    mobileOriginatedCall->LinkEndChild(locationInformation);
}

