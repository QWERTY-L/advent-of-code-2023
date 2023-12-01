#include <bits/stdc++.h>

int main(){
    int out = 0;
    while(true){
        std::string in;
        std::cin >> in;

        if(in == "END"){
            std::cout << out; return 0;
        }

        for(int i = 0; i < in.size(); i++){
            if(in[i] - '0' >= 0 && in[i] - '0' <= 9){
                out += 10* (int)(in[i] - '0');
                break;
            }
        }
        for(int i = in.size() - 1; i >= 0; i--){
            if(in[i] - '0' >= 0 && in[i] - '0' <= 9){
                out += (int)(in[i] - '0');
                break;
            }
        }
        
    }

    return 0;
}