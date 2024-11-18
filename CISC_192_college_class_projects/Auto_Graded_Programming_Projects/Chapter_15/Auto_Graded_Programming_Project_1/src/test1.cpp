// Write your code below
class Person {
    private:
        string lastName, firstName, email, phone;
    public:
        Person(): lastName(""), firstName(""), email(""), phone(""){};
        Person(string lastName1, string firstName1, string email1, string phone1){
            lastName = lastName1;
            firstName=firstName1;
            email=email1;
            phone=phone1;
        };
        void setLastName(string lastName1){
            lastName = lastName1;
        };
        void setFirstName(string firstName1){
            firstName = firstName1;
        };
        void setEmail(string email1){
            email = email1;
        };
        void setPhone(string phone1){
            phone = phone1;
        };
        string getLastName(){return lastName;};
        string getFirstName(){return firstName;};
        string getEmail(){return email;};
        string getPhone(){return phone;};
};
class Customer: public Person {
    private:
        int customerNumber;
        bool emailList;
    public:
        Customer(): Person() {
            customerNumber = 0;
            emailList = false;
        };
        Customer(string lastName, string firstName, string email,
         string phone, int customerNumber1, bool emailList1): Person(lastName, firstName, email, phone){
             customerNumber = customerNumber1;
             emailList = emailList1;
        };
        void setCustomerNumber(int customerNumber1){
            customerNumber = customerNumber1;
        };
        void setEmailList(bool emailList1){
            emailList = emailList1;
        };
        int getCustomerNumber(){return customerNumber;};
        bool getEmailList(){return emailList;};
};
