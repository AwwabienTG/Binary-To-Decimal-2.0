#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;

int power_simple(int base, int power){

  
    if (power == 0){
        return 1;
    }

    int sum = base;
    for(int i = 1; i < power; i++){
        sum = sum * base;
    }

    return sum;

}


int BinaryToDecimal(){

    string input;
    int sum;
    cout << "Input the Binary Number you want to convert: " << endl;
    cin >> input;

    for(int i = 0; i < floor(input.size()/2); i++){
        char temp = input[i];
        input[i] = input[input.size() - i - 1];
        input[input.size() - i - 1] = temp;
    }



    for(int i = 0; i <= input.size(); i++){
        if (input[i] == '1'){
            sum+=power_simple(2, i);
        }
    }

    return sum;

}

int main(){ 

    cout << BinaryToDecimal() << endl;

}



