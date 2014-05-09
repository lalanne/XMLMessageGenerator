
#include "CallEventDetails_XmlTag.hpp"

#include <chrono>
#include <random>

using namespace tinyxml2;
using namespace std;

void CallEventDetails_XmlTag::mobileOriginatedCallGenerator(XMLDocument& doc, XMLElement* const callEventDetails){
    const unsigned int seed = chrono::system_clock::now().time_since_epoch().count();
    default_random_engine random_generator(seed);
    uniform_int_distribution<unsigned int> distribution(1, 3);
    const unsigned int random_index = distribution(random_generator);

    for(unsigned int i = 0; i<random_index; ++i) mobileOriginatedCall.create(doc, callEventDetails);
}

void CallEventDetails_XmlTag::create(XMLDocument& doc, XMLElement* const transferBatch){
    XMLElement* callEventDetails = doc.NewElement("callEventDetails");  
    mobileOriginatedCallGenerator(doc, callEventDetails);
    transferBatch->LinkEndChild(callEventDetails);
}





