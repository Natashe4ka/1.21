#ifndef cint0_class_hpp
#define cint0_class_hpp

#include "CIntN.hpp"

class CIntN0 : public CIntN{
public:
    using CIntN::CIntN;
    void print(const std::string& FileName){
        std::ofstream out(FileName, std::ios_base::app); //открываем и печатаем в конец
        if(!out){
            std::cout << "Error! Cannot open file!\n";
            exit(-1);
        }

        out << lenght_number << " " << sign << " ";
        for(int64_t i = 0; i < lenght_number; ++i){
            out << number[i];
        }
        out << "\n";
        out.close();
    }
    
};

#endif 
