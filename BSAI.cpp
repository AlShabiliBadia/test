//   Section number  :   TT2L
//   Group number    : G9
//   Student  1.     :  (1221303962),  (ibrahim mubarak ibrahim ezzeldin).
//   Student  2.     :  (1221304239 ),  (Mohammed Hisham).
//   Student  3.     :  (1221304409),  (Ahmed Mohammed Ageib).
//   Video recording:   place the link of the recording here. ()
#include <iostream>
#include <vector>
#include <sstream>
#include <stdlib.h>
#include <windows.h>
#include <fstream>
using namespace std;

HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

void load(string filename)

// File Operations:done by ibrahim .
{
    SetConsoleTextAttribute(h, 3);
    cout << "loading file : " << filename << endl
         << endl;
}
void store(string filename)
{
    SetConsoleTextAttribute(h, 2);
    cout << "storig file : " << filename << endl
         << endl;
}
void clone(string filename)
{
    SetConsoleTextAttribute(h, 1);
    cout << "copying file : " << filename << endl
         << endl;
}
void html(string filename)
{
    SetConsoleTextAttribute(h, 5);
    cout << "generating an html document : " << filename << endl
         << endl;
}

// Statistical Commands: done by ahmed and ibrahim and mohammed.
void min(string filename)
{
    SetConsoleTextAttribute(h, 6);
    cout << "showing the minimum values of all the columns " << endl
         << endl;
}
void max(string filename)
{
    SetConsoleTextAttribute(h, 8);
    cout << "maximum value of all column : " << filename << endl
         << endl;
}

void median(string filename)
{
    SetConsoleTextAttribute(h, 9);
    cout << "median for the number columns only : " << filename << endl
         << endl;
}
void mean(string filename)
{
    SetConsoleTextAttribute(h, 10);
    cout << "mean for all columns : " << filename << endl
         << endl;
}
void variance(string filename)
{
    SetConsoleTextAttribute(h, 11);
    cout << "variance of all columns : " << filename << endl
         << endl;
}
void standard_deviation(string filename)
{
    SetConsoleTextAttribute(h, 12);
    cout << "stdv of all columns : " << filename << endl
         << endl;
}
void add(string filename)
{
    SetConsoleTextAttribute(h, 13);
    cout << "column resulted from adding the two columns Malay and Math  : " << filename << endl
         << endl;
}
void subtract(string filename)
{
    SetConsoleTextAttribute(h, 14);
    cout << "coloumn resulted from subtracting malay and math : " << filename << endl
         << endl;
}
void pearson_correlation(string filename)
{
    SetConsoleTextAttribute(h, 15);
    cout << "compute the correlation between math column and the malay column : " << filename << endl
         << endl;
}
void regression(string filename)
{
    SetConsoleTextAttribute(h, 1);
    cout << "compute of the linear regression fromula for selected column  : " << filename << endl
         << endl;
}
// Display commands:
void show(string filename)
{
    SetConsoleTextAttribute(h, 2);
    cout << "Displaying the data from the file... " << filename << endl;
}
void titles(string filename)
{
    SetConsoleTextAttribute(h, 3);
    cout << "Displaying the titles of all the columns from the file.. " << filename << endl;
}
void report(string filename)
{
    SetConsoleTextAttribute(h, 4);
    cout << " Displays a report that shows all the statistics for all the columns" << endl;
}
void rows(string filename)
{
    SetConsoleTextAttribute(h, 5);
    cout << "Displaying the number of rows loaded ..." << filename << endl;
}
void columns(string filename)
{
    SetConsoleTextAttribute(h, 6);
    cout << "displaying numbers of columns loded.." << filename << endl;
}
void verticalHistogram(string filename)
{
    SetConsoleTextAttribute(h, 8);
    cout << "Displaing a histogram for the Math column..." << filename << endl;
}
void horizontalHistogram(string filename)
{
    SetConsoleTextAttribute(h, 9);
    cout << "Displays a histogram for the Math column... " << filename << endl;
}
void sort(string filename)
{
    SetConsoleTextAttribute(h, 10);
    cout << "Sorting the data using the Math column value." << filename << endl;
}
void help(string filename)
{
    SetConsoleTextAttribute(h, 11);
    cout << "to be cunteued" << filename << endl;
}

void oddRows(string filename)
{
    SetConsoleTextAttribute(h, 12);
    cout << "Displaing the odd data rows ..." << filename << endl;
}
void evenRows(string filename)
{
    SetConsoleTextAttribute(h, 13);
    cout << "Displays the even rows of the data." << filename << endl;
}
void primes(string filename)
{
    SetConsoleTextAttribute(h, 14);
    cout << "Display the prime numbers in the Math column." << filename << endl;
}
// Add/Delete commands:done by mohammed .
void D(int x)
{
    SetConsoleTextAttribute(h, 15);
    cin >> x;
}
void D(string filename)
{
    SetConsoleTextAttribute(h, 1);
    cout << "deleting " << filename << endl;
}

void insert(string filename)
{
    SetConsoleTextAttribute(h, 2);
    cout << "inserting data " << filename << endl;
}
void Replace(string filename)
{
    SetConsoleTextAttribute(h, 3);
    cout << "Replacing every number == " << filename << endl;
}

void small_letter(string &str)
{
    SetConsoleTextAttribute(h, 7);
    for (int i = 0; i < str.length(); (i++))
        str[i] = tolower(str[i]);
}
vector<string> wordChecker(string sentence, char input)
{
    vector<string> words;
    int start = 0; // The starting index of the current word
    int end = 0;   // The ending index of the current word
    while (end <= sentence.size())
    {
        if (sentence[end] == input || sentence[end] == '\0')
        {
            if (start != end)
            {
                string word = sentence.substr(start, end - start);
                words.push_back(word);
            }
            start = end + 1;
        }
        end++;
    }
    return words;
}

int main()
{

    cout << "Welcome to BSAI" << endl;
    bool exit = false;
    do
    {
        string command;
        cout << "\n$ ";
        getline(cin, command);
        cout << endl;
        vector<string> words = wordChecker(command, ' ');

        int size = words.size();
        // File Operations.
        if (size > 0)
        {
            if (words[0].compare("load") == 0) // Reads the file named filename and parses its contents and stores
                                               // it into arrays or vectors. The interpreter handles one file only.
            {
                if (size == 2)
                {
                    string loadfile = words[1];
                    if (wordChecker(loadfile, '.').size() == 2)
                    {
                        string filename = wordChecker(loadfile, '.')[0];
                        string extension = wordChecker(loadfile, '.')[1];
                        if (extension.compare("csv") == 0)
                        {
                            cout << "command : " << command << endl
                                 << endl;
                            string filename = words.at(1);
                            load(filename);
                        }
                    }
                    else
                    {

                        cout << "invalid extenstion please enter the correct file format and extension";
                    }
                }
                else if (size < 2)
                {

                    cout << "Number of parameters is wrong" << endl
                         << endl;
                }
            }
            else if (words[0] == "store")
            {
                if (size == 2)
                {
                    string storefile = words[1];
                    if (wordChecker(storefile, '.').size() == 2)
                    {
                        string filename = wordChecker(storefile, '.')[0];
                        string extension = wordChecker(storefile, '.')[1];
                        if (extension.compare("csv") == 0)
                        {
                            cout << "command : " << command << endl
                                 << endl;
                            string filename = words.at(1);
                            store(filename);
                        }
                    }
                    else
                    {
                        cout << "invalid extenstion please enter the correct file format and extension";
                    }
                }
                else if (size < 2)
                {
                    cout << "Number of parameters is wrong" << endl;
                }
                else
                    cout << "unrecognized command" << endl;
            }
            else if (words[0] == "clone")
            {
                if (size == 2)
                {
                    string clonefile = words[1];
                    if (wordChecker(clonefile, '.').size() == 2)
                    {
                        string filename = wordChecker(clonefile, '.')[0];
                        string extension = wordChecker(clonefile, '.')[1];
                        if (extension.compare("csv") == 0)
                        {
                            cout << "command : " << command << endl
                                 << endl;
                            string filename = words.at(1);
                            clone(filename);
                        }
                    }
                    else
                    {
                        cout << "invalid extenstion please enter the correct file format and extension";
                    }
                }
                else if (size < 2)
                {
                    cout << "Number of parameters is wrong" << endl;
                }
                else
                {
                    cout << "unrecognized command" << endl;
                }
            }

            else if (words[0] == "html")
            {
                cout << "command : " << command << endl
                     << endl;
                if (size == 2)
                {
                    string filename = words.at(1);
                    html(filename);
                }
                else if (size < 2)
                {
                    cout << "Number of parameters is wrong" << endl;
                }
                else
                    cout << "unrecognized command" << endl;

                if (words[3] == ".html")
                {
                    cout << " converting html file to a taple" << endl;
                }
            }

            // Statistical Commands.

            else if (words[0] == "min")
            {
                if (size == 1)
                {
                    cout << "showing minimum of all columns" << endl;
                }
                else if (size == 2)
                {
                    string column = words[1];
                    cout << "showing minimum value of : " << column << endl;
                }
                else if (size > 2)
                {
                    cout << " wrong number of parameters" << endl
                         << endl;
                }
            }

            else if (words[0] == "max") // Should display the minimum grade for the Malay column.
            {
                if (size == 1)
                {
                    cout << "showing maximum of all columns" << endl;
                }
                else if (size == 2)
                {
                    string column = words[1];
                    cout << "showing maximum value of : " << column << endl;
                }
                else if (size > 2)
                {
                    cout << " wrong number of parameters" << endl
                         << endl;
                }
            }

            else if (words[0] == "median") // shows the maximum of all the columns. Must show column
                                           // names and their max values.
            {
                if (size == 1)
                {
                    cout << "showing the median of all columns";
                }
                else if (size == 2)
                {
                    string word = words[1];
                    cout << "showing the median of : " << word << " column" << endl
                         << endl;
                }
                else if (size > 1 || size <= 3)
                {
                    cout << "wrong number of parameters " << endl
                         << endl;
                }
            }
            else if (words[0] == "mean") // Displays means of all the columns.

            {
                if (size == 1)
                {
                    string word = words[1];
                    cout << "Displays means of all the columns" << word << endl;
                }
                else if (size == 2)
                {
                    string word = words[1];
                    cout << " show mean of " << word << " column" << endl
                         << endl;
                }
            }
            else if (words[0] == "variance") // Displays variance of all the columns.
            {
                if (size == 1)
                {
                    cout << "Displays variance of all the columns." << endl;
                }
                else if (size == 2)
                {
                    string word = words[1];
                    cout << "variance of :" << word << " column" << endl
                         << endl;
                }
            }
            else if (words[0] == "stdv") // Displays stdv of all the columns.
            {
                if (size == 1)
                {
                    cout << "Displays stdv of all the columns";
                }
                else if (size = 2)
                {
                    string word = words[1];
                    cout << "stdv of " << word << " column" << endl
                         << endl;
                }
            }
            else if (words[0] == "add") // Displays a column resulted from adding the two columns
                                        // Malay and Math.
            {
                if (size == 3)
                {
                    string column1 = words[1];
                    string column2 = words[2];

                    cout << "adding the two columns together\n";
                    cout << column1 << " + " << column2;
                }
                else
                {
                    cout << "wrong number of parameters" << endl;
                }
            }
            else if (words[0] == "sub") // Displays a column resulted from subtracting the Malay
                                        // column from the Math column.
            {
                if (size == 3)
                {
                    string column1 = words[1];
                    string column2 = words[2];
                    cout << "subtracting the two columns together\n";
                    cout << column1 << " - " << column2;
                }
                else if (size < 3)
                {
                    cout << "wrong number of parameters" << endl;
                }
            }
            else if (words[0] == "corr") // Computes the correlation between the Math column and the
                                         //  Malay column using Pearson correlation.
            {
                if (size == 3)
                {
                    string column1 = words[1];
                    string column2 = words[2];
                    cout << "Computeing the correlation btween:" << endl;
                }
                else if (size < 3)
                {
                    cout << "wrong number of parameters" << endl;
                }
            }

            else if (words[0] == "regression") // Compute the linear regression line formula for a selected
                                               // column (regression estimates the best straight line to
            // summarize the association of data).
            {
                if (size == 2)
                {
                    string word = words[0];
                    string column1 = words[1];

                    cout << "Compute the linear regression line formula for :" << word << " column" << endl;
                }
                else if (size < 2)
                {
                    cout << "wrong number of parameters" << endl;
                }
            }
            // display commands:- by ibrahim .
            else if (words[0] == "show")
            {
                if (size == 1)
                {
                    cout << "Displays the data read from the file";
                }
                else if (size == 2)
                {
                    cout << "displaying the math column" << endl;
                }
                else
                    cout << "wrong number of parameters" << endl
                         << endl;
            }
            else if (words[0] == "titles")
            {
                if (size == 1)
                {
                    cout << "Displays the titles of all the columns for the file";
                }
                else
                    cout << "wrong number of parameters" << endl
                         << endl;
            }
            else if (words[0] == "report")
            {
                if (size == 1)
                {
                    cout << "report that shows all the statistics for all the columns";
                }
                else
                    cout << "wrong number of parameters" << endl
                         << endl;
            }
            else if (words[0] == "rows")
            {
                if (size == 1)
                {
                    cout << "showing all rwos";
                }
                else
                    cout << "wrong number of parameters" << endl
                         << endl;
            }
            else if (words[0] == "columns")
            {
                if (size == 1)
                {
                    cout << "showing all columns ";
                }
                else
                    cout << "wrong number of parameters" << endl
                         << endl;
            }
            else if (words[0] == "vhisto")
            {
                if (size == 2)
                {
                    string filename = words.at(1);
                    verticalHistogram(filename);
                }
                else
                    cout << "wrong number of parameters" << endl
                         << endl;
            }
            else if (words[0] == "hhisto")
            {
                if (size == 2)
                {
                    string filename = words.at(1);
                    horizontalHistogram(filename);
                }
                else
                    cout << "wrong number of parameters" << endl
                         << endl;
            }
            else if (words[0] == "sort")
            {
                if (size == 2)
                {
                    string filename = words.at(1);
                    sort(filename);
                }
                else
                    cout << "wrong number of parameters" << endl
                         << endl;
            }

            else if (words[0] == "oddrows")
            {
                if (size == 1)
                {
                    string filename = words.at(0);
                    oddRows(filename);
                }
                else
                    cout << "wrong number of parameters" << endl
                         << endl;
            }
            else if (words[0] == "evenrows")
            {
                if (size == 1)
                {
                    string filename = words.at(0);
                    evenRows(filename);
                }
                else
                    cout << "wrong number of parameters" << endl
                         << endl;
            }
            else if (words[0] == "primes")
            {
                if (size == 1)
                {
                    string filename = words.at(0);
                    primes(filename);
                }
                else
                    cout << "wrong number of parameters" << endl
                         << endl;
            }

            // Add/Delete commands:-
            if (words[0] == "delete")
            {
                if (size == 2)
                {
                    string x;
                    D(x);
                }
                else if (size == 3)
                {
                    string filename = words.at(1);
                    D(filename);
                }
                else
                    cout << "wrong number of parameter" << endl
                         << endl;
            }

            else if (words[0] == "insert")
            {
                if (size == 6)
                {

                    string row = words[1];

                    if (words[1] == "row")
                    {
                        string num1 = words[2];
                        string num2 = words[3];
                        string num3 = words[4];
                        string num4 = words[5];
                        cout << "adding one to columns : \n";

                        cout << num1 << ',' << num2 << ',' << num3 << ',' << num4;
                    }
                    else
                    {
                        cout << "please enter the correct format for the insert command.";
                    }
                }
                else
                    cout << "wrong number of parameters";
            }
            else if (words[0] == "replace")
            {
                if (size == 3)
                {
                    string filename;
                    Replace(filename);
                }
                else if (size == 4)
                {
                    cout << "replace every" << endl;
                }
                else
                    cout << "wrong number of parameter" << endl
                         << endl;
            }
            else if (words[0] == "help")
            {
                if (size == 1)
                {
                    fstream myFile; // declaring a file

                    myFile.open("help.txt", ios::in); // opening the file

                    if (myFile.is_open())
                    {

                        string line;
                        while (getline(myFile, line)) // a loop to read the contents of the .txt file
                        {
                            cout << line << endl;
                            system("pause>0");
                        }
                        myFile.close();
                    }
                }
                else
                    cout << "wrong number of parameters ";
            }
            else if (words[0] == "man")
            {
                if (size >= 1)
                {
                    if (words[1] == "load")
                    {

                        cout << "Read the file named filename and"
                             << " parses its contents and stores it "
                             << "into arrays or vector . the interperter only\n";

                        cout << "format : load";
                    }
                    else if (words[1] == "store")
                    {

                        cout << "save the active array or vector"
                             << "into a csv formatted file with the"
                             << "name filename\n";

                        cout << "format : store";
                    }
                    else if (words[1] == "clone")
                    {

                        cout << "create copy of file1 and name it"
                             << "file2\n";

                        cout << "format : clone\n";
                    }
                    else if (words[1] == "html")
                    {

                        cout << "Generates an HTML document for the loaded data"
                             << "and store and store it in a file 'salery.html"
                             << endl;

                        cout << "format : html(salary.html)\n";

                        cout << "the command converts csv files to html \n";

                        cout << "format: html (filename).csv" << endl;
                    }
                    else if (words[1] == "min")
                    {

                        cout << "shows the mininmum of "
                             << "all columns " << endl;

                        cout << "format : min\n";
                        cout << "min followed by (column name) would show the minimum of this column\n";
                        cout << "format : min (column name )\n ";
                    }
                    else if (words[1] == "max")
                    {

                        cout << "the maximum of all columns\n";

                        cout << "format : max";
                        cout << "max followed by a column name would display the max of that column\n";
                        cout << "format : max (column name)\n";
                    }
                    else if (words[1] == "median")
                    {

                        cout << "shows the median of columns only\n";

                        cout << "format : median";
                        cout << "median followed by a column name would display the median of that column\n";
                        cout << "format (column name)\n";
                    }
                    else if (words[1] == "mean")
                    {

                        cout << "mean of all columns\n";

                        cout << "format : mean";
                        cout << "mean followed by a column name would dispaly the mean of that column\n";
                        cout << "format : mean (column name)";
                    }
                    else if (words[1] == "variance")
                    {

                        cout << "display the variance of the all columns\n";
                        cout << "variance followed by a column name would display the variance of that column\n";
                        cout << "format : variance (column name)\n";
                        cout << "format : variance";
                    }
                    else if (words[1] == "stdv")
                    {

                        cout << "display the stdv of all column\n";
                        cout << "stdv followed by a column name would display the stdv of that column\n";
                        cout << "format : stdv (column name)\n";

                        cout << "format : stdv\n";
                    }
                    else if (words[1] == "add")
                    {

                        cout << "display a column resulted from adding columns\n";

                        cout << "format : add\n";
                    }
                    else if (words[1] == "subtract")
                    {

                        cout << "display a column resulted from subtracted columns\n";

                        cout << "format : subtract\n";
                    }
                    else if (words[1] == "corr")
                    {

                        cout << "computes the correlation between the math column and the malay column\n";

                        cout << "format : corr\n";
                    }
                    else if (words[1] == "regression")
                    {

                        cout << "compute the linear regression line formula for a selected column\n";

                        cout << "format : regression\n";
                    }
                    else if (words[1] == "show")
                    {

                        cout << "display the data read from the file\n";
                        cout << "show followed by column name would display the math columns\n";
                        cout << "format : show\n";

                        cout << "format : show (column name)\n";
                    }
                    else if (words[1] == "report")
                    {

                        cout << "Displays a report that shows all the statistics for all the columns\n";

                        cout << "format : report\n";
                    }
                    else if (words[1] == "rows")
                    {

                        cout << "Displays the number of rows loaded\n";

                        cout << "format : rows\n";
                    }
                    else if (words[1] == "columns")
                    {

                        cout << "Displays the number of columns loaded\n";

                        cout << "format : columns\n";
                    }
                    else if (words[1] == "vhisto")
                    {

                        cout << "Displays a histogram for the Math column\n";

                        cout << "format : vhisto\n";
                    }
                    else if (words[1] == "hhisto")
                    {

                        cout << "Displays a histogram for the Math column\n";

                        cout << "format : hhisto\n";
                    }
                    else if (words[1] == "sort")
                    {

                        cout << "Sort the data using the Math column value\n";

                        cout << "format : sort\n";
                    }
                    else if (words[1] == "help")
                    {

                        cout << "Display the commands available and how to use them\n";

                        cout << "format : help\n";
                    }
                    else if (words[1] == "manual")
                    {

                        cout << "Display the command for the vhisto and what it does\n";

                        cout << "format : manual\n";
                    }
                    else if (words[1] == "oddrows")
                    {

                        cout << "Display the odd rows of the data\n";

                        cout << "format : oddrows\n";
                    }
                    else if (words[1] == "evenrows")
                    {

                        cout << "Displays the even rows of the data\n";

                        cout << "format : evenrows\n";
                    }
                    else if (words[1] == "primes")
                    {

                        cout << "Display the prime numbers in the Math column\n";

                        cout << "format : primes\n";
                    }
                    else if (words[1] == "delete")
                    {

                        cout << "delete every row that has a previous entered value\n";
                        cout << "delete flollowed by column name would delete the column\n";
                        cout << "delte followed by row name would delete the row\n";
                        cout << "format : delete (column name)\n";
                        cout << "format : delete (row name)\n";
                        cout << "format : delete\n";
                    }
                    else if (words[1] == "insert")
                    {

                        cout << "insert the values to the data in memory.\n";
                        cout << "insert followed by column name would insert the column name\n";
                        cout << "insert followed by row name eould insert the row name\n ";
                        cout << "format : insert";
                        cout << "format : insert (column name)\n";
                        cout << "format : insert (row name)\n";
                    }
                    else if (words[1] == "replace")
                    {
                        SetConsoleTextAttribute(h, 7);
                        cout << "replace every number of columns with other number of columns\n";
                        cout << "repalce followed by math repalce number of columns with othe number of columns\n";
                        cout << "format : replace\n";
                        cout << "format : replace math\n";
                    }
                    else
                    {
                        cout << "command was not found \n";
                    }
                }
            }
            else if (words.size() > 0 && words[0] == "exit")
            {
                exit = true;
            }
        }
         
        
        else
        {
            SetConsoleTextAttribute(h, 4);
            cout << "no command was entered " << endl;
        }

    }

    while (!exit);
}
