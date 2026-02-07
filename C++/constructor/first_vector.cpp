#include<iostream>
#include<vector>
#include<limits>

class cal{
    private:
    int a;
    public:
    cal(int a = 0): a(a) {}
    int cube() const { return a * a * a; }
    friend void oddoreven(const cal& obj);
    
    

};
void oddoreven(const cal& obj) {
    if(obj.a % 2 == 0) {
        std::cout<<"Even number "<<std::endl;
    }
    else {
        std::cout<<"odd number "<<std::endl;
    }
}

void valid(int& x) {
    while(true) {
        std::cin>>x;
        if(std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

        }
        else {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            break;
        }
    }
}

int main() {
    std::vector<cal>A;
    int choice,x;
    
    do {
       std::cout<<"Enter what do you want to do "<<std::endl;
       std::cout<<"1) cube "<<std::endl;
       std::cout<<"2) find odd or even from same number"<<std::endl;
       std::cout<<"0) exit the program "<<std::endl;
       valid(choice);
       
       
       switch(choice) {
        case 1:
        std::cout<<"Enter a number "<<std::endl;
    valid(x);
    A.emplace_back(x);
        std::cout<<A.back().cube()<<std::endl;
        break;
        case 2:
        std::cout<<"Enter a number "<<std::endl;
    valid(x);
        A.emplace_back(x);
        oddoreven(A.back());
        break;
        case 0:
        std::cout<<"exiting program "<<std::endl;
        break;
        default: 
        std::cout<<"Ivalid response "<<std::endl;
        
     

 
    } 



} while (choice != 0);
  return 0;
}

