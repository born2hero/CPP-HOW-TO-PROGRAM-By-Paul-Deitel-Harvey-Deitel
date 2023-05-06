// Account class that contains a name data member and member functions to set
// and get its value

#include<string>

class Account{
    std::string name;
    int balance{0};
    public:
        // Account constructor with two parameters
        Account(std::string accountName,int initialBalance):name(accountName){  // assign acoountName to data member name
            // validate that the initialBalance is greater than 0; if not
            // data member balance keeps its default initial value is 0
            if(initialBalance>0){
                balance=initialBalance; 
            }
        }

        // function that deposit (adds) only a valid amount to the balance
        void deposit(int depositAmount){
            if(depositAmount>0){
                balance+=depositAmount;
            }
        }

        int getBalance() const{
            return balance;
        }

        // // constructor initializes data member name with parameter accountName
        // explicit Account(std::string accountName):name{accountName}{
        //     // member initializer
        //     // empty body
        // }

        void setName(std::string accountName){
            name=accountName;
        }

        std::string getName() const{
            return name;
        }
};