//
//  Runner.cpp
//  Project 5 - Templates
//
//  Created by Nathenael Dereb
//

#ifndef RUNNER_CPP
#define RUNNER_CPP

#include <cstdlib>
#include "Vector.cpp"
using namespace std;


template <class T>
class Runner {
public:
    // Name: Default Constructor
    // Precondition: None
    // Postcondition: Initiates state/environment
    Runner(Vector<T>*, Vector<T>*);
    
    // Name: mainMenu
    // Desc: Main Menu
    // Precondition: Existing Vectors
    // Postcondition: Handles various menu commands
    int mainMenu();
    
private:
    Vector<T> m_vector1;
    Vector<T> m_vector2;
};


// **** Add class definition below ****

//Runner Constructor
template<class T>
Runner<T>::Runner(Vector<T> *vector1, Vector<T> *vector2) {
    m_vector1 = vector1;
    m_vector2 = vector2;
    int userInput;
    do{
        userInput = mainMenu();
        if (userInput > 0 && userInput < 10){
            switch (userInput) {
                //Display
                case 1:
                    cout << "Vector 1: ";
                    m_vector1.Display();
                    cout << "Vector 2: ";
                    m_vector2.Display();
                    break;
                //Comparison <
                case 2:
                    cout << "Vector 1 < Vector 2: ";
                    Vector<char> *lessThanPlaceholder;
                    lessThanPlaceholder = m_vector1.operator<(m_vector2);
                    lessThanPlaceholder->Display();
                    //Since new vector is made in operator, it must be deleted
                    delete lessThanPlaceholder;
                    break;
                //Comparison ==
                case 3:
                    cout << "Vector 1 == Vector 2: ";
                    Vector<char> *comparisonPlaceholder;
                    comparisonPlaceholder = m_vector1.operator==(m_vector2);
                    comparisonPlaceholder->Display();
                    //Since new vector is made in operator, it must be deleted
                    delete comparisonPlaceholder;
                    break;
                //Addition +
                case 4:
                    cout << "Vector 1 + Vector 2: ";
                    Vector<T> *sumPlaceholder;
                    sumPlaceholder = m_vector1.operator+(m_vector2);
                    sumPlaceholder->Display();
                    //Since new vector is made in operator, it must be deleted
                    delete sumPlaceholder;
                    break;
                //Multiply *
                case 5:
                    cout << "Vector 1 * Vector 2: ";
                    Vector<T> *productPlaceholder;
                    productPlaceholder = m_vector1.operator*(m_vector2);
                    productPlaceholder->Display();
                    //Since new vector is made in operator, it must be deleted
                    delete productPlaceholder;
                    break;
                //Median
                case 6:
                    cout << "Vector 1: " << m_vector1.Median() << endl;
                    cout << "Vector 2: " << m_vector2.Median() << endl;
                    break;
                //Mean
                case 7:
                    cout << "Vector 1 mean: " << m_vector1.Mean() << endl;
                    cout << "Vector 2 mean: " << m_vector2.Mean() << endl;
                    break;
                //Standard Dev
                case 8:
                    cout << "Vector 1 std. dev: " << m_vector1.StDev() << endl;
                    cout << "Vector 2 std. dev: " << m_vector2.StDev() << endl;
                    break;
                //Exit
                case 9:
                    break;
                default:
                    cout << "Unknown Entry!" << endl;
                    break;
            }
        }
    } while (userInput != 9);
}


//Main Menu function used to print options
template<class T>
int Runner<T>::mainMenu() {
    int userInput = 0;
    do{
        cout << "Choose an option: " << endl;
        cout << "1. Display Vectors" << endl;
        cout << "2. Vector comparison (<)" << endl;
        cout << "3. Vector comparison (==)" << endl;
        cout << "4. Vector addition" << endl;
        cout << "5. Vector multiplication" << endl;
        cout << "6. Compute median" << endl;
        cout << "7. Compute mean" << endl;
        cout << "8. Compute Standard Derivation" << endl;
        cout << "9. Exit" << endl;
        cin >> userInput;
    } while (userInput < 1 || userInput > 9);
    return userInput;
}

#endif /* Runner_h */


