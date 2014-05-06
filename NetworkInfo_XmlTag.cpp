
#include "NetworkInfo_XmlTag.hpp"

using namespace tinyxml2;

void NetworkInfo_XmlTag::create_networkInfo_XMLTAG(XMLDocument& doc, XMLElement* const transferBatch){
    XMLElement* networkInfo = doc.NewElement("networkInfo");  
    XMLText* networkInfoText = doc.NewText("");
    networkInfo->LinkEndChild(networkInfoText);
	transferBatch->LinkEndChild(networkInfo);
}

