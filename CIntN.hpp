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
    std::string file_name;
public:
    CIntN (int);
    
    CIntN (int , std::string);
    
    void printf ();

    virtual void print() = 0;
    
    CIntN () ;
    
    char get_sign () const;
    int get_lenght () const;
    int* get_number () const ;
    
    void new_file_name (const std::string& FileName);
    
    void new_sign (char );
    
    void new_number (const int , const int* );
    
    void new_number (std::string );
    CIntN(const CIntN& ) ;
    
    virtual ~CIntN () ;
    
    void set_lenght(const int );

    
    CIntN& operator=(const CIntN& );

};


#endif


