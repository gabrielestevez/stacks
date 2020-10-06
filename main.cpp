#include <iostream>
using namespace std;
struct vox{
    string nombre;
    int exp;
    string fecha;
    vox *sgt;
};
vox *peek = NULL;
void push(string x, int y, string z){
    vox *nvox = new vox;
    nvox->nombre=x,nvox->sgt=peek;
    nvox->exp=y,nvox->sgt=peek;
    nvox->fecha,nvox->sgt=peek;
    peek=nvox;
    //nvox->nombre="Gabriel";
}
void pop(){
    if(peek==NULL)
        cout<<"Nada que imprimir, Stack vacia \n";
    else
    peek=peek->sgt;
}
void prt(){
     vox *aux = peek;
     if(aux==NULL)
         cout<<"Nada que imprimir, Stack vacia\n";
     else
         while(aux!=NULL){
             cout<<aux->nombre<<" -> ";
             aux=aux->sgt;
         }
}
int main(){
    int op;
    string x;
    int y;
    string z;
    do{
        cout<<"\n(1) Push    (2) Pop    (3) Print   (4) Salir \n ";
        cout<<"\n Elija ppcion  ?: ",cin>>op;
        switch (op){
            case 1:
                cout<<"Ingresa el valor a insertar en el Stack : ??  ",cin>>x;
                push(x,y,z);
                break;
            case 2:
                cout<<"Eliminando ..... : ";
                pop();
                break;
            case 3:
                cout<<"Imprimiendo..... : ";
                prt();
                break;
            case 4:
                cout<<"------Bye--------";
        }
    }while(op!=4);
}

