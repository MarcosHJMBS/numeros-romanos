#include <iostream>
#include <string>

enum class Roman {
    I = 1,
    V = 5,
    X = 10,
    L = 50,
    C = 100,
    D = 500,
    M = 1000   
};

int romanToInt(char romanChar) {
    switch(romanChar) {
        case 'M' : {return 1000;}
        case 'D' : {return 500;}
        case 'C' : {return 100;}
        case 'L' : {return 50;}
        case 'X' : {return 10;}
        case 'V' : {return 5;}
        case 'I' : {return 1;}
    }
}

int solution(std::string roman) {
    int decNumber = 0;

    for(int i = 0; i < roman.size(); i++) {

        int currentNumber = romanToInt(roman[i]);

        if(i == roman.size() - 1) {
            decNumber += currentNumber;
        }else{
            if(currentNumber >= romanToInt(roman[i + 1])) {
                decNumber += currentNumber;
            }else {
                decNumber -= currentNumber;
            }
        }

    }
    return decNumber;
}