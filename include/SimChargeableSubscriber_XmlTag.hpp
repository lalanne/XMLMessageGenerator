#ifndef SIM_CHARGEABLE_SUBSCRIBER_XML_TAG_IQHEF98QHEG98HQWEG98HG
#define SIM_CHARGEABLE_SUBSCRIBER_XML_TAG_IQHEF98QHEG98HQWEG98HG

#include "Imsi_XmlTag.hpp"

#include "tinyxml2.h"

class SimChargeableSubscriber_XmlTag{
    public:
       void create(tinyxml2::XMLDocument& doc, tinyxml2::XMLElement* const basicCallInformation); 
        
    private:
        Imsi_XmlTag imsi;
};

#endif //SIM_CHARGEABLE_SUBSCRIBER_XML_TAG_IQHEF98QHEG98HQWEG98HG
