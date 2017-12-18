#include <blitz/array.h>

using namespace blitz;

struct sparseTriplet {
    int nz;
    int *row;
    int *col;
    double *val;
};


class LUFactorizer {
    int N;
    Array<double, 2> * A;

    sparseTriplet triplet;

    void toSparseTriplet();

  public:
    LUFactorizer(Array<double, 2> * const &);
    
    Array<double, 2> & get_A();

    void factorize();

    Array<double, 2> const & solve(Array<double, 2> * const &, Array<double, 2> * &);

    ~LUFactorizer();
};

