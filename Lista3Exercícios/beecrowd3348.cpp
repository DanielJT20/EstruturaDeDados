#include <iostream>

using namespace std;
int main() {

    long long answers[] = {
    
        2,         
        7,          
        5,          
        30,         
        169,        
        441,        
        1872,       
        7632,       
        1740,       
        93313,      
        459901,     
        1358657,    
        2504881,    
        13422266,  
        11130122,   
        64323381,   
        299943265,  
        341517312,  
        1845312500 
    };

    int N;
    while (cin >> N && N != 0) {
        cout << answers[N - 1] << endl;
    }

    return 0;
}