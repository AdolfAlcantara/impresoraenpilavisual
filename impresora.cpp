#include "impresora.h"

impresora::impresora()
{
    head =0;
}

bool impresora::ordenes()
{
    return head==0;
}

void impresora::solicitar(string s)
{
    Orden *n = new Orden(s);
    if(head==0){
        head=n;
    }else{
        Orden *temp = head;
        while(temp->sig!=0){
            temp = temp->sig;
        }
        temp->sig=n;
    }
}

Orden* impresora::imprimir()
{
    if(ordenes()){
        return 0;
    }else{
        Orden *n = head;
        head = head->sig;
        return n;
    }
}

Orden* impresora::getPrimera()
{
    if(ordenes()){
        return 0;
    }else{
        Orden *n = head;
        head = head->sig;
        return n;
    }
}

impresora::~impresora()
{
    //dtor
}
