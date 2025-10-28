#ifndef _CONFIG_HPP_
#define _CONFIG_HPP_
#include "Common.hpp"

class Config
{
    public:
        Config(std::string file);
        Config(const Config& other);
        ~Config(void);
    private:
        std::vector<t_server> servers;

        
};

#endif