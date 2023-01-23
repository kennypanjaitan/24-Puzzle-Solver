// FUNCTIONS FOR CALCULATING 24 POINTS

#ifndef OPERATOR_HPP
#define OPERATOR_HPP

using namespace std;

char opes[4] = {'+', '-', '*', '/'};

// Format double to string
string format(double n)
{
    stringstream ss;
    ss.precision(2);
    ss << n;

    string s = ss.str();
    return s;
}

// Returns binary operator
double op(double a, int ope, double b)
{
    switch (ope)
    {
    case 0:
        return a + b;
    case 1:
        return a - b;
    case 2:
        return a * b;
    case 3:
        return a / b;
    default:
        break; 
    }
}

// ((a OP b) OP c) OP d
void count1(vector<double> arr, int total, vector<string> &result)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                double temp = op(op(op(arr[0], i, arr[1]), j, arr[2]), k, arr[3]);
                if (temp == 24)
                {
                    result.push_back("((" + format(arr[0]) + " " + opes[i] + " " + format(arr[1]) + ")" + " " + opes[j] + " " + format(arr[2]) + ")" + " " + opes[k] + " " + format(arr[3]));
                    total++;
                }
            }
        }
    }
}

// (a OP (b OP c)) OP d
void count2(vector<double> arr, int total, vector<string> &result)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                double temp = op(op(arr[0], i, op(arr[1], j, arr[2])), k, arr[3]);
                if (temp == 24)
                {
                    result.push_back("(" + format(arr[0]) + " " + opes[i] + " " + "(" + format(arr[1]) + " " + opes[j] + " " + format(arr[2]) + "))" + " " + opes[k] + " " + format(arr[3]));
                    total++;
                }
            }
        }
    }
}

// (a OP b) OP (c OP d)
void count3(vector<double> arr, int total, vector<string> &result)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                double temp = op(op(arr[0], i, arr[1]), j, op(arr[2], k, arr[3]));
                if (temp == 24)
                {
                    result.push_back("(" + format(arr[0]) + " " + opes[i] + " " + format(arr[1]) + ")" + " " + opes[j] + " " + "(" + format(arr[2]) + " " + opes[k] + " " + format(arr[3]) + ")");
                    total++;
                }
            }
        }
    }
}

// a OP ((b OP c) OP d)
void count4(vector<double> arr, int total, vector<string> &result)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                double temp = op(arr[0], i, op(op(arr[1], j, arr[2]), k, arr[3]));
                if (temp == 24)
                {
                    result.push_back(format(arr[0]) + " " + opes[i] + " " + "((" + format(arr[1]) + " " + opes[j] + " " + format(arr[2]) + ")" + " " + opes[k] + " " + format(arr[3]) + ")");
                    total++;
                }
            }
        }
    }
}

// a OP (b OP (c OP d))
void count5(vector<double> arr, int total, vector<string> &result)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                double temp = op(arr[0], i, op(arr[1], j, op(arr[2], k, arr[3])));
                if (temp == 24)
                {
                    result.push_back(format(arr[0]) + " " + opes[i] + " " + "(" + format(arr[1]) + " " + opes[j] + " " + "(" + format(arr[2]) + " " + opes[k] + " " + format(arr[3]) + "))");
                    total++;
                }
            }
        }
    }
}

#endif