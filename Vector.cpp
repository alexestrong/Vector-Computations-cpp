//
//  Vector.cpp
//  Project 5 - Templates
//
//  Created by Nathenael Dereb on 2/8/21.
//


#ifndef VECTOR_CPP
#define VECTOR_CPP

#include <string>
#include <fstream>
#include <iostream>
#include <cmath>

using namespace std;

template <class T> 
struct Node {
public:
  Node(T value) {
    m_value = value;
    next = nullptr;
  }
  
  Node(T value, Node* _next) {
    m_value = value;
    next = _next;
  }
  
  T getValue() {
    return m_value;
  }
  
  Node<T>* getNextNode() {
    return next;
  }
  
  void setNextNode(Node<T>* newNode) {
    next = newNode;
  }
  
private:
  T m_value;
  Node<T>* next;
};


template <class T>
class Vector {
public:
  // Name: Default Constructor
  // Precondition: None (Must be templated)
  // Postcondition: Creates a vector using a linked list
  Vector();
   
  // Name: Destructor
  // Desc: Frees memory
  // Precondition: Existing Vector
  // Postcondition: Destructs existing Vector
  ~Vector();  


  // Name: Copy Constructor
  // Desc: Copies an existing vector
  // Precondition: Existing Vector
  // Postcondition: Two identical vectors (in separate memory spaces)
  // Hint: Utilize overloaded [] operator
  Vector (Vector<T>* const& source);
  
  // Name: Overloaded Assignment operator
  // Desc: Assingns a vector
  // Precondition: Existing Vector
  // Postcondition: Assigns a vector
  // Hint: Utilize overloaded [] operator
  Vector<T>* operator=(Vector<T>* source);  


  // Name: Overloaded [] operator
  // Desc: to retrive use [indx]
  // Precondition: Existing Vector
  // Postcondition: Returns the value of the element at the given index
  T operator[](int indx);
    
  // Name: Insert
  // Desc: insert a node to the end of the vector
  // Precondition: Existing Vector
  // Postcondition: A vector with the newly added value
  void Insert(T);  
    
  // Name: SortedInsert
  // Desc: Inserts a node into the vector at it's correct position (sorted ascendingly)
  // Precondition: Existing Vector
  // Postcondition: sorted vector (low to high)
  void SortedInsert(T);
      
  // Name: Remove
  // Desc: removes a node from the vector
  // Precondition: Existing Vector
  // Postcondition: A vector that holds the results of the vectors added
  void Remove(int indx);
    
  // Name: Overloaded + operator | Vector Addition
  // Desc: Adds two vectors and returns the result
  // Precondition: Existing Vector, vectors can be of different size
  // Postcondition: A vector that holds the results of the vectors added
  Vector<T>* operator+(Vector<T>& source);
    
  // Name: Overloaded * operator | Vector Multiplication
  // Desc: Multiplys two vectors and returns the result
  // Precondition: Existing Vector, vectors can be of different size
  // Postcondition: returns a vector that holds the results of the vectors multiplied
  Vector<T>* operator*(Vector<T>& other);
    
  // Name: Overloaded < operator | Vector Comparision
  // Desc: Compares two vectors [using the < operator] and returns the result
  // Precondition: Existing Vector -> vectors need to be of the same size
  // Postcondition: returns a vector that holds the boolean char (T or F) value of each node comparison
  Vector<char>* operator<(Vector<T>& other);
      
  // Name: Overloaded == operator | Vector Comparision
  // Desc: Compares two vectors [using the == operator] and returns the result
  // Precondition: Existing Vector, vectors need to be of the same size
  // Postcondition: returns a vector that holds the boolean char (T or F) value of each node comparison
  Vector<char>* operator==(Vector<T>& other);
    
  // Name: Size
  // Desc: number of nodes in Vector
  // Precondition: Existing Vector
  // Postcondition: returns the size of the vector
  int Size();  
    
  // Name: Display
  // Desc: displays the contents of the vector
  // Precondition: Existing Vector
  // Postcondition: prints to console the contents of Vector
  void Display();
    
  // Name: median
  // Desc: Computes the median of the vector
  // Precondition: Existing Vector
  // Postcondition: returns the median value
  float Median();  
    
  // Name: Mean
  // Desc: Computes the mean of the vector
  // Precondition: Existing Vector
  // Postcondition: returns the mean value
  float Mean();
    
  // Name: StDev
  // Desc: Computes the standard derivation of the vector
  // Precondition: Existing Vector
  // Postcondition: returns the standard derivation
  float StDev();
      
private:
    Node<T>* m_head;
};

/////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////

// **** Add class definition below ****


//Constructor
template<class T>
Vector<T>::Vector() {
    m_head = nullptr;
}

//Destructor
template <class T>
Vector<T>::~Vector(){
    Node<T> *next;
    Node<T> *current = m_head;

    //Goes through linked list deleting every node
    while(current != nullptr){
        next = current->getNextNode();
        delete current;
        current = next;
    }
}

//Copy constructor
template <class T>
Vector<T>::Vector(Vector<T>* const& source) {
    Node<T> *curr = source->m_head;

    //For when source linked list is empty
    if (source->m_head == nullptr){
        m_head = nullptr;
    }
    //For when source linked list has data in it
    else{
        //Traverses and makes a deep copy of data
        while(curr != nullptr){
            Insert(curr->getValue());
            curr = curr->getNextNode();
        }
    }
}


//Overloaded assignment operator
template <class T>
Vector<T> *Vector<T>::operator=(Vector<T> *source) {
    //Makes sure they are not pointing to the same memory
    if (this != source){
        Node<T> *curr = m_head;
        //Traverse, deletes old data in linked list
        while(curr != nullptr){
            m_head = m_head->getNextNode();
            delete curr;
            curr = m_head;
        }
        curr = source->m_head;
        //Traverse, but now this time puts in copied over data
        while(curr != nullptr){
            this->Insert(curr->getValue());
            curr = curr->getNextNode();
        }
    }
    //Returns new vector
    return this;
}



//Overloaded Closed Bracket operator
template<class T>
T Vector<T>::operator[](int indx) {
    Node<T> *temp = m_head;
    int counter = 0;

    //Traverses until it stops at the node we want to look at
    while(counter != indx && temp != nullptr){
        temp = temp->getNextNode();
        counter++;
    }
    //Returns the data of the node we wanted to look at
    return temp->getValue();
}



//Insert function (standard non-sorting insert from head to tail)
template<class T>
void Vector<T>::Insert(T data) {
    Node<T> *curr;
    Node<T> *daNode = new Node<T>(data, nullptr);

    //Makes if current linked list is empty, will set its head
    if(m_head == nullptr){
        m_head = daNode;
    }
    //Otherwise will add newly generated node to the end of the list
    else{
        curr = m_head;
        while(curr->getNextNode() != nullptr){
            curr = curr->getNextNode();
        }
        curr->setNextNode(daNode);
    }
}


//Sorted insert function (Sorts from smallest to largest values)
template <class T>
void Vector<T>::SortedInsert(T data) {
    Node<T> *curr = m_head;
    Node<T> *prev = nullptr;
    Node<T> *insertedNode = new Node<T>(data);

    //Looks for if input data is less than whats already in the list
    while (curr != nullptr && curr->getValue() < insertedNode->getValue()){
        prev = curr;
        curr = curr->getNextNode();
    }
    //If found in the middle will insert
    insertedNode->setNextNode(curr);
    //If found at the end will insert at end and make its next point to nullptr
    if (prev == nullptr){
        m_head = insertedNode;
    }else{
        prev->setNextNode(insertedNode);
    }
}


//Remove function (not ever used) but will remove node at where the index is specified
template<class T>
void Vector<T>::Remove(int indx) {
    Node<T> previous = nullptr;
    Node<T> curr = m_head;
    Node<T> next;
    int counter = 0;

    //Makes sure linked list isn't empty
    if(curr == nullptr){
        cout << "Empty linked list" << endl;
    }else{
        //Traverses to the point at which node will be removed
        while((counter < indx) && (curr != nullptr)){
            previous = curr;
            curr = curr.getNextNode();
            counter++;
        }
        next = curr.getNextNode();
        delete curr;
        previous.setNextNode(next);
    }
}


//Overloaded + Operator
template<class T>
Vector<T> *Vector<T>::operator+(Vector<T> &source) {
    Vector<T> *AdditionVector = new Vector<T>;
    Node<T> *currNode = m_head;
    Node<T> *sourceCurrNode = source.m_head;
    int sizeOfVector = Size();
    T valueOne;
    T valueTwo;

    for(int i = 0; i < sizeOfVector; i++){
        //Grabs current value
        valueOne = currNode->getValue();
        valueTwo = sourceCurrNode->getValue();
        //Traverses
        currNode = currNode->getNextNode();
        sourceCurrNode = sourceCurrNode->getNextNode();
        //Stores the sum inside of new vector
        AdditionVector->Insert(valueOne + valueTwo);
    }
    //Returns new vector that contains the sums
    return AdditionVector;
}


//Overloaded * Operator
template<class T>
Vector<T> *Vector<T>::operator*(Vector<T> &other) {
    Vector<T> *MultiplicationVector = new Vector<T>;
    Node<T> *currNode = m_head;
    Node<T> *sourceCurrNode = other.m_head;
    int sizeOfVector = Size();
    T valueOne;
    T valueTwo;

    for(int i = 0; i < sizeOfVector; i++){
        //Grabs current value
        valueOne = currNode->getValue();
        valueTwo = sourceCurrNode->getValue();
        //Traverses
        currNode = currNode->getNextNode();
        sourceCurrNode = sourceCurrNode->getNextNode();
        //Stores the product inside of new vector
        MultiplicationVector->Insert(valueOne * valueTwo);
    }
    //Returns new vector that contains the products
    return MultiplicationVector;
}


//Overloaded < Comparison Operator
template<class T>
Vector<char> *Vector<T>::operator<(Vector<T> &other) {
    Vector<char> *LessThanVector = new Vector<char>;
    Node<T> *currNode = m_head;
    Node<T> *sourceCurrNode = other.m_head;
    T valueOne;
    T valueTwo;
    char trueChar = 'T';
    char falseChar = 'F';
    int sizeOfVector = Size();

    for(int i = 0; i < sizeOfVector; i++){
        //Grabs values
        valueOne = currNode->getValue();
        valueTwo = sourceCurrNode->getValue();
        //Traverses
        currNode = currNode->getNextNode();
        sourceCurrNode = sourceCurrNode->getNextNode();
        //Inserts T or F inside new vector
        if(valueOne < valueTwo) {
            LessThanVector->Insert(trueChar);
        }else{
            LessThanVector->Insert(falseChar);
        }
    }
    return LessThanVector;
}


//Overloaded == Comparison Operator
template<class T>
Vector<char> *Vector<T>::operator==(Vector<T> &other) {
    Vector<char> *ComparisonVector = new Vector<char>;
    Node<T> *currNode = m_head;
    Node<T> *sourceCurrNode = other.m_head;
    T valueOne;
    T valueTwo;
    char trueChar = 'T';
    char falseChar = 'F';
    int sizeOfVector = Size();

    for(int i = 0; i < sizeOfVector; i++){
        //Grabs values
        valueOne = currNode->getValue();
        valueTwo = sourceCurrNode->getValue();
        //Traverses
        currNode = currNode->getNextNode();
        sourceCurrNode = sourceCurrNode->getNextNode();
        //Inserts
        if(valueOne == valueTwo) {
            ComparisonVector->Insert(trueChar);
        }else{
            ComparisonVector->Insert(falseChar);
        }
    }
    return ComparisonVector;
}


//Size Function
template<class T>
int Vector<T>::Size() {
    Node<T> *currNode = m_head;
    int counter = 0;

    //If linked list empty, size will always be 0
    if(currNode == nullptr){
        counter = 0;
    }else{
        //Traverses incrementing the counter with each pass until node is null
        while(currNode != nullptr){
            currNode = currNode->getNextNode();
            counter++;
        }
    }
    //Returns number of nodes
    return counter;
}


//Display function
template<class T>
void Vector<T>::Display() {
    Node<T> *currNode = m_head;
    T currVal = 0;

    while(currNode != nullptr){
        //Grabs value
        currVal = currNode->getValue();
        //Prints
        cout << currVal << ", ";
        //Traverses
        currNode = currNode->getNextNode();
    }
    cout << endl;
}


//Median Function
template<class T>
float Vector<T>::Median() {
    float medianVal;
    //When size is odd, will navigate to index with the middle most number
    if (this->Size() % 2 == 1) {
        medianVal = this->operator[]((this->Size() - 1) / 2);
    }
    //When size is even, will calculate median based on the two middle most numbers sum, divided by two
    else{
        medianVal = (this->operator[]((this->Size()/2)+1) + this->operator[](this->Size()/2))/2;
    }
    return medianVal;
}


//Mean Function
template<class T>
float Vector<T>::Mean() {
    Node<T> *currNode = m_head;
    int sizeOfVector = Size();
    T totalVal = 0;
    float meanVal;

    for(int i = 0; i < sizeOfVector; i++){
        //Adds value to total
        totalVal += currNode->getValue();
        //Traverses
        currNode = currNode->getNextNode();
    }
    meanVal = totalVal / sizeOfVector;
    return meanVal;
}


//Standard Deviation Function
template<class T>
float Vector<T>::StDev() {
    float standardDev = 0.0;
    float meanValue = this->Mean();

    //Standard deviation calculation
    for (int i = 0; i < this->Size(); i++) {
        standardDev += pow(this->operator[](i) - meanValue, 2);
    }
    return sqrt(standardDev / Size());
}


#endif /* VECTOR_CPP */
