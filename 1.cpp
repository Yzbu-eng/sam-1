#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main(int argc, char *argv[])
{ 
  int n,k,c;
  if (argc<=2){
    cout<<"Не заданы имена файлов"<<endl;
    return 0;
  }
  ifstream f(argv[1]);
  ofstream f1(argv[2]);
  if (!f.is_open()&f1.is_open()){
    cout<<"Ошибка открытия файлов"<<endl;
    return 0;
  }
  f>>n>>k;
  for (int i=0;i<n;i++){
    for (int j=0;(j<=i)&&(j<k) ;j++){
      f1<<"*";
    }
    f1<<endl;
  }
  
}