 //Zion Ogunsola
//Homework Programming Lab - #4 Arrays 1
//11/18/2024
 
 
 #include <iostream>  //Includes iostream 
 #include <string>// Includes string 

 #include <limits> // Include this header for numeric_limits (i KNOW WE WERENT TAUgT this I JUST COULDNT FIgURE out the way to get the dna part to run witOUT this )
 
 using namespace std;  
 
 
 void filterEvens(int arr[], int size); //prototype
 string dna_to_rna(string dna); //prototype
 
 int main()  //Begins int function
 { 
     const int SIZE = 8; //defines variablE
     int myArray[SIZE];//defines variablE
     
     cout << "Enter 8 integers:" << endl;  //outputs statement
     
     for (int i = 0; i < SIZE; ++i)//Sets condition for for loop 
     
     {
         cin >>myArray[i]; //USER INPUT
     }     
     
     filterEvens(myArray, SIZE); //calls function
     
     int cars[10] = {7, 3, 6, 0, 14, 8, 1, 2, 9, 8}; //defines variablE
    int totalCarsSold = 0; //defines variablE
    int bestSalesperson = 0; //defines variablE

    for (int i = 0; i < 10; ++i)//Sets condition for for loop
    {
        totalCarsSold += cars[i]; //adds value of array to variable totalCarsSold 
        if (cars[i] > cars[bestSalesperson]) //if statement
        {
            bestSalesperson = i; //sets NEW bestSalesperson IF greater compared to previous  
        }
    }

    cout << "Total number of cars sold at the entire dealership: " << totalCarsSold << endl; //outputs statement
    cout << "Salesperson #" << (bestSalesperson + 1) << " sold the most cars." << endl; //outputs statement
    cout << "They sold " << cars[bestSalesperson] << " cars." << endl; //outputs statement

     cin.ignore(numeric_limits<streamsize>::max(), '\n');// ignoreS previous cin inputs (i KNOW WE WERENT TAUgT this I JUST COULDNT FIgURE out the way to get the dna part to run witOUT this ) 

    string dna; //defines variablE
    cout << "Enter a DNA sequence: "; //outputs statement
    getline(cin, dna); // Reads the entire line including spaces

    string rna = dna_to_rna(dna);
    cout << "The RNA sequence is: " << rna << endl; //outputs statement

      return 0; //RETUJRNS FUNCTION
      
   }     
 

 
 
 
 
 
 
 void filterEvens(int arr[], int size) 
 {
     
    cout << "Even numbers in the array are:" << endl; //outputs statement
    for (int i = 0; i < size; ++i) //Sets condition for for loop 
    {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}
 
 string dna_to_rna(string dna)
 {
    string rna = "";
    for (char nucleotide : dna) //Sets condition for for loop
    {
        switch (nucleotide) //switch statement
        {
            case 'A':
                rna += 'U';
                break;
            case 'C':
                rna += 'G';
                break;
            case 'G':
                rna += 'C';
                break;
            case 'T':
                rna += 'A';
                break;
            default:
                // Ignore any non-DNA characters
                break;
        }
    }
    return rna;
}

/*
 Enter 8 integers:
1 23 3 4 5 6 7 8
Even numbers in the array are:
4 6 8 
Total number of cars sold at the entire dealership: 58
Salesperson #5 sold the most cars.
They sold 14 cars.
Enter a DNA sequence: ACT T CC
The RNA sequence is: UGAAGG
 */