
#include "CallEventDetails_XmlTag.hpp"

using namespace tinyxml2;

void CallEventDetails_XmlTag::create_callEventDetails_XMLTAG(XMLDocument& doc, XMLElement* const transferBatch){
    XMLElement* callEventDetails = doc.NewElement("callEventDetails");  

    for(unsigned int i = 0; i<3; ++i) mobileOriginatedCall.create_mobileOriginatedCall_XMLTAG(doc, callEventDetails);
	
    transferBatch->LinkEndChild(callEventDetails);
}





