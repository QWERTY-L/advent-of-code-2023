#include <bits/stdc++.h>


std::vector<int> max(3, 0); // Why manage memory ourselves

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

        // Yes, I just copied the input from part one
        std::string in; std::getline(std::cin, in);
        if(in == "END") {
            std::cout << out;
            return 0;
        }

        std::istringstream sin(in); // Turning a string into a stream probably is a sin

        std::string a; sin >> a >> a; // Ignore the Game [n]: (I lost the game)

        int n; std::string colour; // Very Canadian, I know
        // bool bad_string = false; // All strings are now good!

        max = {0, 0, 0};
        while(sin >> n >> colour) // Breaks when reaching eof
            max[ind(colour[0])] = std::max(max[ind(colour[0])], n);
        // No brackets: I know, so cool.

        out += max[0]*max[1]*max[2];
    }
} // Suprisingly, this also compiled and worked first try