
#include <iostream>

class Student{
    int age;
public:
    std::string name;
    //constructor:
    Student(std::string a, int m){ name = a;
        age =m;
    }
    Student(){std::cout <<  "Object was created!"<< std::endl;
        age=0;
        name = "Unknown!";
    }
    Student(int n){std::cout <<  "Object was created!"<< std::endl;
        age=n;
        name = "Unknown!";
    }
    void show(){
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
    void setage(int n)
    {
        if (n>=0&& n<130) age= n;
        else std:: cout<< " Not proper age!";
    }
};
int main() {
    Student  s1 ("Zahra", 43);
    s1.setage(23);
    s1.show();
    return 0;
}
// Important notes:
//1) You can have many or no! Constructors!
//2) They are useful and speed up coding!
// 3) Constructors are function but never return smt. Their's name is same as the name of the class.
//You can access (change) to the private data members using constructors!
