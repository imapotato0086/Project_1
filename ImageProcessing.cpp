//
// Created by rmb35 on 2/21/2021.
//
#include <iostream>
#include "ImageProcessing.h"
//#include "PGM.h"

void copyImage(int** original, int** copy, const int height, const int width)
{
    for(int row = 0; row < height; ++row)
    {// Start row for loop
        for(int col = 0; col < width; ++col)
        {// Start col for loop
            copy[row][col] = original[row][col];
        }// End col for loop
    }// End row for loop
}


void flipHorizontal(int** original, const int height, const int width)
{
    int** copy;
    copy = new int*[width];
    for(int i =0; i < height; ++i)
    {
        copy[i] = new int[width];
    }


    for(int row = 0; row < height; ++row)
    {// Start row for loop
        for(int col = 0; col < width; ++col)
        {// Start col for loop
            copy[row][col] = original[row][(width-1)-col];

            if(row < 1)
            {
                std::cout << col << " Copy   : " << copy[0][col] << "|" << original[0][col] << " :   Original\n";
            }
        }// End col for loop

    }// End row for loop

    copyImage(copy, original, height, width);


    // Clean up memory


    for(int i = 0; i < height; ++i)
    {
        delete[] copy[i];
    }
    delete[] copy;


}

void flipVertical(int** original, const int height, const int width)
{
    int** copy;
    copy = new int*[width];
    for(int i =0; i < height; ++i)
    {
        copy[i] = new int[width];
    }


    for(int row = 0; row < height; ++row)
    {// Start row for loop
        for(int col = 0; col < width; ++col)
        {// Start col for loop
            copy[row][col] = original[(height-1) - row][col];
        }// End col for loop
        std::cout << row << " Copy   : " << copy[row][0] << "|" << original[row][0] << " :   Original\n";
    }// End row for loop

    copyImage(copy, original, height, width);


    // Clean up memory
    for(int i = 0; i < height; ++i)
    {
        delete[] copy[i];
    }
    delete[] copy;
}