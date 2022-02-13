#ifndef cint_class_hpp
#define cint_class_hpp

#include <iostream>
#include <string>
#include <fstream>

class CIntN {
protected:
    int* number;
    char sign;
    int lenght_number;
public:
    CIntN (int);
    
    CIntN (int , std::string);
    
    void print ();

    virtual void print(const std::string& FileName);
    
    CIntN () ;
    
    char get_sign () ;
    int get_lenght () ;
    int* get_number () const ;
    
    void new_sign (char );
    
    void new_number (const int , const int* );
    
    void new_number (std::string );
    CIntN(const CIntN& ) ;
    
    virtual ~CIntN () ;
    
    void set_lenght(const int );

    
    CIntN& operator=(const CIntN& );

};


#endif


