// sort_race.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <vector>
#include <chrono>
#include <algorithm>
#include <string>
#include <iostream>
#include <sstream>
#include <fstream>
#include "DataGenerator.h"
//#include "Participants.h"
#include <regex>

using namespace std;

//string ParseName(string& method_name)
//{
//    transform(method_name.begin(), method_name.end(), method_name.begin(),
//        [](unsigned char c) { return std::tolower(c); });
//
//    auto res = regex_replace(method_name, std::regex("_by_"), "\t");
//    if (res.length() == method_name.length())
//    {
//        res = regex_replace(res, std::regex("by"), "\t");
//        if (res.length() == method_name.length())
//            res = regex_replace(res, std::regex("_"), "\t");
//    }
//    return res;
//}
//
//#define RUN(x) {                \
//    Run(#x, x, data);           \
//}
//
//
//static string team = "";
//static string dataset = "";
//static vector<string> logs;
//
//template <typename T>
//void Run(string method_name, Participant<T> p, vector<T> data)
//{
//    auto start = chrono::system_clock::now();
//    vector<T> res = p(data);
//    auto stop = chrono::system_clock::now();
//    auto time = chrono::duration_cast<chrono::microseconds>(stop - start).count();
//
//    ostringstream oss{};
//    oss << "\"" << dataset << "\"\t"
//        << data.size() << "\t"
//        << team << "\t"
//        << ParseName(method_name) << "\t"
//        << ((data.size() == res.size() && is_sorted(res.begin(), res.end())) ? to_string(time) : "-1");
//    logs.push_back(oss.str());
//}

int main()
{
    int size = 100;
    vector<int> data = GenerateData(size);
    for (int i = 1; i <= size; i++) {
        cout << data[i] << endl;
    }
    
    //    cout << endl << "**************INTEGER RACE**************" << endl << endl;

    //    auto intDataSets = GenerateIntDataSets();
    //    while (!intDataSets.empty())
    //    {
    //        auto& ds = intDataSets.top();
    //        dataset = ds.description;
    //        auto& data = ds.data;

    //        team = "GazdikTeam";
    //        RUN(sort_by_std);

    //        //RUN(NameSort_by_Li);
    //        //RUN(NameSort_by_Pudovnin);
    //        //RUN(NameSort_by_Haisarova);
    //        //RUN(NameSort_by_Petruhina);
    //        //RUN(NameSort_by_Devyatkina);

    //        intDataSets.pop();
    //    }
    //
    //{
    //    ofstream fout("release.txt");
    //    for (auto& s : logs)
    //        fout << s << endl;
    //}
}