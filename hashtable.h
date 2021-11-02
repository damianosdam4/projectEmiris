
#ifndef HASH
#define HASH
    #include "includes.h"
    #include "linkedlist.h"
    #include "others.h"

    class hashTable{
        
        private:

            vector<list<linkedListNode*>> array;
            int size;
            vector<vAndT> vAndTVector;
            vector<int> rVector;
            lshConstants* lshCon;
        
        public:
            // inserts a point 
            int insert(point* pGiven);
            
            // given a point, it searches for it in the hash, under construction
            int search(point* pGiven);

            // hash function, for now it represents the G(P) for lsh
            int hashFunction(point* pGiven);
            
            // destructor, under construction (no pun intented)
            ~hashTable();

            // constructor
            hashTable(int size, lshConstants* lshCon, int numOfDimensions);
            
            // returns the array as a whole...
            vector<list<linkedListNode*>> getArray();

            // just prints
            void print();

            // given a point, it finds its neighbors...
            list<linkedListNode>* findNeighbors(point* pGiven);
    };
    
#endif