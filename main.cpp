#include <iostream>
#include <fstream>
using namespace std;
void horas(int arreglo []);
const int D=7;
int main() {
  int arreglo[D];
  horas(arreglo);
}
  void horas(int arreglo[]){
    int s,t;
    int o;
    ofstream archivo;
    archivo.open("SUELDO.txt",ios::app);
    for(int i=0;i<D;i++){
      cout<<"INGRESE LAS HORAS TRABAJADAS"<<" "<<"DIA->"<<i+1<<endl;
      cin>>arreglo[i];
      int aux=arreglo[i];
       s=s+aux;
       
    }
    cout<<"HORAS TRABAJADAS SEMANALMENTE: "<<endl;
    cout<<s<<endl;
    archivo<<"HORAS TRABAJADAS SEMANALMENTE: "<<s<<endl;
    int p=s-40;
  
    if(p>=40){
      cout<<"PAGO POR HORAS: "<<endl;
      cin>>o;
      t=s*(o*2);
      cout<<"SUELDO A LA SEMANA: "<<t<<"$"<<endl;
      archivo<<"PAGO POR HORAS: "<<o<<endl;
      archivo<<"SUELDO: "<<t<<"$"<<endl;
    }else{
      cout<<"PAGO POR HORAS: "<<endl;
      cin>>o;
      t=s*o;
      cout<<"SUELDO A LA SEMANA: "<<t<<"$"<<endl;
      archivo<<"PAGO POR HORAS: "<<o<<endl;
      archivo<<"SUELDO: "<<t<<"$"<<endl;
    }
    
    archivo.close();
  
  }