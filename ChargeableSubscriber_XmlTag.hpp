#ifndef CHARGEABLE_SUSCRIBER_XML_TAG_89ER7G9WG98GWE98HFWHE8F
#define CHARGEABLE_SUSCRIBER_XML_TAG_89ER7G9WG98GWE98HFWHE8F

#include "SimChargeableSubscriber_XmlTag.hpp"

#include "tinyxml2.h"

class ChargeableSubscriber_XmlTag{
    public:
        void create_chargeableSubscriber_XMLTAG(tinyxml2::XMLDocument& doc, tinyxml2::XMLElement* const basicCallInformation);

    private:
        SimChargeableSubscriber_XmlTag simChargeableSubscriber;

};

#endif //CHARGEABLE_SUSCRIBER_XML_TAG_89ER7G9WG98GWE98HFWHE8F
