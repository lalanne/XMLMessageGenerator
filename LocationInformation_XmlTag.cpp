
#include "LocationInformation_XmlTag.hpp"

using namespace tinyxml2;

void LocationInformation_XmlTag::create_locationInformation_XMLTAG(XMLDocument& doc, XMLElement* const mobileOriginatedCall){
    XMLElement* locationInformation = doc.NewElement("locationInformation");
    XMLText* locationInformationText = doc.NewText("");
    locationInformation->LinkEndChild(locationInformationText);
    mobileOriginatedCall->LinkEndChild(locationInformation);
}

