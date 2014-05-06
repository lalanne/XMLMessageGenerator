#ifndef XML_MESSAGE_GENERATOR_0ER9HG0WEGKJDJG8R8GKNG
#define XML_MESSAGE_GENERATOR_0ER9HG0WEGKJDJG8R8GKNG

#include "BatchControlInfo_XmlTag.hpp"
#include "AccountInfo_XmlTag.hpp"
#include "NetworkInfo_XmlTag.hpp"
#include "AuditControlInfo_XmlTag.hpp"

#include "tinyxml2.h"  

class XMLMessageGenerator{
    public:
        void create_message(tinyxml2::XMLDocument& doc);

    private:
        void create_chargeableSubscriber_XMLTAG(tinyxml2::XMLDocument& doc, tinyxml2::XMLElement* const basicCallInformation);
        void create_callEventStartTimeStamp_XMLTAG(tinyxml2::XMLDocument& doc, tinyxml2::XMLElement* const basicCallInformation);
        void create_totalCallEventDuration_XMLTAG(tinyxml2::XMLDocument& doc, tinyxml2::XMLElement* const basicCallInformation);
        void create_basicCallInformation_XMLTAG(tinyxml2::XMLDocument& doc, tinyxml2::XMLElement* const mobileOriginatedCall);
        void create_locationInformation_XMLTAG(tinyxml2::XMLDocument& doc, tinyxml2::XMLElement* const mobileOriginatedCall);
        void create_basicServiceUsedList_XMLTAG(tinyxml2::XMLDocument& doc, tinyxml2::XMLElement* const mobileOriginatedCall);
        void create_operatorSpecInformation_XMLTAG(tinyxml2::XMLDocument& doc, tinyxml2::XMLElement* const mobileOriginatedCall);
        void create_mobileOriginatedCall_XMLTAG(tinyxml2::XMLDocument& doc, tinyxml2::XMLElement* const callEventDetails);
        void create_callEventDetails_XMLTAG(tinyxml2::XMLDocument& doc, tinyxml2::XMLElement* const transferBatch);

    private:
        BatchControlInfo_XmlTag batchControlInfo;
        AccountInfo_XmlTag accountInfo;
        NetworkInfo_XmlTag networkInfo;
        AuditControlInfo_XmlTag auditControlInfo;
};

#endif //XML_MESSAGE_GENERATOR_0ER9HG0WEGKJDJG8R8GKNG
