//
// Created by rmb35 on 2/21/2021.
//

#ifndef PROJECT_1_IMAGEPROCESSING_H
#define PROJECT_1_IMAGEPROCESSING_H

/**
 * Flips the given PGM data stream horizontally
 *
 * @param original
 * @param height
 * @param width
 */
void flipHorizontal(int** original, const int height, const int width);


/**
 * Flips the given PGM data stream vertically
 *
 * @param imagePGM
 * @param height
 * @param width
 */
void flipVertical(int** original, const int height, const int width);


/**
 * Copies the data from original to copy
 *
 * @param original
 * @param copy
 * @param height
 * @param width
 */
void copyImage(int** original, int** copy, const int height, const int width);

#endif //PROJECT_1_IMAGEPROCESSING_H
