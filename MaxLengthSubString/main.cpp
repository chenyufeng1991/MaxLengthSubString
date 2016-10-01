//
//  main.cpp
//  MaxLengthSubString
//
//  Created by chenyufeng on 10/1/16.
//  Copyright © 2016 chenyufeng. All rights reserved.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

/**
 *  求包含字符的最小子串的长度
 *
 
 cadacacbedffffreaaawc
 f  c

 所以包含a,d最小子串的长度为2；

 */
int main(int argc, const char * argv[])
{
    cout << "请输入字符串：";
    string stringIn;
    cin >> stringIn;
    cout << "请输入两个字符：";
    char a, b;
    cin >> a >> b;

    vector<int> vectorA;
    vector<int> vectorB;
    for (int i = 0; i < stringIn.size(); i++)
    {
        if (stringIn[i] == a)
        {
            vectorA.push_back(i);
        }

        if (stringIn[i] == b)
        {
            vectorB.push_back(i);
        }
    }

    int minLength = (int)stringIn.size();
    for (int i = 0; i < vectorA.size(); i++)
        for (int j = 0; j < vectorB.size(); j++)
        {
            minLength = min(minLength, abs(vectorA[i]-vectorB[j]) + 1);
        }

    cout << "最短子串为："<< minLength << endl;

    return 0;
}
