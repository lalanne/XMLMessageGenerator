
#include "XMLMessageGenerator.hpp"

using namespace tinyxml2;

void XMLMessageGenerator::create_message(XMLDocument& doc){
    /*XML declaration*/
    XMLDeclaration* decl = doc.NewDeclaration();
    doc.LinkEndChild(decl); 

    XMLElement* dataInterChange = doc.NewElement("DataInterChange");  
    XMLElement* transferBatch = doc.NewElement("transferBatch");  

    batchControlInfo.create_batchControlInfo_XMLTAG(doc, transferBatch);
    accountInfo.create_accountingInfo_XMLTAG(doc, transferBatch);
    networkInfo.create_networkInfo_XMLTAG(doc, transferBatch);
    callEventDetails.create_callEventDetails_XMLTAG(doc, transferBatch);
    auditControlInfo.create_auditControlInfo_XMLTAG(doc, transferBatch);

	dataInterChange->LinkEndChild(transferBatch);
	doc.LinkEndChild(dataInterChange);
}

