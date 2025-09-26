
 #include<iostream>
 #include<vector>

 using namespace std;
 
 
 class A{
    private:
    int x,y;
    public:
    A(): x(0), y(0) {}
    A(int x,int y): x(x),y(y) {}
    A(const A& obj): x(obj.x),y(obj.y) {}

    void show(int index) const {
        cout<<"Object no: "<<index<<"\nX:"<<x<<"\nY:"<<y<<endl;
    }
    ~A() {}

 };

 int main() {
    vector<A> demo;
    int choice,x,y,index;
    char displaychoice;
    cout<<"Welcome to Abhinav's program for exploring different type of constructor\n"<<endl;
    do {
        cout<<"1)Use default constructor\n2)Use initialized constructor\n3)Use copy constructor\n4)Display objects\n5)Exist the program"<<endl;
        cin>>choice;
        switch(choice) {
            case 1:
            demo.emplace_back();
            break;
            case 2:
            cout<<"Enter two numbers"<<endl;
            cin>>x>>y;
            demo.emplace_back(x,y);
            break;
            case 3:
            if(demo.empty()) {
                cout<<"There is no object to copy from\n Please create a object first"<<endl;
                break;
                }
             cout<<"Please Enter the index of object that you want to copy from: "<<endl;
             cout<<"number must be between 0 to "<<demo.size()-1<<endl;
             cin>>index;
             if(index < 0 || index >= demo.size()) {
                cout<<"Index is out of bounds "<<endl;
                break;
             }
            demo.emplace_back(demo[index]);
            break;
            case 4:
            if(demo.empty()) {
                cout<<"There is nothing to show "<<endl;
        }
        else {
           
            cout<<"Display function active\nChoose 'A' for displaying all the object created so far "<<endl;
            cout<<"Choose 'B' for a specific object via index, number must be between 0 to "<<demo.size()-1<<endl;
            cin>>displaychoice;
            cin.ignore(1,'\n');
            displaychoice = toupper(displaychoice);
            if(displaychoice == 'A') {
                for(size_t i = 0;i <(int)demo.size();i++) {
                    demo[i].show(i);
                }
            }
            else if(displaychoice == 'B') {
            cout<<"Enter the index you want to see from 0 to "<<demo.size()-1<<endl;    
            cin>>index;
            demo[index].show(index);
            }
            else {
                cout<<"Invalid response "<<endl;
            }
        }
            break;

            case 5:
            cout<<"Exiting..."<<endl;
            break;
            default:
            cout<<"Invalid response try again"<<endl;
            break;
        }
   
     
     
    } while(choice != 5);

    return 0;


 }

