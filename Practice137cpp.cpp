/*
137. Check redundant brackets: For a given expression in the form of a string, find if there exist any redundant brackets or not. It is given that the expression contains only rounded brackets or parenthesis and the input expression will always be balanced.
A pair of the bracket is said to be redundant when a sub-expression is surrounded by unnecessary or needless brackets.
*/

#include <stack>
bool checkRedundantBrackets(string expression)
{

    stack<char> s1;

    for (int i = 0; expression[i] != '\0'; i++)
    {

        if (expression[i] != ')')
        {

            s1.push(expression[i]);
        }
        else
        {

            int count = 0;

            while (s1.top() != '(')
            {

                s1.pop();
                count++;
            }

            if (count <= 1)
            {

                return 1;
            }
            s1.pop();
        }
    }

    return 0;
}