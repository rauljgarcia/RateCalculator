#include "Node.h"

ClientInf::ClientInf(){
    shared_ptr<node>top_ptr_ = nullptr;
}

ClientInf::~ClientInf(){
}


shared_ptr<node> ClientInf::InitNode(string client, int shots){
    shared_ptr<node> ret(new node);
    ret->client = client;
    ret->shots = shots;
}




void ClientInf::AppendData(string client, int shots){

}

void ClientInf::Append(shared_ptr<node> new_node){

}