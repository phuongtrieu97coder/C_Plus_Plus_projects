//Write your class definition here
#include <iostream>

class Artifact {
    private:
        std::string name, category;
        int age;
    public:
        Artifact(): name("Unknown"), category("None"), age(0){};
        Artifact(std::string name1, std::string category1, int age1){
            name = name1;
            category = category1;
            age = age1;
        };
        void setName(std::string name1){
            name = name1;
        };
        void setCategory(std::string category1){
            category = category1;
        };
        void setAge(int age1){
            age = age1;
        };
        std::string getName(){
            return name;
        };
        std::string getCategory(){
            return category;
        };
        int getAge(){
            return age;
        };
        friend std::ostream& operator<<(std::ostream &out, const Artifact &artifact) { 
            out << "Name: " << artifact.name << ", Category: " << 
            artifact.category << ", Age: " << artifact.age << " years"; 
            return out;
        };

        
        
};
#ifndef __RUN_TESTS__
// If you remove the IFNDEF or ENDIF macro, your tests will fail.
int main() 
{
    // Write your main here.
    Artifact artifact1;

    std::string name;
    std::cout << "Enter artifact's name: ";
    getline(std::cin, name);
    artifact1.setName(name);

    std::string category;
    std::cout << "Enter artifact's category: ";
    getline(std::cin, category);
    artifact1.setCategory(category);

    int age;
    std::cout << "Enter artifact's age: ";
    std::cin>> age;
    std::cin.ignore();
    artifact1.setAge(age);

    std::cout << std::endl;

    std::cout << "Artifact Details:"<<std::endl;
    std::cout <<artifact1;

    std::cout << std::endl << std::endl;

    std::cout << "Update artifact's category: ";
    getline(std::cin, category);
    artifact1.setCategory(category);

    std::cout << "Updated Artifact Details:"<<std::endl;
    std::cout <<artifact1;

    return 0;
}

#endif // __RUN_TESTS__
