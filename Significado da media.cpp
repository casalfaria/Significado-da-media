// Significado da media.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <vector>
#include "suporte.h"
#include "Quicksort.h"


int main(){

    std::vector<double> data = { 5,6,7,8,11,2,5,11,3,4,9,5,11,5,6,11,17,18,1,15,10,4,19,11,11 };
    
    printvector(data);
    std::cout << std::endl;

    //Cálculo da média - Funcao mean
    std::cout << std::endl<< "A media dos dados inseridos e " << mean(data) << std::endl;



   
    //Cálculo da moda - Funcao mode
    float M = mode(data);
    std::cout <<std::endl<< "A moda dos dados inseridos e " << M << std::endl;

    




    //Cálculo do percentil - Funcao percentile
    int p = 25;
    std::cout << std::endl << "O percentil  dos dados inseridos e " << percentile(data,p) << std::endl;
    

    //Cálculo da mediana - Funcao median
    std::cout << std::endl << "A mediana  dos dados inseridos e " << median(data) << std::endl;





    return 0;

    
}

