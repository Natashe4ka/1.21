#ifndef cint1_class_hpp
#define cint1_class_hpp

#include "CIntN.hpp"

class CIntN1 : public CIntN{
public:
    using CIntN::CIntN;
    void print(const std::string& FileName){
        std::ofstream out(FileName, std::ios_base::app);
        if(!out){
            std::cout << "Error! Cannot open file!\n";
            exit(-1);
        }

        out << lenght_number << "\n" << sign << "\n";
        for(int64_t i = 0; i < lenght_number; ++i){
            out << number[i];
        }
        out << "\n";
        out.close();
    }
};

#endif
