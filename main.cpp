#include <iostream>
#include "PGM.h"
#include "ImageProcessing.h"
using namespace std;

int main()
{
    // Path to the file
    // If image is in the same directory as executable
    //string fileName = "lena.pgm";

    // Clion paths if cloned from repo
    string fileName = "..\\test_images\\balloons.pgm";
    string outputName = "..\\processed_images\\balloons_copy_horzflip.pgm";

    //Open File set information
    if( openPGM(fileName) )
    {
        // Get Image Size Information
        int width = getPGMWidth();
        int height = getPGMHeight();

        // Declare and allocate memory for data
        int** original; 	        
        original = new int*[ height];          
        
        for(int i = 0; i < height; i++){
            original[i] = new int[width];  		             
        }
        
        // Get the data
        getPGMData(original);	

        //flipVertical(original, height, width);
        flipHorizontal(original, height, width);


        // Write back out the same image
        if( !writePGM(outputName, original) ){
            cout << "Failed to write out file\n";
        }

        // Clean up memory
        for(int i = 0; i < height; i++){
            delete[] original[i];  	            
        }	         
        delete original;
    }else{
        cout << "Cannot open file " << fileName << endl;
    }
}
