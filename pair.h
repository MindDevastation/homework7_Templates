#ifndef PAIR_H
#define PAIR_H


template <typename T, typename T1> class Pairs
{
protected:
    T value;
    T1 value1;
public:
    Pairs(T value, T1 value1){
        this->value = value;
        this->value1 = value1;
    }
    T getValue(){return this->value;}
    void setValue(T newValue){this->value = newValue;}

    T1 getValue1(){return this->value1;}
    void setValue1(T1 newValue1){this->value1 = newValue1;}

};

//template <typename T, typename T1> class PairsInfo: public Pairs<T, T1>
//{
//public:
//    PairsInfo(T value, T1 value1): Pairs<T, T1>(value, value1) {

//    }

//};


#endif // PAIR_H
