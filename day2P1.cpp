#include <bits/stdc++.h>
// Remind me why I am using C++, please

const int max[3] = {12, 13, 14}; // Yes, I know C-style arrays are bad

int ind(char in){ // convert rgb to indices
    switch (in)
    {
        case 'r':
            return 0;
        case 'g':
            return 1;
        case 'b':
            return 2;
    }
}

int main(){
    int counter = 0;
    int out = 0;
    
    while(true){
        counter++;

        // Input
        std::string in; std::getline(std::cin, in);
        if(in == "END") {
            std::cout << out;
            return 0;
        }

        std::istringstream sin(in); // Turning a string into a stream probably is a sin

        std::string a; sin >> a >> a; // Ignore the Game [n]:

        int n; std::string colour; // Very Canadian, I know
        bool bad_string = false;

        while(sin >> n >> colour){ // Breaks when reaching eof
            if(n > max[ind(colour[0])]){
                bad_string = true;
                break;
            }
        } // I could've omitted this bracket pair

        out += counter*(!bad_string);
    }
} // Suprisingly, this compiled and worked first try