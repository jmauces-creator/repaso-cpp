#include <iostream>

void intercambiar1 (int a, int b){ //por valor

    int t = a; 
    a = b;
    b = t;
    

}

void intercambiar2 (int* a, int* b){ //por puntero

    int t = *a; 
    *a = *b;
    *b = t;
    
    
    
    

}
void intercambiar3 (int& a, int& b){ //por referencia

    int t = a;
    a = b;
    b = t;
    

} 

