#include <iostream>
using namespace std;

class sub_vector{

public:
        void init(){
            top=0;
            capacity=0;
            data = nullptr;

        }
        void push(int x){
            if(top>=capacity){
                capacity++;
            int* p = new int[capacity];
            for(unsigned int i=0; i<top; i++){
                    p[i]=data[i];
                }
                p[top]=x;
                top++;
                delete[] data;
                data=p;
            }
            else{
                data[top] = x;
                top++;

            }


        }


    int pop_back(){
        if(top>0){
            top--;

            int* p= new int [capacity];
            for(unsigned int i=0; i<top; i++){
                p[i]=data[i];
            }
            delete[] data;
            data = p;

        }
        else{
            return 0;
        }
    }


    ~sub_vector(){
        delete[] data;
    }

    private:
        unsigned int top;
        unsigned int capacity;
        int* data;

}

;

