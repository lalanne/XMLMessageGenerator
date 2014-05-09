
#include "LocationArea_XmlTag.hpp"
#include "LocationAreaGenerator.hpp"

using namespace tinyxml2;

void LocationArea_XmlTag::create(XMLDocument& doc, XMLElement* const networkLocation){
    XMLElement* locationArea = doc.NewElement("locationArea");
    LocationAreaGenerator locationAreaGenerator;
    XMLText* locationAreaText = doc.NewText(locationAreaGenerator.locationArea());
    locationArea->LinkEndChild(locationAreaText);
    networkLocation->LinkEndChild(locationArea);
}

