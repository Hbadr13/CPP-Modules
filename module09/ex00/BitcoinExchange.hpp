#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#define MAX_DATA 99999
#define MAX_INT 2147483647
class Bitcoin;
class BitcoinExchange
{
private:
    std::map<std::string, Bitcoin> _mapscv;

public:
    ~BitcoinExchange();
    BitcoinExchange();
    BitcoinExchange(std::string path);
    std::map<std::string, Bitcoin> &getMap();
    void setMap(std::map<std::string, Bitcoin> &mp);
    int read_and_parsFILE_SCV(std::string path);
    float findBitcoin(Bitcoin &bitc);
    int initialization(std::string path);
};

class Bitcoin
{
private:
    int _year;
    int _month;
    int _day;
    float _prix;
    float _value;
    std::string _format;

public:
    Bitcoin();
    Bitcoin(std::string year, std::string month, std::string day, std::string prix);
    Bitcoin(std::string year, std::string month, std::string day, float value);
    ~Bitcoin();
    float &getPrix();
    int &getYear();
    int &getMonth();
    int &getDay();
    float &getValue();
    std::string &getFormat();
    bool operator>(Bitcoin &other);
    bool operator<(Bitcoin &other);
    Bitcoin operator=(Bitcoin &other);
};
