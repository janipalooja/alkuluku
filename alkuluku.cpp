#include <iostream>

using namespace std;

bool alkuluku(int);

int main() {
    
    // Syötetään kokonaisluvut väliltä 1-1000000 ja palautetaan tosi, jos luku on alkuluku, muuten epätosi.
    for(int i = 1; i < 1000001; i++){
        cout << i << " = " << boolalpha << alkuluku(i) << endl;
    }
    
    return 0;
}

bool alkuluku(int luku){

    if(luku <= 1){
        return false;
    }
        else if(luku <= 3){
            return true;
        }
            else if(luku % 2 == 0 || luku % 3 == 0){
                return false;
            }
    
    int i = 5;
    
    while(i * i <= luku){
        if(luku % i == 0 || luku % (i + 2) == 0){
            return false;
        }
        i = i + 6;
    }
    
    return true;
    
}
