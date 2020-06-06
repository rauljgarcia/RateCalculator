#ifndef NODE_H
#define NODE_H

#include <string>
#include <memory>

using namespace std;

struct node {
    string client;
    int shots;
    float cost;
    shared_ptr<node> next;
};

class ClientInf{
public: 
ClientInf();

~ClientInf();

shared_ptr<node> InitNode(string client, int shots);

void addClient();

void AppendData(string client, int shots);

void Append(shared_ptr<node> new_node);

private:
shared_ptr<node> top_ptr_;

};



#endif // NODE_H__