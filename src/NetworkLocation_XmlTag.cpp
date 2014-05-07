
#include "NetworkLocation_XmlTag.hpp"

using namespace tinyxml2;

void NetworkLocation_XmlTag::create_networkLocation_XMLTAG(XMLDocument& doc, XMLElement* const locationInformation){
    XMLElement* networkLocation = doc.NewElement("networkLocation");
    XMLText* networkLocationText = doc.NewText("");
    networkLocation->LinkEndChild(networkLocationText);
    locationInformation->LinkEndChild(networkLocation);
}

