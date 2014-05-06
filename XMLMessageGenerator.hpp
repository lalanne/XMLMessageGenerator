#ifndef XML_MESSAGE_GENERATOR_0ER9HG0WEGKJDJG8R8GKNG
#define XML_MESSAGE_GENERATOR_0ER9HG0WEGKJDJG8R8GKNG

#include "BatchControlInfo_XmlTag.hpp"
#include "AccountInfo_XmlTag.hpp"
#include "NetworkInfo_XmlTag.hpp"
#include "AuditControlInfo_XmlTag.hpp"
#include "CallEventDetails_XmlTag.hpp"

#include "tinyxml2.h"  

class XMLMessageGenerator{
    public:
        void create_message(tinyxml2::XMLDocument& doc);

    private:
        BatchControlInfo_XmlTag batchControlInfo;
        AccountInfo_XmlTag accountInfo;
        NetworkInfo_XmlTag networkInfo;
        AuditControlInfo_XmlTag auditControlInfo;
        CallEventDetails_XmlTag callEventDetails;
};

#endif //XML_MESSAGE_GENERATOR_0ER9HG0WEGKJDJG8R8GKNG
