// #include <iostream>
// #include <unordered_map>
// #include <string>
// using namespace std;

// int main()
// {
//     unordered_map<string, int> ourmap;

//     // insert
//     pair<string, int> p("abc", 1);
//     ourmap.insert(p);
//     ourmap["def"] = 2;

//     // find or access
//     cout << ourmap["abc"] << endl;
//     cout << ourmap.at("abc") << endl;

//     // cout << ourmap.at("ghi") << endl;
//     cout << "size : " << ourmap.size() << endl;
//     cout << ourmap["ghi"] << endl;
//     cout << "size : " << ourmap.size() << endl;

//     // check Presense
//     if (ourmap.count("ghi") > 0)
//     {
//         cout << "ghi is present" << endl;
//     }

//     // erase
//     ourmap.erase("ghi");
//     cout << "size : " << ourmap.size() << endl;
//     if (ourmap.count("ghi") > 0)
//     {
//         cout << "ghi is present" << endl;
//     }
// }




// #include <iostream>
// #include <vector>
// #include <unordered_map>
// using namespace std;

// vector<int> removeDuplicates(int *a, int size)
// {
//     vector<int> output;
//     unordered_map<int, bool> seen;
//     for (int i = 0; i < size; i++)
//     {
//         if (seen.count(a[i]) > 0)
//         {
//             continue;
//         }
//         seen[a[i]] = true;
//         output.push_back(a[i]);
//     }
//     return output;
// }

// int main()
// {
//     int a[] = {1, 2, 3, 3, 2, 1, 4, 3, 6, 5, 5};
//     vector<int> output = removeDuplicates(a, 11);
//     for (int i = 0; i < output.size(); i++)
//     {
//         cout << output[i] << endl;
//     }
// }




// #include <iostream>
// #include <unordered_map>
// #include <vector>
// #include <string>
// using namespace std;

// int main()
// {
//     unordered_map<string, int> ourmap;
//     ourmap["abc"] = 1;
//     ourmap["abc1"] = 2;
//     ourmap["abc2"] = 3;
//     ourmap["abc3"] = 4;
//     ourmap["abc4"] = 5;
//     ourmap["abc5"] = 6;

//     unordered_map<string, int>::iterator it = ourmap.begin();
//     while (it != ourmap.end())
//     {
//         cout << "Key : " << it->first << " Value: " << it->second << endl;
//         it++;
//     }

//     // find
//     unordered_map<string, int>::iterator it2 = ourmap.find("abc");
//     ourmap.erase(it2, it2 + 4);

//     vector<int> v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
//     v.push_back(5);

//     vector<int>::iterator it1 = v.begin();
//     while (it1 != v.end())
//     {
//         cout << *it1 << endl;
//         it1++;
//     }
// }




// #include <string>
// using namespace std;

// template <typename V>
// class MapNode {
// 	public:
// 		string key;
// 		V value;
// 		MapNode* next;

// 		MapNode(string key, V value) {
// 			this->key = key;
// 			this->value = value;
// 			next = NULL;
// 		}

// 		~MapNode() {
// 			delete next;
// 		}
// };

// template <typename V>
// class ourmap {
// 	MapNode<V>** buckets;
// 	int count;
// 	int numBuckets;

// 	public:
// 	ourmap() {
// 		count = 0;
// 		numBuckets = 5;
// 		buckets = new MapNode<V>*[numBuckets];
// 		for (int i = 0; i < numBuckets; i++) {
// 			buckets[i] = NULL;
// 		}
// 	}

// 	~ourmap() {
// 		for (int i = 0; i < numBuckets; i++) {
// 			delete buckets[i];
// 		}
// 		delete [] buckets;
// 	}

// 	int size() {
// 		return count;
// 	}

// 	V getValue(string key) {
		
// 	}

// 	private:
// 	int getBucketIndex(string key) {
// 		int hashCode = 0;

// 		int currentCoeff = 1;
// 		for (int i = key.length() - 1; i >= 0; i--) {
// 			hashCode += key[i] * currentCoeff;
// 			hashCode = hashCode % numBuckets;
// 			currentCoeff *= 37;
// 			currentCoeff = currentCoeff % numBuckets;
// 		}

// 		return hashCode % numBuckets;
// 	}

// 	public:
// 	void insert(string key, V value) {
// 		int bucketIndex = getBucketIndex(string key);
// 		MapNode<V>* head = buckets[bucketIndex];
// 		while (head != NULL) {
// 			if (head->key == key) {
// 				head->value = value;
// 				return;
// 			}
// 			head = head->next;
// 		}
// 		head = buckets[bucketIndex];
// 		MapNode<V>* node = new MapNode<V>(key, value);
// 		node->next = head;
// 		buckets[bucketIndex] = node;
// 		count++;
// 	}

// };




#include <string>
using namespace std;

template <typename V>
class MapNode
{
public:
    string key;
    V value;
    MapNode *next;

    MapNode(string key, V value)
    {
        this->key = key;
        this->value = value;
        next = NULL;
    }

    ~MapNode()
    {
        delete next;
    }
};

template <typename V>
class ourmap
{
    MapNode<V> **buckets;
    int count;
    int numBuckets;

public:
    ourmap()
    {
        count = 0;
        numBuckets = 5;
        buckets = new MapNode<V> *[numBuckets];
        for (int i = 0; i < numBuckets; i++)
        {
            buckets[i] = NULL;
        }
    }

    ~ourmap()
    {
        for (int i = 0; i < numBuckets; i++)
        {
            delete buckets[i];
        }
        delete[] buckets;
    }

    int size()
    {
        return count;
    }

    V getValue(string key)
    {
        int bucketIndex = getBucketIndex(string key);
        MapNode<V> *head = buckets[bucketIndex];
        while (head != NULL)
        {
            if (head->key == key)
            {
                return head->value;
            }
            head = head->next;
        }
        return 0;
    }

private:
    int getBucketIndex(string key)
    {
        int hashCode = 0;

        int currentCoeff = 1;
        for (int i = key.length() - 1; i >= 0; i--)
        {
            hashCode += key[i] * currentCoeff;
            hashCode = hashCode % numBuckets;
            currentCoeff *= 37;
            currentCoeff = currentCoeff % numBuckets;
        }

        return hashCode % numBuckets;
    }

public:
    void insert(string key, V value)
    {
        int bucketIndex = getBucketIndex(string key);
        MapNode<V> *head = buckets[bucketIndex];
        while (head != NULL)
        {
            if (head->key == key)
            {
                head->value = value;
                return;
            }
            head = head->next;
        }
        head = buckets[bucketIndex];
        MapNode<V> *node = new MapNode<V>(key, value);
        node->next = head;
        buckets[bucketIndex] = node;
        count++;
    }

    V remove(string key)
    {
        int bucketIndex = getBucketIndex(string key);
        MapNode<V> *head = buckets[bucketIndex];
        MapNode<V> *prev = NULL;
        while (head != NULL)
        {
            if (head->key == key)
            {
                if (prev == NULL)
                {
                    buckets[bucketIndex] = head->next;
                }
                else
                {
                    prev->next = head->next;
                }
                V value = head->value;
                head->next = NULL;
                delete head;
                count--;
                return value;
            }
            prev = head;
            head = head->next;
        }
        return 0;
    }
};