#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>
using namespace std;

struct Task {
  string name;
  bool completed;
  bool inprogress;
};


int main(){
  string name;
  vector<Task> tasks;


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
    cout << "4. Mark Task as Complete\n";
    cout << "5. Mark Task as In Progress\n";
    cout << "6. Exit\n";
    cout << "Enter your choice\n";
  
    cin >> choice;
    cin.ignore();

    if(choice == 1){
      cout << "Enter tasks (Type 'done' to stop adding): \n";
      while (true) {
      Task newTask;
      getline(cin, newTask.name);
      if (newTask.name == "done") break;
      newTask.completed = false;
      newTask.inprogress = false;
      tasks.push_back(newTask);
      }   

    }
    else if (choice == 2)
    {
      cout << "Your Tasks: \n";
      if (tasks.empty()){
        cout << "No tasks added yet. \n";
      } else {
        for (Task t: tasks) {
          if (t.completed == true){
            cout << "[✓]" << t.name << endl;
          }
          else if (t.inprogress == true){
            cout << "[-]" << t.name << endl;
          }
          else{
            cout << "[ ]" << t.name << endl;
          }
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
        for (Task t: tasks) {
          if (t.completed == true){
            cout << "[✓]" << t.name;
          }
          else if (t.inprogress == true){
            cout << "[-]" << t.name;
          }
          else{
            cout << "[ ]" << t.name;
          }
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
      int index;
      cout <<"Which task would you like to mark as complete: \n";
      cout << "Your Tasks: \n";
      if (tasks.empty()){
        cout << "No tasks added yet. \n";

      } 
      else {
        for (Task t: tasks) {
          if (t.completed == true){
            cout << "[✓]" << t.name << endl;
          }
          else if (t.inprogress == true){
            cout << "[-]" << t.name << endl;
          }
          else{
            cout << "[ ]" << t.name << endl;
          }
        }
    }

      cin >> index;
      cin.ignore();

      if(index < 1 || index > tasks.size()){
        cout << "Invalid task number.\n";
      }
      else {
        tasks[index - 1].completed = true;
        cout << "Task marked as complete\n";
      }
    }
    else if(choice == 5) {
      int index;
      cout <<"Which task would you like to mark in progress: \n";
      cout << "Your Tasks: \n";
      if (tasks.empty()){
        cout << "No tasks added yet. \n";

      } 
      else {
        for (Task t: tasks) {
          if (t.completed == true){
            cout << "[✓]" << t.name << endl;
          }
          else if (t.inprogress == true){
            cout << "[-]" << t.name << endl;
          }
          else{
            cout << "[ ]" << t.name << endl;
          }
        }
    }

      cin >> index;
      cin.ignore();

      if(index < 1 || index > tasks.size()){
        cout << "Invalid task number.\n";
      }
      else {
        tasks[index - 1].inprogress = true;
        cout << "Task marked in progress\n";
      }
    }

    else if(choice == 6) {
      cout << "Have a great day!";
      break;  
    } 
    else {
      cout << "Invalid Choice. Try again.\n";
    }
  }
  return 0;
}

