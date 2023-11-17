#include <iostream>
using namespace std;

class library{
    private:
        int book;
        int shelf;
    public: 
        library(int b,int s){
            book = b;
            shelf = s;
        }
        library operator+(library const& obj){
            library temp(0,0);
            temp.book = obj.book + book;
            temp.shelf = obj.shelf + shelf;
            return temp;
        }
        
        void print(){
            cout <<"book:"<<book<<" shelf:"<<shelf<<endl;
        }
};

int main () {

    library taksim(1086, 56);
    library eyup(567, 23);
    
    library total = eyup + taksim;
    
    total.print();

  return 0;
}
