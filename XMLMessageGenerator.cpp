

#include "XMLMessageGenerator.hpp"

using namespace tinyxml2;

void XMLMessageGenerator::create_batchControlInfo_XMLTAG(XMLDocument& doc, XMLElement* const transferBatch){
    XMLElement* batchControlInfo = doc.NewElement("batchControlInfo");  
    XMLElement* sender = doc.NewElement("sender");  
    XMLText* senderText = doc.NewText("");
    sender->LinkEndChild(senderText);
	batchControlInfo->LinkEndChild(sender);
	transferBatch->LinkEndChild(batchControlInfo);
}

void XMLMessageGenerator::create_accountingInfo_XMLTAG(XMLDocument& doc, XMLElement* const transferBatch){
    XMLElement* accountingInfo = doc.NewElement("accountingInfo");  
    XMLElement* tapDecimalPlaces = doc.NewElement("tapDecimalPlaces");
    XMLText* tapDecimalPlacesText = doc.NewText("");
    tapDecimalPlaces->LinkEndChild(tapDecimalPlacesText);
	accountingInfo->LinkEndChild(tapDecimalPlaces);
	transferBatch->LinkEndChild(accountingInfo);
}

void XMLMessageGenerator::create_networkInfo_XMLTAG(XMLDocument& doc, XMLElement* const transferBatch){
    XMLElement* networkInfo = doc.NewElement("networkInfo");  
    XMLText* networkInfoText = doc.NewText("");
    networkInfo->LinkEndChild(networkInfoText);
	transferBatch->LinkEndChild(networkInfo);
}

void XMLMessageGenerator::create_chargeableSubscriber_XMLTAG(XMLDocument& doc, XMLElement* const basicCallInformation){
    XMLElement* chargeableSubscriber = doc.NewElement("chargeableSubscriber");
    XMLText* chargeableSubscriberText = doc.NewText("");
    chargeableSubscriber->LinkEndChild(chargeableSubscriberText);
    basicCallInformation->LinkEndChild(chargeableSubscriber);
}

void XMLMessageGenerator::create_callEventStartTimeStamp_XMLTAG(XMLDocument& doc, XMLElement* const basicCallInformation){
    XMLElement* callEventStartTimeStamp = doc.NewElement("callEventStartTimeStamp");
    XMLText* callEventStartTimeStampText = doc.NewText("");
    callEventStartTimeStamp->LinkEndChild(callEventStartTimeStampText);
    basicCallInformation->LinkEndChild(callEventStartTimeStamp);
}

void XMLMessageGenerator::create_totalCallEventDuration_XMLTAG(XMLDocument& doc, XMLElement* const basicCallInformation){
    XMLElement* totalCallEventDuration = doc.NewElement("totalCallEventDuration");
    XMLText* totalCallEventDurationText = doc.NewText("");
    totalCallEventDuration->LinkEndChild(totalCallEventDurationText);
    basicCallInformation->LinkEndChild(totalCallEventDuration);
}

void XMLMessageGenerator::create_basicCallInformation_XMLTAG(XMLDocument& doc, XMLElement* const mobileOriginatedCall){
    XMLElement* basicCallInformation = doc.NewElement("basicCallInformation");

    create_chargeableSubscriber_XMLTAG(doc, basicCallInformation);
    create_callEventStartTimeStamp_XMLTAG(doc, basicCallInformation);
    create_totalCallEventDuration_XMLTAG(doc, basicCallInformation);

    mobileOriginatedCall->LinkEndChild(basicCallInformation);
}

void XMLMessageGenerator::create_locationInformation_XMLTAG(XMLDocument& doc, XMLElement* const mobileOriginatedCall){
    XMLElement* locationInformation = doc.NewElement("locationInformation");
    XMLText* locationInformationText = doc.NewText("");
    locationInformation->LinkEndChild(locationInformationText);
    mobileOriginatedCall->LinkEndChild(locationInformation);
}

void XMLMessageGenerator::create_basicServiceUsedList_XMLTAG(XMLDocument& doc, XMLElement* const mobileOriginatedCall){
    XMLElement* basicServiceUsedList = doc.NewElement("basicServiceUsedList");
    XMLText* basicServiceUsedListText = doc.NewText("");
    basicServiceUsedList->LinkEndChild(basicServiceUsedListText);
    mobileOriginatedCall->LinkEndChild(basicServiceUsedList);
}

void XMLMessageGenerator::create_operatorSpecInformation_XMLTAG(XMLDocument& doc, XMLElement* const mobileOriginatedCall){
    XMLElement* operatorSpecInformation = doc.NewElement("operatorSpecInformation");
    XMLText* operatorSpecInformationText = doc.NewText("");
    operatorSpecInformation->LinkEndChild(operatorSpecInformationText);
    mobileOriginatedCall->LinkEndChild(operatorSpecInformation);
}

void XMLMessageGenerator::create_mobileOriginatedCall_XMLTAG(XMLDocument& doc, XMLElement* const callEventDetails){
    XMLElement* mobileOriginatedCall = doc.NewElement("mobileOriginatedCall");

    create_basicCallInformation_XMLTAG(doc, mobileOriginatedCall);
    create_locationInformation_XMLTAG(doc, mobileOriginatedCall);
    create_basicServiceUsedList_XMLTAG(doc, mobileOriginatedCall);
    create_operatorSpecInformation_XMLTAG(doc, mobileOriginatedCall);

    callEventDetails->LinkEndChild(mobileOriginatedCall);
}

void XMLMessageGenerator::create_callEventDetails_XMLTAG(XMLDocument& doc, XMLElement* const transferBatch){
    XMLElement* callEventDetails = doc.NewElement("callEventDetails");  

    for(unsigned int i = 0; i<3; ++i) XMLMessageGenerator::create_mobileOriginatedCall_XMLTAG(doc, callEventDetails);
	
    transferBatch->LinkEndChild(callEventDetails);
}

void XMLMessageGenerator::create_auditControlInfo_XMLTAG(XMLDocument& doc, XMLElement* const transferBatch){
    XMLElement* auditControlInfo = doc.NewElement("auditControlInfo");  
    XMLText* auditControlInfoText = doc.NewText("");
    auditControlInfo->LinkEndChild(auditControlInfoText);
	transferBatch->LinkEndChild(auditControlInfo);
}

void XMLMessageGenerator::create_message(XMLDocument& doc){
    /*XML declaration*/
    XMLDeclaration* decl = doc.NewDeclaration();
    doc.LinkEndChild(decl); 

    XMLElement* dataInterChange = doc.NewElement("DataInterChange");  
    XMLElement* transferBatch = doc.NewElement("transferBatch");  

    create_batchControlInfo_XMLTAG(doc, transferBatch);
    create_accountingInfo_XMLTAG(doc, transferBatch);
    create_networkInfo_XMLTAG(doc, transferBatch);
    create_callEventDetails_XMLTAG(doc, transferBatch);
    create_auditControlInfo_XMLTAG(doc, transferBatch);

	dataInterChange->LinkEndChild(transferBatch);
	doc.LinkEndChild(dataInterChange);
}

