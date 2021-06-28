using namespace std;
#include <iostream>

class NumObj{
private:
    int num_priv;
public:
    int num_pub;
public:
    NumObj():num_priv(4),num_pub(2){}
    NumObj(int priv, int pub){
        this->num_pub=pub;
        this->num_priv=priv;
    }
};

int main() {
    cout<<endl<<"a)"<<endl;
    int num;

    cout<<"int num"<<endl<<endl;
    cout<<"cout num : "<<num<<endl;
    cout<<"cout &num : "<<&num<<endl;
    cout<<"*num is not valid"<<endl;

    cout<<endl<<"b)"<<endl;
    num = 42;

    cout<<"num = 42"<<endl<<endl;
    cout<<"cout num : "<<num<<endl;
    cout<<"cout &num : "<<&num<<endl;
    cout<<"*num is not valid"<<endl;

    cout<<endl<<"c)"<<endl;
    int *pointer;

    cout<<"int *pointer"<<endl<<endl;
    cout<<"cout pointer : "<<pointer<<endl;
    cout<<"cout *pointer : "<<*pointer<<endl;
    cout<<"cout &pointer : "<<&pointer<<endl;

    cout<<endl<<"d)"<<endl;
    *pointer=42;

    cout<<"*pointer=42"<<endl<<endl;
    cout<<"cout pointer : "<<pointer<<endl;
    cout<<"cout *pointer : "<<*pointer<<endl;
    cout<<"cout &pointer : "<<&pointer<<endl;

    cout<<endl<<"e)"<<endl;
    pointer++;

    cout<<"pointer++"<<endl<<endl;
    cout<<"cout pointer : "<<pointer<<endl;
    cout<<"cout *pointer : "<<*pointer<<endl;
    cout<<"cout &pointer : "<<&pointer<<endl;

    cout<<endl<<"f)"<<endl;
    pointer--;

    cout<<"pointer--"<<endl<<endl;
    cout<<"cout pointer : "<<pointer<<endl;
    cout<<"cout *pointer : "<<*pointer<<endl;
    cout<<"cout &pointer : "<<&pointer<<endl;

    cout<<endl<<"g)"<<endl;
    int copyNum = num;

    cout<<"int copyNum = num"<<endl<<endl;
    cout<<"cout copyNum : "<<copyNum<<endl;
    cout<<"cout &copyNum : "<<&copyNum<<endl;
    cout<<"cout &num : "<<&num<<endl;

    cout<<endl<<"h)"<<endl;
    int &copyRefNum = num;

    cout<<"int &copyRefNum = num"<<endl<<endl;
    cout<<"cout copyNum : "<<copyRefNum<<endl;
    cout<<"cout &copyNum : "<<&copyRefNum<<endl;
    cout<<"cout &num : "<<&num<<endl;
    cout<<"cout num : "<<num<<endl;

    cout<<endl<<"i)"<<endl;
    copyRefNum++;

    cout<<"copyRefNum++"<<endl<<endl;
    cout<<"cout copyNum : "<<copyRefNum<<endl;
    cout<<"cout &copyNum : "<<&copyRefNum<<endl;
    cout<<"cout &num : "<<&num<<endl;
    cout<<"cout num : "<<num<<endl;

    cout<<endl<<"j)"<<endl;
    NumObj def_numObj;
    NumObj par_numObj(5,6);
    cout<<&def_numObj<< endl;
    cout<<&par_numObj<<endl;
    cout<<def_numObj.num_pub<<endl;
    cout<<par_numObj.num_pub<<endl;
    NumObj copy_numObj=def_numObj;
    cout<<&copy_numObj<<endl;
    NumObj &refCopy_numObj=par_numObj;
    cout<<&refCopy_numObj<<endl;

    copy_numObj.num_pub=100;
    refCopy_numObj.num_pub=300;

    cout<<def_numObj.num_pub<<endl;
    cout<<par_numObj.num_pub<<endl;
    cout<<copy_numObj.num_pub<<endl;
    cout<<refCopy_numObj.num_pub<<endl;



    std::cout << endl<<"END OF THE CODE" << std::endl;
    return 0;
}
