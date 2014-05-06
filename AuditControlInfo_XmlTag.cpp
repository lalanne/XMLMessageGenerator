
#include "AuditControlInfo_XmlTag.hpp"

using namespace tinyxml2;

void AuditControlInfo_XmlTag::create_auditControlInfo_XMLTAG(XMLDocument& doc, XMLElement* const transferBatch){
    XMLElement* auditControlInfo = doc.NewElement("auditControlInfo");  
    XMLText* auditControlInfoText = doc.NewText("");
    auditControlInfo->LinkEndChild(auditControlInfoText);
	transferBatch->LinkEndChild(auditControlInfo);
}


