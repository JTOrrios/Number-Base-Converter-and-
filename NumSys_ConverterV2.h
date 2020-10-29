#pragma once
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <sstream>
#include <iomanip>
#include <cctype>
#include <vector>


int numSys;
std::string input1; std::string input2; std::string result_string; std::string temp_string;
int numValue1; int numValue2;
int result;
int decValue, decValue1, decValue2;



void Dec_To_Bin(std::string)
{
    int localNum = numValue1;
    int binArr[100];
    int i = 0;
    while (localNum > 0)
    {
        binArr[i] = localNum % 2;
        localNum /= 2;
        i++;
    }
    std::cout << "The Binary value of " << numValue1 << " is ";
    for (int j = i - 1; j >= 0; j--)
        std::cout << binArr[j];
    std::cout << "\n\n";
}
void Dec_To_Hex(std::string)
{
    int localNum = numValue1;
    char hexArr[100];
    int i = 0;
    while (localNum != 0)
    {
        int temp = 0;
        temp = localNum % 16;
        if (temp < 10)
        {
            hexArr[i] = temp + 48;
            i++;
        }
        else
        {
            hexArr[i] = temp + 55;
            i++;
        }
        localNum /= 16;
    }
    std::cout << "The Hexadecimal value of " << numValue1 << " is ";
    for (int j = i - 1; j >= 0; j--)
        std::cout << hexArr[j];
    std::cout << "\n\n";
}
void Dec_To_Oct(std::string)
{
    int localNum = numValue1;
    int octalValue{ 0 };
    int i = 1;
    while (localNum != 0)
    {
        int temp;
        temp = localNum % 8;
        localNum /= 8;
        octalValue += temp * i;
        i *= 10;
    }
    std::cout << "The Octal value of " << numValue1 << " is " << octalValue << "\n\n";
}

void Hex_To_Dec(std::string)
{
    std::stringstream ss;
    int decValue{ 0 };
    ss << std::hex << input1;
    ss >> decValue;
    std::cout << "The Decimal Value of " << input1 << " is " << decValue << "\n\n";
}
void Hex_To_Bin(std::string)
{
    std::stringstream ss;
    int decValue{ 0 };
    ss << std::hex << input1;
    ss >> decValue;

    int binArr[100];
    int i = 0;
    while (decValue > 0)
    {
        binArr[i] = decValue % 2;
        decValue /= 2;
        i++;
    }
    std::cout << "The Binary value of " << input1 << " is ";
    for (int j = i - 1; j >= 0; j--)
        std::cout << binArr[j];
    std::cout << "\n\n";
}

void Hex_To_Oct(std::string)
{
    std::stringstream ss;
    int decValue{ 0 };
    ss << std::hex << input1;
    ss >> decValue;

    int octalValue{ 0 };
    int i = 1;
    while (decValue != 0)
    {
        int temp;
        temp = decValue % 8;
        decValue /= 8;
        octalValue += temp * i;
        i *= 10;
    }
    std::cout << "The Octal value of " << input1 << " is " << octalValue << "\n\n";
}

void Bin_To_Dec(std::string)
{
    int localNum = numValue1;
    int decValue{ 0 };
    int i = 0;
    while (localNum != 0)
    {
        int temp;
        temp = localNum % 10;
        localNum /= 10;
        decValue += temp * pow(2, i);
        i++;
    }
    std::cout << "The Decimal value of " << numValue1 << " is " << decValue << "\n\n";
}
void Bin_To_Hex(std::string)
{
    int localNum = numValue1;
    char hexArr[100];
    int decValue{ 0 };
    int i = 0;
    while (localNum != 0)
    {
        int temp;
        temp = localNum % 10;
        localNum /= 10;
        decValue += temp * pow(2, i);
        i++;
    }
    while (decValue != 0)
    {
        int temp = 0;
        temp = decValue % 16;
        if (temp < 10)
        {
            hexArr[i] = temp + 48;
            i++;
        }
        else
        {
            hexArr[i] = temp + 55;
            i++;
        }
        decValue /= 16;
    }
    std::cout << "The Hexadecimal value of " << numValue1 << " is ";
    for (int j = i - 1; j >= 0; j--)
        std::cout << hexArr[j];
    std::cout << "\n\n";
}
void Bin_To_Oct(std::string)
{
    int localNum = numValue1;
    int decValue{ 0 };
    int octalValue{ 0 };
    int i{ 0 };
    while (localNum != 0)
    {
        int temp;
        temp = localNum % 10;
        localNum /= 10;
        decValue += temp * pow(2, i);
        i++;
    }
    i = 1;
    while (decValue != 0)
    {
        int temp;
        temp = decValue % 8;
        decValue /= 8;
        octalValue += temp * i;
        i *= 10;
    }
    std::cout << "The Octal value of " << numValue1 << " is " << octalValue << "\n\n";
}

void Oct_To_Dec(std::string)
{
    int octalNum = numValue1;
    int decValue{ 0 }, i{ 0 }, temp;
    while (octalNum != 0)
    {
        temp = octalNum % 10;
        octalNum /= 10;
        decValue += temp * pow(8, i);
        i++;
    }
    std::cout << "The Decimal value of " << numValue1 << " is " << decValue << "\n\n";
}
void Oct_To_Hex(std::string)
{
    int octalNum = numValue1;
    int decNum{ 0 }, binNum{ 0 }, i{ 0 }, temp;
    char hexArr[100];
    while (octalNum != 0)
    {
        decNum += (octalNum % 10) * pow(8, i);
        i++;
        octalNum /= 10;
    }
    i = 1;
    while (decNum != 0)
    {
        int temp = 0;
        temp = decNum % 16;
        if (temp < 10)
        {
            hexArr[i] = temp + 48;
            i++;
        }
        if (temp >= 10)
        {
            hexArr[i] = temp + 55;
            i++;
        }
        decNum /= 16;
    }
    std::cout << "The Hexadecimal value of " << numValue1 << " is ";
    for (int j = i - 1; j >= 0; j--)
        std::cout << hexArr[j];
    std::cout << "\n\n";
}
void Oct_To_Bin(std::string)
{
    int octalNum = numValue1;
    int decNum{ 0 }, binNum{ 0 }, i{ 0 };
    while (octalNum != 0)
    {
        decNum += (octalNum % 10) * pow(8, i);
        i++;
        octalNum /= 10;
    }
    i = 1;
    while (decNum != 0)
    {
        binNum += (decNum % 2) * i;
        decNum /= 2;
        i *= 10;
    }
    std::cout << "The binary value of " << numValue1 << " is " << binNum << "\n\n";
}
/*==================================================================================================*/

void Dec_To_Bin_Result(int)
{
    int localNum = result;
    int binArr[100];
    int i = 0;
    while (localNum > 0)
    {
        binArr[i] = localNum % 2;
        localNum /= 2;
        i++;
    }
    std::cout << "In binary: ";
    for (int j = i - 1; j >= 0; j--)
        std::cout << binArr[j];
    std::cout << "\n\n";
}
void Dec_To_Hex_Result(int)
{
    int localNum = result;
    char hexArr[100];
    int i = 0;
    while (localNum != 0)
    {
        int temp = 0;
        temp = localNum % 16;
        if (temp < 10)
        {
            hexArr[i] = temp + 48;
            i++;
        }
        else
        {
            hexArr[i] = temp + 55;
            i++;
        }
        localNum /= 16;
    }
    std::cout << "In Hexadecimal: ";
    for (int j = i - 1; j >= 0; j--)
        std::cout << hexArr[j];
    std::cout << "\n\n";
}
void Dec_To_Oct_Result(int)
{
    int localNum = result;
    int octalValue{ 0 };
    int i = 1;
    while (localNum != 0)
    {
        int temp;
        temp = localNum % 8;
        localNum /= 8;
        octalValue += temp * i;
        i *= 10;
    }
    std::cout << "In Octal: " << octalValue << "\n\n";
}
void Dec_Result(int)
{
    std::cout << "In Decicmal " << result << "\n\n";
}