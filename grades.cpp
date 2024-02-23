//     This program asks user to input masses of two objects and their 
//     distance. The program then calculates the gravitational force
//     and outputs the result.
//
//
//****************************************************************************************************

#include <iostream>
#include <fstream>

using namespace std;

int main() 
{
    const int NUM_STUDENTS = 10;
    string names[NUM_STUDENTS];
    int scores[NUM_STUDENTS];
    double average = 0;
    
    ifstream scores_file("Scores.txt");
    for (int i = 0; i < NUM_STUDENTS; i++) 
    {
        scores_file >> names[i] >> scores[i];
    }
    scores_file.close();

   
    for (int i = 0; i < NUM_STUDENTS; i++) 
    {
        average += scores[i];
    }
    average /= NUM_STUDENTS;

   
    ofstream output_file("grades.txt");
    output_file << "The average is " << average << endl;
    output_file << "The student above average are as follows:" << endl;
    
    for (int i = 0; i < NUM_STUDENTS; i++) 
    {
        if (scores[i] > average) 
        {
            output_file << "\t" << names[i] << "\t\t " << scores[i] << endl;
        }
    }
    output_file.close();

    return 0;
}

//****************************************************************************************************

/*

scores.txt
Morris		92
Rogers		89
Reed		62
Cook		77
Morgan		88
Smith		49
Johnson		86
Williams	50
Jones		97
Brown		79

*/

/*

grades.txt
The average is 76.9
The student above average are as follows:
    Morris		 92
    Rogers		 89
    Cook		 77
    Morgan		 88
    Johnson		 86
    Jones		 97
    Brown		 79

*/
