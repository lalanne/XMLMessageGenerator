
#include "CallEventDetails_XmlTag.hpp"

using namespace tinyxml2;

void CallEventDetails_XmlTag::create(XMLDocument& doc, XMLElement* const transferBatch){
    XMLElement* callEventDetails = doc.NewElement("callEventDetails");  

    for(unsigned int i = 0; i<3; ++i) mobileOriginatedCall.create(doc, callEventDetails);
	
    transferBatch->LinkEndChild(callEventDetails);
}





