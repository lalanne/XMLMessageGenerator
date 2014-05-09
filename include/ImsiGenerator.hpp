#ifndef IMSI_GENERATOR_Q9ER8GH9Q8HERG9H8QERGH
#define IMSI_GENERATOR_Q9ER8GH9Q8HERG9H8QERGH

#include <string>
#include <vector>

class ImsiGenerator{
    public:
        const char* const imsi();

    private:
        std::vector<std::string> imsis{"272993733999123", 
                                    "272993733999105", 
                                    "272993799979995", 
                                    "272993733999905"};
};

#endif //IMSI_GENERATOR_Q9ER8GH9Q8HERG9H8QERGH
