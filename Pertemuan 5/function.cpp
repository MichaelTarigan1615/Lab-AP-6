#include <iostream>
using namespace std;

//Function -> Fungsi yang memiliki nilai kembalian

int tambah(int a, int b){
    return a + b;

}

int kurang(int a, int b){
return a - b;

}

int kali(int a, int b){
    return a * b;}

float bagi(int a, int b){
    //return (float)a/(float)b; //* Type Casting
    return static_cast<float>(a)/ static_cast<float>(b);
}

//Procedure -> Fungsi yang tidak memiliki nilai kembalian 
void sayHello(){
cout<<"Hello World"<<endl;
}

void garis(){
    cout<<"=================="<<endl;
}

void garis(){
    cout<<"******************"<<endl;
}

int main(){
    system("cls");
    sayHello();
    garis();
    bintang();
cout<<tambah(2,3)<<endl;
cout<<kurang(2,3)<<endl;
cout<<kali(2,3)<<endl;
cout<<bagi(2,3)<<endl;
return 0;
}