/*
Sai Anirvinya Kolli
Arrays Cpp Lab 
5/5/26 
*/

#include <iostream>
#include <string>
#include <iomanip>

// Defining Functions
void tenIntegers();
void iceCreamStore();
void agesCalc();
void avgs(float scores[], int size); 
using std::cout, std::cin, std::string; 

int main() {

    // Calling functions
    tenIntegers();
    iceCreamStore();
    agesCalc();
    float scores[] = {85.8, 93.7, 76, 88.5, 100, 91.3}; 
    // Size
    int size = sizeof(scores)/sizeof(float);
    avgs(scores, size);
    return 0; 
}

void tenIntegers(){
    // Set up array 
    int nums[10] = {0,1,2,3,4,5,6,7,8,9};
    int size = sizeof(nums)/sizeof(int);
    int total = 0; 

    // Prints + get sum
    cout << "Array: " << '\n'; 
    for (int i : nums){
        cout<< " " << i;
        total += i;  
    }
    cout << '.' << "\n";

    cout << "Reversed Array: " << '\n'; 
    for (int i = size-1; i >= 0; i--){
        cout<< " " << i; 
    }
    cout << '.' << "\n";

    // print sum
    cout << "Total: " << total << '\n'; 
}

void iceCreamStore(){

    // collect sales
    string days[7] = {
            "Monday",
            "Tuesday",
            "Wednesday",
            "Thursday",
            "Friday",
            "Saturday",
            "Sunday"
        };
    int sales[7] = {}; 
    for (int i = 0; i < 7; i++) {
        int salesVal;
        cout << "Enter the sales for " << days[i] << ". \n"; 
        cin >>  salesVal;
        sales[i] = salesVal; 
    }

    // Check sales
    string cont = "yes"; 
    while (cont != "No"){
        int choice; 
        cout << "Which day do you want? (Monday = 1, Tuesday = 2, ....): "; 
        cin >> choice; 
        choice --; 
        
        if (choice >= 7 || choice < 0) {
            choice = 0; 
        } 

        cout << "Sales for " << days[choice] << " are " << sales[choice] << "\n";

        cout << "Do you wish to continue? " << "\n"; 
        cin >> cont; 
    }
}

void agesCalc(){

    int ages[20] = {}; 
    // Collect ages
    for (int i = 0; i < 20; i++) {
        int age;
        cout << "Enter the age for person " << i+1 << ". \n"; 
        cin >>  age;
        ages[i] = age; 
    }

    // Print those over 15
    int agesOver15 = 0; 
    for (int a : ages) {
        if (a > 15) {
            agesOver15 += 1; 
        }
    }
    cout << "Total people over 15 is " << agesOver15 << ". \n"; 
}

void avgs(float scores[], int size){
    // Score array
    

    // Sum
    float total = 0; 
    
    for (int i = 0; i < size; i++){
        total += scores[i]; 
    }

    cout << "Average is: " <<  std::fixed << std::setprecision(1) << total/size << ". \n";
}