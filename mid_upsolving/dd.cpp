#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
using namespace std;

void mode(double x[], const int n)
{
    int j, k, m=1, p, numofmodes=0;
    bool match=false, breaker;
    double y[100][2]={0}, max=0;



    y[0][0] = x[0];
    y[0][1] = 1;

    for(j=1; j<=(n-1); j++)  //
    {
        for (k=0; k<=(m-1); k++)
            if (x[j] == y[k][0])
            {
                y[k][1]++;
                match = true;
            }

        if (match == false)
        {
            y[m][0] = x[j];
            y[m][1] = 1;
            m++;
        }
        match = false;
    }



    for(j=0; j<=(n-1); j++)
    {
        if (y[j][1] > max)
            max = y[j][1];
    }

    for(j=0; j<=(n-1); j++)
    {
        if (y[j][1] = max)
            numofmodes++;
    }


    for(j=0; j<=(n-1); j++)
    {
        cout<<y[j][0]<<"    "<<y[j][1]<<endl;
    }


    cout<<"There are "<<numofmodes<< " modes in the data set."<<endl;

    for(j=0; j<=(n-1); j++)
    {
        if (y[j][1] = max)
        {
            cout<<y[j][0]<<" appears "<<max<<" times."<<endl;
        }
    }

}