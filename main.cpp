#include "head.hpp"
#include "AT.hpp"

int main(){
    
   if (!AutoTest() ) {
        std::cout << "Autotests failed!\n";
        return 0;
    }
    
    std::string file;
    std::cout <<"Enter File Name:\n";
    std::cin >> file;
    
    std::ifstream inp(file);
    if(!inp){
        std::cout << "Error! Cannot open file!\n";
        return -1;
    }

    size_t count = 0; //кол-во строк в файле

    std::string line;
    while(getline(inp, line)) ++count;
    inp.close();

    //std::vector<std::string> file_names; //имена файлов для вывода
    CIntN** arr = new CIntN*[count]; //массив указателей класса

    inp.open(file);
    size_t i = 0;
    while(!inp.eof()){
        bool I;
        inp >> I;
        std::string FileName;
        inp >> FileName;
        std::string num;
        inp >> num;
        if(I == 0){
            if (i < count) {
                int l =static_cast<int>(num.size());
                if (num[0]=='-') l--;
                arr[i] = new CIntN0(l, num);
                arr[i]->new_file_name(FileName);
            }
        }
        else
        {
            if (i < count) {
                int l =static_cast<int>(num.size());
                if (num[0]=='-') l--;
                arr[i] = new CIntN1(l, num);
                arr[i]->new_file_name(FileName);
            }
        }
       // file_names.push_back(FileName);
        ++i;
    }
    inp.close();
    
    /*CIntN0 a(2, "45");

    CIntN1 b(3, "100");

    CIntN c = a  + b;
    c.print();
    */

    for(size_t j = 0; j < count; ++j){
        arr[j]->print();
    }
    
    for(size_t j = 0; j < count; ++j){
        delete arr[j];
    }
    delete[] arr;
    

    return 0;
}
