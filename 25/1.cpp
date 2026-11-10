#include <iostream>

using namespace std;

class Tree
{
public:
    virtual void draw()
    {
    }
};

class TreeA : public Tree
{
public:
    void draw() override
    {
        cout << " /\\\n";
        cout << "//\\\\\n";
    }
};

class TreeB : public Tree
{
public:
    void draw() override
    {
        cout << " /\\\n";
        cout << "/**\\\n";
    }
};

class TreeC : public Tree
{
public:
    void draw() override
    {
        cout << " /\\\n";
        cout << "/++\\\n";
    }
};

int main(void)
{
    Tree *trees[3];

    TreeA tree1;
    TreeB tree2;
    TreeC tree3;

    trees[0] = &tree1;
    trees[1] = &tree2;
    trees[2] = &tree3;

    for (int i = 0; i < 3; i++)
    {
        cout << "Drawing " << (i + 1) << ":" << endl;
        trees[i]->draw();
    }

    return 0;
}
