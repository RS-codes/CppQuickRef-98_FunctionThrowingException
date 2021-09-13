//98. Function throwing exception

/*
NOTE: C++17 DOES NOT ALLOW DYNAMIC EXCEPTION SPECIFICATIONS- obsolete
*/

#include <iostream>
#include <stdexcept>
using namespace std;

//This feature is not supported in c++ 17 !!!
//obsolete
void foo() throw(int, char, runtime_error){
 //..
 throw 20;

 //throw 'c';

 //throw runtime_error("runtime error occured");

}

int main(){

    //..
    try{
        foo();
    }catch(int i){
        cout<<"integer type: "<<i<<endl;
    }
    catch(char c){
        cout<<"character type: "<<c<<endl;
    }
    catch(runtime_error e){
        cout<<"Error: "<<e.what()<<endl;
    }

    return 0;
}


//This feature is not supported in c++ 17 !!!
