#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 
 int
 float
 bool
 double
 void
 wchar_t 
  
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    int age = 27;
    int petNumber = 3;
    int words = 30;
    float myHeight = 1.72f;
    float distance = 21.734f;
    float weight = 9.237f;
    bool alive = true;
    bool isCorrect = false;
    bool graduate = true;
    double a = 5.32652121;
    double c = 200.45843321;
    double e = 0.0000000012457;
  
    ignoreUnused(number, age, petNumber, words, myHeight, distance, weight, alive, isCorrect, graduate, a, e, c); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
 bool rentAHouse(int houseType, bool job = true)
 {
    ignoreUnused(houseType, job);
    return {};
 }
/*
 2)
 */
 float scienceClassNumbers(int students, bool approved, int tableNumber = 20)
 {
     ignoreUnused(students, approved, tableNumber);
     return {};
 }

/*
 3)
 */
int totalStudents(int studentsFirstGrade = 12, int studentsSecondGrade = 20)
{
    ignoreUnused(studentsFirstGrade, studentsSecondGrade);
    return {};
}
/*
 4)
 */
bool guilty(bool presentDuringMurder = false, bool alibi = true)
{
    ignoreUnused(presentDuringMurder, alibi);
    return {};
}
/*
 5)
 */
float populationPercentage(float married, float divorced)
{
    ignoreUnused(married, divorced);
    return {};
}
/*
 6)
 */
float travelStuff(double distance, double budget)
{
    ignoreUnused(distance, budget);
    return {};
}
/*
 7)
 */
bool bookACall(bool available = true, float time = 1)
{
    ignoreUnused(available, time);
    return {};
}
/*
 8)
 */
int petNumber(int cat = 2, int dog = 4, int hamster = 10)
{
    ignoreUnused(cat, dog, hamster);
    return {};
}
/*
 9)
 */
bool projectStats(bool partCompleted = true, bool review = false)
{
    ignoreUnused(partCompleted, review);
    return {};
}
/*
 10)
 */
bool weatherForecast(bool rain, bool sun, bool snow)
{
    ignoreUnused(rain, sun, snow);
    return{};
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto houseRented = rentAHouse(1, true);

    //2)
    auto scienceClass = scienceClassNumbers(20, true, 20);

    //3)
    auto students = totalStudents(20, 10);

    //4)
    auto judgement = guilty(true, false);

    //5)
    auto population = populationPercentage(2000, 1200);

    //6)
    auto travel = travelStuff(234.456, 1200.543);

    //7)
    auto call = bookACall(true, 3); 

    //8)
    auto pet = petNumber(3, 1, 2);

    //9)
    auto project = projectStats(true, true);

    //10)
    auto weather = weatherForecast(true, false, false);

    
    ignoreUnused(carRented, houseRented, scienceClass, students, judgement, population, travel, call, pet, project, weather);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
