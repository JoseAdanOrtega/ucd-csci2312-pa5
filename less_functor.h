//
// Created by Jose Ortega on 5/8/16
//
#ifndef LESS_FUNCTOR_H
#define LESS_FUNCTOR_H

#include<string>

namespace CS2312 {
    template <typename type>
    class less {
    public:
        bool operator() (const type &rhs, const type &lhs){
            if (rhs < lhs)
                return true;

            return false;
        }
    };

    template <>
    class less<std::string> {
    public:
        bool operator() (const std::string &rhs, const std::string &lhs){
            if (rhs < lhs)
                return true;

            return false;
        }
    };

    template <>
    class less<const char*> {
    public:
        bool operator() (const char *rhs, const char *lhs) {
            string slhs, srhs;

            srhs = rhs;
            slhs = lhs;

            if (srhs < slhs)
                return true;

            return false;
        }
    };
}
#endif LESS_FUNCTOR_H