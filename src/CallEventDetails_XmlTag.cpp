
#include "CallEventDetails_XmlTag.hpp"

#include <chrono>
#include <random>

using namespace tinyxml2;
using namespace std;

unsigned int CallEventDetails_XmlTag::random_number() const{
    const unsigned int seed = chrono::system_clock::now().time_since_epoch().count();
    default_random_engine random_generator(seed);
    uniform_int_distribution<unsigned int> distribution(1, 3);
    return distribution(random_generator);
}

void CallEventDetails_XmlTag::generate_random_number_of_mobile_originated_call_sections(XMLDocument& doc, 
                                                                                        XMLElement* const callEventDetails){
    unsigned int random = random_number();
    for(unsigned int i = 0; i<random; ++i) mobileOriginatedCall.create(doc, callEventDetails);
}

void CallEventDetails_XmlTag::create(XMLDocument& doc, XMLElement* const transferBatch){
    XMLElement* callEventDetails = doc.NewElement("callEventDetails");  
    generate_random_number_of_mobile_originated_call_sections(doc, callEventDetails);
    transferBatch->LinkEndChild(callEventDetails);
}





