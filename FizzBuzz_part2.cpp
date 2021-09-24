//Maeve Baksa - FizzBuzz Part Two - 09.23.2021

#include <iostream>
#include <string>

using namespace std;

int main(){
  //create a testing number and the wastext boolean
  int testing_number;
  bool was_text;

  //create an integer that is the value in which the device prints fizz
  int fizzvalue;
  fizzvalue = 3;

  //same for buzz
  int buzzvalue;
  buzzvalue = 5;

  //same for wuzz
  int wuzzvalue;
  wuzzvalue = 7;

  //learning loops here: https://www.tutorialspoint.com/cplusplus/cpp_loop_types.htm
  for(; ;){
    
    //create an output string that will be appended to
    //the source for the appending code is:
    //https://www.cplusplus.com/reference/string/string/append/
    string output_string;
    output_string = "";

    //reset value for wastext.
    was_text = false;
  
    //check for which of the criteria is applied (or multiple), then append to the output string the appropriate word(s).

    if(testing_number%fizzvalue == 0){
      output_string.append("Fizz");
      was_text = true;
    }

    if (testing_number%buzzvalue == 0){
      output_string.append("Buzz");
      was_text = true;
    }

    if (testing_number%wuzzvalue == 0){
      output_string.append("Wuzz");
      was_text = true;
    }
    
    //this checks if neither the fizz, buzz or wuzz were used and then if not, append the original number
    //this means that I also had to convert the int to a string, or else errors insue
    //source:
    //https://www.javatpoint.com/cpp-int-to-string

    if (was_text == false){
      output_string.append(to_string(testing_number));
    }
    
    //print the finalized output string
    cout << output_string << "\n";

    testing_number++;
  }
}