#include <iostream>
#include <cstdlib>
#include <conio.h>
#include "head.h"

using namespace std;

Queue Q;
bool check;
int n,pil;


int main()
{
    int pil;
    cout<<"========================"<<endl;
    cout<<"Queue using array"<<endl;
    cout<<"========================"<<endl;
    cout<<"1. Add "<<"2. Delete "<<"3. View "<<endl;
    cin>>pil;
    if(pil == 1){
        cout<<"Masukan Nilai : ";
        cin>>n;
        enqueue(Q,n);
    }else if(pil == 2){
        n = dequeue(Q);
    }else if(pil == 3){
        printInfo(Q);
        cout<<"Isi "<<CountElmQueue(Q);
    }

    getch();
    main();
    return 0;
}
