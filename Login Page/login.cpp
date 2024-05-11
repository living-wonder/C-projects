#include<iostream>
#include<vector>
#include<string>
using namespace std;
class User{
    private:
    string username;
    string password;
    public:
    User(string username ,string password):username(username),password(password){}

    string getUserName() const{
        return username;
    
    }
    bool checkpassword(string inputPassword)const {
        if(password == inputPassword)
        {return true;}
        return false;
    }

};
class UserManager{
    private:
    vector<User> users;
    public:
    bool addUser(string username ,string password){
    for(const User &user:users){
        if(user.getUserName()==username){
            cout<<"Username Already Exists"<<endl;
            return false;
            }
    }
    users.push_back(User(username,password));
     cout<<"User Registered Successfully"<<endl;
    return true;
    }
    bool authenticateUser(string username ,string password){
         for(const User &user:users){
         if(user.getUserName()==username && user.checkpassword(password)){
            cout<<"Login Successfull"<<endl;
            return true;
        }
    }
    cout<<"Invalid Login";
    return false;

    }
};
int main() {
    UserManager userManager;
    int choice;

    do {
        cout << "Enter the choice" << endl;
        cout << "1. Login" << endl;
        cout << "2. Registration" << endl;
        cout << "3. Exit" << endl;
        cin >> choice;

        switch (choice) {
            case 1: {
                string username, password;
                cout << "Enter UserName: ";
                cin >> username;
                cout << "Enter Password: ";
                cin >> password;
                userManager.authenticateUser(username, password);
                break;
            }
            case 2: {
                string username, password;
                cout << "Enter UserName: ";
                cin >> username;
                cout << "Enter Password: ";
                cin >> password;
                userManager.addUser(username, password);
                break;
            }
            case 3:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
                break;
        }
    } while (choice != 3);

    return 0;
}
