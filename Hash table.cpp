#include <iostream>
#include <list>
#include <string>
using namespace std;
class HashTable {
private:
    static const int TABLE_SIZE = 10;  
    list<pair<string, int>> table[TABLE_SIZE];  
    int hashFunction(const string &key) {
        int hashValue = 0;
        for (char ch : key) {
            hashValue = (hashValue * 31 + ch) % TABLE_SIZE;
        }
        return hashValue;
    }
public:
    void insert(const string &key, int value) {
        int index = hashFunction(key);
        auto &chain = table[index];
        for (auto &pair : chain) {
            if (pair.first == key) {
                pair.second = value;  
                return;
            }
        }
        chain.push_back(make_pair(key, value));
    }
    int search(const string &key) {
        int index = hashFunction(key);
        auto &chain = table[index];
        for (auto &pair : chain) {
            if (pair.first == key) {
                return pair.second;
            }
        } 
        return -1;  
    }
    void remove(const string &key) {
        int index = hashFunction(key);
        auto &chain = table[index];
      
        for (auto it = chain.begin(); it != chain.end(); ++it) {
            if (it->first == key) {
                chain.erase(it);
                cout << "Key deleted\n";
                return;
            }
        }
      
        cout << "Key not found\n";
    }
    void printTable() {
        for (int i = 0; i < TABLE_SIZE; ++i) {
            cout << "Index " << i << ": ";
            for (auto &pair : table[i]) {
                cout << "(" << pair.first << ", " << pair.second << ") -> ";
            }
            cout << "NULL\n";
        }
    }
};
int main() {
    HashTable hashTable;
    hashTable.insert("apple", 1);
    hashTable.insert("banana", 2);
    hashTable.insert("orange", 3);
    hashTable.insert("mango", 4);
    hashTable.insert("peach", 5);
    hashTable.printTable();
    cout << "Value for key 'apple': " << hashTable.search("apple") << endl;
    cout << "Value for key 'banana': " << hashTable.search("banana") << endl;
    hashTable.remove("banana");
    hashTable.printTable();
    return 0;
}
