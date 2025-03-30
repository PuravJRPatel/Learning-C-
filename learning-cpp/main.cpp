#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main(){
  string name;
  vector<string> tasks;
  
  
  cout << "Greetings! Please enter your name: ";
  getline(cin, name);
  cout << "Welcome " << name <<endl;
  
  int choice;
  string task;

  while(true){
    cout << "\n Menu: \n";
    cout << "1. Add Task \n";
    cout << "2. View Tasks\n";
    cout << "3. Delete Task\n";
    cout << "4. Exit\n";
    cout << "Enter your choice\n";
  
    cin >> choice;
    cin.ignore();

    if(choice == 1){
      cout << "Enter tasks (Type 'done' to stop adding): \n";
      while(true){
        getline(cin,task);
        if (task == "done") break;
        tasks.push_back(task);
      }
    }
    else if (choice == 2)
    {
      cout << "Your Tasks: \n";
      if (tasks.empty()){
        cout << "No tasks added yet. \n";
      } else {
        for (string t: tasks) {
          cout <<" - " << t << endl;
        }
      }
    }
    else if(choice == 3) {
      int index;
      cout <<"Which task would you like to delete: \n";
      cout << "Your Tasks: \n";
      if (tasks.empty()){
        cout << "No tasks added yet. \n";
      } 
      else {
        for (string t: tasks) {
          cout <<" - " << t << endl;
        }
    }

      cin >> index;
      cin.ignore();

      if(index < 1 || index > tasks.size()){
        cout << "Invalid task number.\n";
      }
      else{
      tasks.erase(tasks.begin() + index - 1);
      cout << "Task deleted successfully.\n";
    }
  }   
    
    else if(choice == 4) {
      cout << "Have a great day!";
      break;  
    } 
    else {
      cout << "Invalid Choice. Try again.\n";
    }
  }
  return 0;
}